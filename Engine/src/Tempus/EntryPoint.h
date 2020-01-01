#pragma once
#include "Log.h"

#ifdef TP_PLATFORM_WINDOWS

extern Tempus::Application* Tempus::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tempus::CreateApplication();
	Tempus::Log::Init();
	TP_CORE_TRACE("Does it work?");
	app->Run();
	delete app;
}

#endif