#pragma once

#include <SFML\Graphics.hpp>

#include "MovingObject.h"

class Brick
{
private:
	int health;
	int maxHealth;

public:
	Brick(sf::IntRect layout, int maxHealth);
	void GetDamage(const int damage);

	void Update();
	bool isDestroyable() const;
};