#include "Tile.h"

Tile::Tile(Tile::TileType type) :
	type(type)
{
}

Tile::Tile()
{
	this->type = Tile::TileType::Dirt;
}

Tile::~Tile()
{
}

bool Tile::isConstructible()
{
	bool returnValue = false;
	switch (this->type)
	{
	case Tile::TileType::Dirt:
	case Tile::TileType::Grass:
		returnValue = true;
		break;
	case Tile::TileType::Cliffs:
	case Tile::TileType::Path:
	case Tile::TileType::Water:
		returnValue = false;
		break;
	}
	return returnValue;
}
