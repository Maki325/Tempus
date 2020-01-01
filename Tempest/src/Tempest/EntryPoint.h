#pragma once

#ifdef TP_PLATFORM_WINDOWS

extern Tempest::Application* Tempest::CreateApplication();

int main(int argx, char** argv) {

	auto app = Tempest::CreateApplication();
	app->Run();
	delete app;

}
#else
	#error Tempest only supports Windows!
#endif // TP_PLATFORM_WINDOWS
