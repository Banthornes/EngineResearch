#pragma once

namespace ENG
{
#ifdef _WIN32
	__interface Light;
	__interface Model;
	__interface SceneNode
#elif
	class Light;
	class Model;
	class SceneNode
#endif
	{
	public:
		Light& AddLight();
		Model& AddModel();
	};
}