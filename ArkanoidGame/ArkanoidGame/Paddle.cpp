#include "Paddle.h"

Paddle::Paddle(sf::IntRect layout)
	: MovingObject(layout)
{
	this->setFillColor(sf::Color::Black);
	this->sf::RectangleShape::setPosition(layout.left, layout.top);
	this->sf::RectangleShape::setSize(sf::Vector2f(layout.width, layout.height));

	this->filling.setFillColor(sf::Color::Green);
	this->filling.setPosition(layout.left + 5, layout.top + 5);
	this->filling.setSize(sf::Vector2f(layout.width - 10, layout.height - 10));
	this->movingSpeed = 4;
}

void Paddle::setMovingSpeed(const int movingSpeed)
{
	this->movingSpeed = movingSpeed;
}

void Paddle::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		MovingObject::move(-movingSpeed, 0);
		sf::RectangleShape::move(-movingSpeed, 0);
		this->filling.move(-movingSpeed, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		MovingObject::move(movingSpeed, 0);
		sf::RectangleShape::move(movingSpeed, 0);
		this->filling.move(movingSpeed, 0);
	}


}

void Paddle::Draw(sf::RenderWindow & window)
{
	window.draw(*this);
	window.draw(this->filling);
}
