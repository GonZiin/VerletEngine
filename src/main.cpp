#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/Window.hpp>
#include <iostream>

const unsigned int altura = 1000;
const unsigned int largura = 1000;

int main(int argc, char *argv[]) {
  // Window creation
  sf::RenderWindow window(sf::VideoMode(largura, altura), "VerletEngine");

  // Window Main Loop
  while (window.isOpen()) {
    sf::Event event; // Event creation
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // Clear window with black background
    window.clear(sf::Color::Black);

    // Update Window
    window.display();
  }
  return 0;
}
