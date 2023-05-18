#include <SFML/Graphics.hpp>

using namespace sf;

int main(void) {
	sf::RenderWindow  window(VideoMode(640, 480), "Snake Game");
	// 1초에  60번의 작업이 이루어 지도록 frame 조절
	// 컴퓨터 사양이 달라도 똑같은 속도로 처리함
	window.setFramerateLimit(60);

	RectangleShape snake;
	snake.setPosition(200, 300);
	snake.setSize(Vector2f(30, 30));
	snake.setFillColor(Color::Green);

	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Up))
			snake.move(0, -1);
		if (Keyboard::isKeyPressed(Keyboard::Down))
			snake.move(0, 1);

		window.clear(); 

		window.draw(snake);

		window.display();
	}

	return 0;
}