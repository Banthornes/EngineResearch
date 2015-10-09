#pragma once

namespace ENG
{
	class SceneNode;
	class Scene
	{
	public:
		static Scene& Create();

		virtual std::string GetName() const = 0;
		
		virtual SceneNode& AddSceneNode(const std::string& name) = 0;
	};
}