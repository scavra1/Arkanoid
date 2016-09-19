#include <SFML/Graphics.hpp>
#include "Paddle.h"
#include "Ball.h"
#include "Brick.h"
#include "Mechanics.h"

int main()
{
	sf::Clock UpdateTimer;
	sf::Clock RenderTimer;

	const int UpdateTime = 14;
	const int RenderTime = 14;

	sf::RenderWindow mainWindow(sf::VideoMode(1024, 768, 32), "Arkanoid v2.0");

	Paddle newPaddle(sf::IntRect(100, 200, 56, 17));
	Ball ball(sf::IntRect(200, 200, 25, 25), 2);
	SceneTranslator & sceneTranslator = SceneTranslator::INSTANCE();
	while (mainWindow.isOpen())
	{
		sf::Event event;
		while (mainWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				mainWindow.close();
		}

		/* Update Section */
		if (UpdateTimer.getElapsedTime().asMilliseconds() > UpdateTime)
		{
			UpdateTimer.restart();
			newPaddle.Update();

		}

		/* Drawing Section */
		if (RenderTimer.getElapsedTime().asMilliseconds() > RenderTime)
		{
			mainWindow.clear(sf::Color::White);
			RenderTimer.restart();
			newPaddle.Draw(mainWindow);
			ball.Draw(mainWindow);
			mainWindow.display();
		}

	}

	return 0;
}
