#include "stdafx.h"
#include "SceneNode.h"
#include "Scene.h"

using namespace ENG;

class Scene_Impl : public Scene
{
public:
	std::string GetName() const override;

	SceneNode& AddSceneNode(const std::string& name) override;

private:
	std::string m_name;
	std::vector<SceneNode*> m_sceneNodes;
};

std::string Scene_Impl::GetName() const
{
	return m_name;
}

SceneNode& Scene_Impl::AddSceneNode(const std::string& name)
{
	SceneNode* sceneNode = nullptr;

	for (auto it : m_sceneNodes)
	{
		if (it->GetName() == name)
		{
			sceneNode = it;
		}
	}

	if (sceneNode == nullptr)
	{
		//sceneNode = CreateSceneNode();
	}

	return *sceneNode;
}

Scene& ENG::Scene::Create()
{
	return *(new Scene_Impl());
}
