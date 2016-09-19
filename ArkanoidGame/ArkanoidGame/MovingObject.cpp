#include "MovingObject.h"

MovingObject::MovingObject(sf::IntRect Rectangle)
{
	rectangle = Rectangle;
}

void MovingObject::setPosition(int x, int y)
{
	rectangle.left = x;
	rectangle.top = y;
}

void MovingObject::setSize(int width, int height)
{
	rectangle.width = width;
	rectangle.height = height;
}

void MovingObject::move(int xdiv, int ydiv)
{
	rectangle.left += xdiv;
	rectangle.width += ydiv;
}

sf::IntRect MovingObject::getLayout() const
{
	return rectangle;
}
