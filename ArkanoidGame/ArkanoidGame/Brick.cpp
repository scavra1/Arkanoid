#include "Brick.h"

Brick::Brick(sf::IntRect layout, int maxHealth)
{
	health = this->maxHealth = maxHealth;
}

void Brick::GetDamage(const int damage)
{
	health -= damage;
}
