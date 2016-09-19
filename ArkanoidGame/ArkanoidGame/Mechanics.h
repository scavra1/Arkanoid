#pragma once

#include <SFML\Graphics.hpp>
class SceneTranslator
{
private:
	sf::Vector2i sceneMode;
	sf::Vector2i resolution;
	static SceneTranslator * instance;

public:
	SceneTranslator()
	{
	}

	void setSceneMode(sf::Vector2i sceneMode);
	void setSceneMode(int width, int height);

	void setResolution(sf::Vector2i resolution);
	void setResolution(int width, int height);

	sf::FloatRect Translate(sf::IntRect sceneDim);
	static SceneTranslator & INSTANCE();

};