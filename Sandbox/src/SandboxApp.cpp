#include <Tempest.h>

class Sandbox : public Tempest::Application {

public: 
	Sandbox() {

	}

	~Sandbox() {

	}

};

Tempest::Application* Tempest::CreateApplication() {
	return new Sandbox();
}
