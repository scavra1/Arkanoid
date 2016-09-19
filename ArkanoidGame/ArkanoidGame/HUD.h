#pragma once

#include <SFML\Graphics.hpp>

class Score : public sf::Text
{
private:
	int points;

public:
	Score(sf::Font & font, int score = 0)
		: points(score), Text(std::to_string(score), font)
	{
	}

	void addPoints(int points);
	void setScore(int score);
	int getScore();

	~Score()
	{
	}

};