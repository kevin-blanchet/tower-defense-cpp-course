#pragma once

class Tile
{
public:
	enum struct TileType
	{
		Dirt
		, Grass
		, Cliffs
		, Path
		, Water
		, Void
	};

	Tile(Tile::TileType type);
	Tile();
	~Tile();

	bool isConstructible();
private:
	Tile::TileType type;
};

