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

int main()
{
	Playground* pg = new Playground();
	pg->Run();
	delete pg;
}