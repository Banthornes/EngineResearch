#pragma once

namespace ENG
{
	class SceneNode;
	class Scene;
	class SceneManager
	{
	public:
		static SceneManager& Create();

		virtual Scene& CreateScene(const std::string& name) = 0;
		virtual Scene& GetScene(const std::string& name) = 0;
		virtual Scene& GetScene(const unsigned int id) = 0;
		virtual void RemoveScene(const std::string& name) = 0;
		virtual void RemoveScene(const unsigned int id) = 0;
	private:
	};
}