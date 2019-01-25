#pragma once

#include "Core.h"

namespace Tempus {

	class TEMPUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}
