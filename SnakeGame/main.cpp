#include <SFML/Graphics.hpp>

using namespace sf;

int main(void) {
	sf::RenderWindow  window(VideoMode(640, 480), "Snake Game");

	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.display();
	}

	return 0;
}