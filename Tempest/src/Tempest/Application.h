#pragma once

#include "Core.h"

namespace Tempest {

	class TEMPEST_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

