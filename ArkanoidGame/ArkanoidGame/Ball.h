#pragma once

#include <SFML\Graphics.hpp>
#include "MovingObject.h"

class Ball : MovingObject, public sf::CircleShape
{
private:
	int m_power;				// power of the ball
	bool m_started;				// has ball been shot from paddle
	sf::CircleShape m_filling;	// colourful filling of the ball
public:
	/* Constructor
	Parameters:
	/a Layout - layout of ball including its width and height
	/a power - starting value of ball's power */
	Ball(sf::IntRect Layout, int power);

	/*Function sets new value of ball's power*/
	void setPower(int newPower);

	/*Returns current value of ball's power */
	int getPower() const;

	/*Renders ball onto /a window */
	void Draw(sf::RenderWindow & window);
};