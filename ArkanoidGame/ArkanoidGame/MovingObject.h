#pragma once
#include <SFML\Graphics.hpp>

class MovingObject
{
protected:
	sf::IntRect rectangle;

public:
	MovingObject(sf::IntRect Rectangle = sf::IntRect());

	void setPosition(int x, int y);
	void setSize(int width, int height);
	void move(int xdiv, int ydiv);

	sf::IntRect getLayout() const;

};