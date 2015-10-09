#pragma once

namespace ENG
{
	class SceneNode;
	class Scene;
	class Model;
	class Engine
	{
	public:
		static bool Create();
		static int Run();

		virtual Scene& CreateScene(const std::string& name) = 0;
		virtual void AddSceneNodeToScene(SceneNode sceneNode, Scene scene) = 0;
		virtual Model& LoadModel() = 0;
	};
}