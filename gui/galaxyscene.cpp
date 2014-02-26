#include "galaxyscene.hpp"

#include <universe/galaxy.hpp>
#include <universe/jsonloader.hpp>

#include <cassert>

#include <QGraphicsEllipseItem>

#include <QDebug>

using namespace std::placeholders;

GalaxyScene::GalaxyScene(QObject* p) : QGraphicsScene(p)
{
    std::string json = "{\"name\":\"Galaxy1\", \"systems\": [";
    json += "{\"name\":\"System1\", \"position\": {\"x\":0, \"y\":0}, \"planets\": [] }, ";
    json += "{\"name\":\"System2\", \"position\": {\"x\":10, \"y\":2}, \"planets\": [] }, ";
    json += "{\"name\":\"System3\", \"position\": {\"x\":-2, \"y\":-5}, \"planets\": [] }, ";
    json += "{\"name\":\"System4\", \"position\": {\"x\":9, \"y\":12}, \"planets\": [] }";
    json += "] }";
    qDebug() << QString::fromStdString(json);
    m_galaxy.reset(new Universe::Galaxy(std::move(Universe::JsonLoader::parseGalaxy(json))));
    qDebug() << m_galaxy->count();

    populate();
}

GalaxyScene::~GalaxyScene()
{}

QString GalaxyScene::galaxyName() const
{
    if(!m_galaxy) return "";
    return QString::fromStdString(m_galaxy->name());
}

void GalaxyScene::populate()
{
    assert(m_galaxy);

    std::for_each(m_galaxy->begin(), m_galaxy->end(), std::bind(&GalaxyScene::placeSystem, this, _1));

    extendRect();
}

void GalaxyScene::placeSystem(const Universe::PlanetarySystem& system)
{
    const double length = .1;
    qDebug() << "placeSystem(" << QString::fromStdString(system.name()) << "): " << system.position().x() << "x" << system.position().y();
    auto* ellipse = addEllipse(QRectF(system.position().x() - length/2, system.position().y() - length/2, length, length), QPen(Qt::lightGray), Qt::white);
    auto* text = new QGraphicsTextItem(QString::fromStdString(system.name()), ellipse);
    text->moveBy(length, length);
}

void GalaxyScene::extendRect()
{
    const double margin = 10;
    QRectF r = sceneRect();
    qDebug() << r;
    r.setTopLeft(r.topLeft() - QPointF(margin, margin));
    r.setBottomRight(r.bottomRight() + QPointF(margin, margin));
    qDebug() << r;
    setSceneRect(r);
}
