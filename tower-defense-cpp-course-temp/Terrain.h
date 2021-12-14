#pragma once

#include <SFML/Graphics.hpp>

#include "Tile.h"

#include <vector>

class Terrain
{
public:
	Terrain(std::string file);
	~Terrain();

	Tile getTile(int x, int y);

private:
	int width;
	int height;

	std::vector<Tile> terrainVector;

	void initFromFile(std::string file);
	void addTileFromChar(char tileAsChar);
};

