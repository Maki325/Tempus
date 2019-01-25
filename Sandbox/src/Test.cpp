#include <Tempus.h>

class Sandbox : public Tempus::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Tempus::Application* Tempus::CreateApplication()
{
	return new Sandbox();
}