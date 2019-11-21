#pragma once
#include "Core.h"

//#define SE_API __declspec(dllexport)

namespace SimpleEngine {

	class SE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	/* To be declared in the implementing Application */
	SimpleEngine::Application* CreateApplication();
}

