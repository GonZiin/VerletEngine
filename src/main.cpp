#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Context.hpp>
#include <SFML/Window/ContextSettings.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/Window.hpp>
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

    // Update Window
    window.display();
  }
  return 0;
}
