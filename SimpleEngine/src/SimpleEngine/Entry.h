#pragma once
#include "Application.h"

#ifdef SE_PLATFORM_WINDOWS
extern SimpleEngine::Application* SimpleEngine::CreateApplication();

int main(int argc, char** argv)
{
	SimpleEngine::Log::Init();
	SE_CORE_WARN("Logging System initialized");
	SE_INFO("Hello :)");
	auto app = SimpleEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif