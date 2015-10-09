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

		Scene& CreateScene();

	private:
		class Impl;
		Impl* pimpl;

		Engine();
	};
}