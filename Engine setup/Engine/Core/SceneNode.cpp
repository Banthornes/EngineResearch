#include "stdafx.h"
#include "SceneNode.h"

using namespace ENG;

class SceneNode_Impl : public SceneNode
{
public:
	std::string GetName() const;

private:
	std::string m_name;
};

std::string SceneNode_Impl::GetName() const
{
	return m_name;
}
