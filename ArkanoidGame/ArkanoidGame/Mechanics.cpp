#include "Mechanics.h"

void SceneTranslator::setSceneMode(sf::Vector2i sceneMode)
{
	this->sceneMode = sceneMode;
}

void SceneTranslator::setSceneMode(int width, int height)
{
	this->sceneMode.x = width;
	this->sceneMode.y = height;
}

void SceneTranslator::setResolution(sf::Vector2i resolution)
{
	this->resolution = resolution;
}

void SceneTranslator::setResolution(int width, int height)
{
	resolution.x = width;
	resolution.y = height;
}

sf::FloatRect SceneTranslator::Translate(sf::IntRect sceneDim)
{
	/* TO DO: */
	/* implement translation to screen*/
	return sf::FloatRect(sceneDim.left, sceneDim.top, sceneDim.width, sceneDim.height);
}

SceneTranslator & SceneTranslator::INSTANCE()
{
	if (instance == nullptr)
	{
		instance = new SceneTranslator();
	}

	return *instance;
}

SceneTranslator *SceneTranslator::instance = nullptr;