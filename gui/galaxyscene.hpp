#ifndef GALAXYSCENE_HPP
#define GALAXYSCENE_HPP

#include <memory>

#include <QGraphicsScene>

namespace Universe
{
    class Galaxy;
    class PlanetarySystem;
}

class GalaxyScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GalaxyScene(QObject* p = 0);
    virtual ~GalaxyScene();

    QString galaxyName() const;

private:
    std::unique_ptr<Universe::Galaxy> m_galaxy;

    void populate();

    void placeSystem(const Universe::PlanetarySystem& system);

    void extendRect();

signals:

public slots:

};

#endif // GALAXYSCENE_HPP
