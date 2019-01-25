#pragma once

#ifdef TP_PLATFORM_WINDOWS

extern Tempus::Application* Tempus::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tempus::CreateApplication();
	app->Run();
	delete app;
}

#endif