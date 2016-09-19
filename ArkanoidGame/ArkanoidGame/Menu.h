#pragma once
#include <vector>
#include <SFML\Graphics.hpp>

enum Heading
{
	Left,
	Right,
	Bottom,
	Top
};
class HorizontalSlidingMenu
{
private:
	Heading slideHeading;
	bool isActive;
	bool animationStarted;
	sf::Clock animationTimer;
	sf::RenderWindow * windowPointer;
	std::vector<sf::Text *> optionVector;


public:
	HorizontalSlidingMenu(sf::RenderWindow * renderTarget);
	~HorizontalSlidingMenu();

	void startAnimation();

	void addNewOption(sf::Text newOption);

	void setStartingSide(Heading side);

	void Update();

	void Draw();
};