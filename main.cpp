#include <SFML\Graphics.hpp>

int main() {
	// first parameter, VideoMode
	// current code uses the constructor that takes in 2 parameters, width and height, basically, the resolution
	// second parameter is the name of the window
	sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML is possibly pretty cool");
	// CircleShape is your default circle
	// constructor takes the length of the radius as the parameter
	// in this case it is 100
	sf::CircleShape shape(100.f);
	// colors the shape with a Color, in this case, Green
	shape.setFillColor(sf::Color::Green);

	// program runs as long as the window is open
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			// if the event is the user clicking the red cross
			if (event.type == sf::Event::Closed) {
				// window is no more open
				window.close();
			}
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			return 0;
		}

		// empty the window
		window.clear();
		// draw the shape
		window.draw(shape);
		// and display
		window.display();
	}

	return 0;
}