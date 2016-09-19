#pragma once

#include <SFML\Graphics.hpp>
#include "MovingObject.h"

class Paddle : public MovingObject, public sf::RectangleShape
{
private:
	int movingSpeed;
	sf::RectangleShape filling;
public:
	Paddle(sf::IntRect layout);
	void setMovingSpeed(const int movingSpeed);
	void Update();
	void Draw(sf::RenderWindow & window);
};