#include "TerrainRenderer.h"

TerrainRenderer::TerrainRenderer(std::string textureFilename)
{
	if (!this->terrainTexture.loadFromFile(textureFilename))
		std::cerr << "Something wrong happen" << std::endl;
}

TerrainRenderer::~TerrainRenderer()
{
}
