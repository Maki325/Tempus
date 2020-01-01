#include "tppch.h"
#include "Log.h"

namespace Tempus
{

	std::shared_ptr<Logger> Log::s_CoreLogger;
	std::shared_ptr<Logger> Log::s_ClientLogger;

	void Log::Init()
	{
		Logger::setPattern("%^[%T] %n: %v%$");
		s_CoreLogger = Logger::create("HAZEL");
		//s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = Logger::create("APP");
		//s_ClientLogger->set_level(spdlog::level::trace);
	}

}