#pragma once

namespace ENG
{
#ifdef _WIN32
	__interface SceneNode;
	__interface Scene
#else
	class SceneNode;
	class Scene
#endif
	{
	public:
		virtual SceneNode& AddSceneNode() = 0;
	};
}