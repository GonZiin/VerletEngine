#include "renderer.hpp"
#include <SFML/Graphics.hpp>
#include <cstdint>
#include <iostream>

int main(int argc, char *argv[]) {
  // Window settings
  constexpr int32_t window_width = 1000;
  constexpr int32_t window_height = 1000;

  // Window creation
  sf::ContextSettings settings;
  settings.antialiasingLevel = 1;
  sf::RenderWindow window(sf::VideoMode(window_width, window_height),
                          "VerletEngine");
  const uint32_t frame_rate = 60;
  window.setFramerateLimit(frame_rate);

  // Create Renderer instance
  Renderer renderer(window);

  // Window Main Loop
  while (window.isOpen()) {
    sf::Event event; // Event creation
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed ||
          sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        window.close();
    }

    // Clear window with black background
    window.clear(sf::Color::Black);

    // Call Renderer Class
    renderer.renderParticle(50.0f, sf::Vector2f(400.0f, 300.0f),
                            sf::Color::Red);

    // Update Window
    window.display();
  }
  return 0;
}
