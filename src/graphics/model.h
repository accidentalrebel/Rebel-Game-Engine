#pragma once
#include "mesh.h"
#include "material.h"

typedef struct Model {
	Mesh** meshes;
	Material* material;
} Model;

Model* ModelLoadFromMesh(Mesh* mesh);
void ModelDraw(Model* modelObject, vec3 position, vec3 color);
