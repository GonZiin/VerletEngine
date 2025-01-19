#pragma once
#include <SFML/Graphics.hpp>

class Renderer {
public:
  explicit Renderer(sf::RenderWindow &window) : m_window(window) {}

  void renderParticle(float radius, sf::Vector2f position,
                      sf::Color color) const {
    sf::CircleShape particle(radius);
    particle.setPointCount(32);
    particle.setOrigin(radius, radius);
    particle.setPosition(position);
    particle.setFillColor(color);

    m_window.draw(particle);
  }

private:
  sf::RenderWindow &m_window;
};
