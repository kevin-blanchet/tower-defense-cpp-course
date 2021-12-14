#include "Terrain.h"

#include <iostream>
#include <fstream>

Terrain::Terrain(std::string file)
{
	initFromFile(file);
    std::cout << "\n" << sizeof(this->height) << ", " << sizeof(this->width) << "\n";
}

Terrain::~Terrain()
{
}

Tile Terrain::getTile(int x, int y)
{
	return terrainVector[(static_cast<size_t>(y) * static_cast<size_t>(this->width)) + static_cast<size_t>(x)];
}

void Terrain::initFromFile(std::string file)
{
    std::ifstream myfile;
    myfile.open(file);
    std::string line;
    if (myfile.is_open())
    {
        int lineNumber = 0;
        while (getline(myfile, line))
        {
            switch (lineNumber)
            {
            case 0:
                this->width = static_cast<int>(std::stoi(line));
                break;
            case 1:
                this->height = static_cast<int>(std::stoi(line));
                break;
            default:
                for (const auto& tileAsChar : line)
                {
                    this->addTileFromChar(tileAsChar);
                }
                break;
            }
            lineNumber++;
        }
        myfile.close();
    }
    else std::cout << "Unable to open file";
}

void Terrain::addTileFromChar(char tileAsChar)
{
    switch (tileAsChar)
    {
    case 'D':
        this->terrainVector.push_back(Tile(Tile::TileType::Dirt));
    case 'G':
        this->terrainVector.push_back(Tile(Tile::TileType::Grass));
    case 'P':
        this->terrainVector.push_back(Tile(Tile::TileType::Path));
    case 'C':
        this->terrainVector.push_back(Tile(Tile::TileType::Cliffs));
    case 'W':
        this->terrainVector.push_back(Tile(Tile::TileType::Water));
    default:
        this->terrainVector.push_back(Tile(Tile::TileType::Void));
        break;
    }
}
