#include "stdafx.h"
#include "SceneNode.h"
#include "Scene.h"

using namespace ENG;

class Scene_Impl : public Scene
{
public:
	SceneNode& AddSceneNode() override;
private:
	std::vector<SceneNode> m_sceneNodes;
};