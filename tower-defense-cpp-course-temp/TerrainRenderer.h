#pragma once

#include <SFML/Graphics.hpp>

#include <iostream>

class TerrainRenderer
{
public:
	TerrainRenderer(std::string textureFilename);
	~TerrainRenderer();

private:
	sf::Texture terrainTexture;
};

