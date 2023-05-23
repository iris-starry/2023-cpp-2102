#include <SFML/Graphics.hpp>
#include <stdlib.h>  //srand(), rand()
#include <time.h> //time()

using namespace sf;

int main(void) {

	RenderWindow  window(VideoMode(640, 480), "Snake Game");
	// 1초에  60번의 작업이 이루어 지도록 frame 조절
	// 컴퓨터 사양이 달라도 똑같은 속도로 처리함
	window.setFramerateLimit(60);

	srand(time(NULL));

	// 한 칸을 40으로
	int block = 40;

	RectangleShape snake;
	snake.setPosition(200, 300);
	snake.setSize(Vector2f(30, 30));
	snake.setFillColor(Color::Green);

	RectangleShape apple;
	apple.setPosition(rand()%640-block, rand()%480-block);
	apple.setSize(Vector2f(30, 30));
	apple.setFillColor(Color::Red);
	
	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}

		// input
		// 네 개의 방향키가 중복으로 input되면 안됨
		if (Keyboard::isKeyPressed(Keyboard::Up))
			snake.move(0, -5);
		else if (Keyboard::isKeyPressed(Keyboard::Down))
			snake.move(0, 5);
		else if (Keyboard::isKeyPressed(Keyboard::Right))
			snake.move(5, 0);
		else if (Keyboard::isKeyPressed(Keyboard::Left))
			snake.move(-5, 0);

		// update

		// 뱀이 사과를 먹으면
		if (snake.getGlobalBounds().intersects(apple.getGlobalBounds())) {
			apple.setPosition(rand() % 640 - block, rand() % 480 - block);
		}

		// render
		window.clear(); 

		window.draw(snake);
		window.draw(apple);

		window.display();
	}

	return 0;
}