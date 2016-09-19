#include "HUD.h"

void Score::addPoints(int points)
{
	this->points += points;
	setString(sf::String(std::to_string(this->points)));
}

void Score::setScore(int score)
{
	points = score;
}

int Score::getScore()
{
	return points;
}
