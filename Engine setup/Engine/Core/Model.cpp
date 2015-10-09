#include "stdafx.h"
#include "Shader.h"
#include "Material.h"
#include "Mesh.h"
#include "Model.h"

using namespace ENG;

class Model_Impl : public Model
{
public:
private:
	std::vector<Mesh*> m_mesh;
};