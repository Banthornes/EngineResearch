#pragma once

namespace ENG
{
	class Light;
	class Model;
	class SceneNode
	{
	public:
		virtual std::string& GetName() = 0;

		virtual Light& AddLight() = 0;
		virtual Model& AddModel() = 0;
	};
}