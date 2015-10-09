#include "stdafx.h"
#include "Engine.h"
#include "SceneManager.h"

using namespace ENG;

class Engine::Impl
{
public:
	Impl();
	~Impl();

	Scene& CreateScene();
private:
	SceneManager* m_sceneManager;
};

Engine::Engine()
	: pimpl(new Impl)
{
}

Engine::Impl::Impl()
{
	m_sceneManager = &SceneManager::Create();
}

Engine::Impl::~Impl()
{
}
