#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
public:
	sf::Sprite& getSprite() { return m_sprite; }

	virtual void hit() = 0;

protected:
	sf::Sprite m_sprite;
};