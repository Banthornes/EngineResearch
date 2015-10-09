#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include "Engine.h"

using namespace ENG;

int main()
{
	if (Engine::Create())
	{

		//Engine::CreateScene("Level1", );
		return Engine::Run();
	}

	return -1;
}
