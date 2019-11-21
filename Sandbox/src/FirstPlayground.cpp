#include "SimpleEngine.h"

class Playground : public SimpleEngine::Application
{
public:
	Playground() 
	{

	}

	~Playground()
	{

	}

};

SimpleEngine::Application* SimpleEngine::CreateApplication() 
{
	return new Playground();
}