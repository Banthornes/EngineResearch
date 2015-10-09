#include "stdafx.h"
#include "Material.h"
#include "Mesh.h"

using namespace ENG;

class Mesh_Impl : public Mesh
{
public:
private:
	Material* m_material;
};