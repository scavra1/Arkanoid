#include "Menu.h"

HorizontalSlidingMenu::HorizontalSlidingMenu(sf::RenderWindow * renderTarget)
{
	this->isActive = false;
	this->animationStarted = false;
	this->slideHeading = Heading::Left;
	this->windowPointer = renderTarget;
}

HorizontalSlidingMenu::~HorizontalSlidingMenu()
{
	for (sf::Text *optionText : optionVector)
	{
		delete optionText;
	}
}

void HorizontalSlidingMenu::startAnimation()
{

	if (windowPointer == nullptr)
	{
		throw std::exception("No window reference(HorizontalSlidingMenu)");
	}
	else
	{
		this->animationStarted = true;
		if (this->slideHeading == Heading::Left)
		{
			/* set all text position on the left*/
			for (sf::Text *& textPointer : optionVector)
			{

			}
		}
		else
		{
			/*set all text position on the right*/
			for (sf::Text *& textPointer : optionVector)
			{

			}
		}

		this->animationTimer.restart();
	}
}

void HorizontalSlidingMenu::addNewOption(sf::Text newOption)
{
	optionVector.push_back(new sf::Text(newOption));
}

void HorizontalSlidingMenu::setStartingSide(Heading side)
{
	if (side == Heading::Left || side == Heading::Right)
	{
		this->slideHeading = side;
	}
}

void HorizontalSlidingMenu::Update()
{

	/* if animation ended - set menu to active state*/
}

void HorizontalSlidingMenu::Draw()
{
	if (this->animationStarted)
	{
		for (sf::Text * optionText : optionVector)
		{
			this->windowPointer->draw(*optionText);
		}
	}
}
