#include "Ball.h"

Ball::Ball(sf::IntRect Layout, int power)
	: MovingObject(Layout)
{
	this->m_power = power;
	this->setRadius((int)Layout.width / 2);
	this->sf::CircleShape::setPosition(Layout.left, Layout.top);
	this->setFillColor(sf::Color::Black);

	this->m_filling.setRadius((int)(Layout.width / 2 - 4));
	this->m_filling.setPosition(Layout.left + 4, Layout.top + 4);
	switch (power)
	{
	case 1: this->m_filling.setFillColor(sf::Color::Red); break;
	case 2: this->m_filling.setFillColor(sf::Color::Green); break;
	case 3:	this->m_filling.setFillColor(sf::Color::Blue); break;
	}
}

void Ball::setPower(int newPower)
{
	switch (m_power = newPower)
	{
	case 1: this->m_filling.setFillColor(sf::Color::Red); break;
	case 2: this->m_filling.setFillColor(sf::Color::Green); break;
	case 3:	this->m_filling.setFillColor(sf::Color::Blue); break;
	}
}

int Ball::getPower() const
{
	return m_power;
}

void Ball::Draw(sf::RenderWindow & window)
{
	window.draw(*this);
	window.draw(this->m_filling);
}
