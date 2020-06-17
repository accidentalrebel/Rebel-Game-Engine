#pragma once
#include "../external/cglm/cglm.h"

typedef struct Texture {
	unsigned int id;
	char* type;
} Texture;

typedef struct Vertex {
	vec3 position;
	vec3 normal;
	vec2 texCoords;
} Vertex;

typedef struct Mesh {
	Vertex** vertices;
	unsigned int verticesSize;
	unsigned int VAO;
	unsigned int VBO;
	unsigned int EBO;
} Mesh;

Mesh* MeshCreate();
void MeshSetup(Mesh* mesh);
void ParseVertex(Mesh* mesh, float *vertices, int verticesSize, int stride);

Mesh* MeshGenerateCube(float width, float height, float length);
