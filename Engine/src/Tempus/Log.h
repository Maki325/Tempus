#pragma once

#include "tppch.h"

#include "Core.h"
#include "Logger/Logger.h"

namespace Tempus
{
	
	class TEMPUS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<Logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<Logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<Logger> s_CoreLogger;
		static std::shared_ptr<Logger> s_ClientLogger;
	};

}

// Core log macros
#define TP_CORE_TRACE(...)    Tempus::Log::GetCoreLogger()->trace_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_CORE_INFO(...)     Tempus::Log::GetCoreLogger()->info_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_CORE_WARN(...)     Tempus::Log::GetCoreLogger()->warn_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_CORE_ERROR(...)    Tempus::Log::GetCoreLogger()->error_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_CORE_FATAL(...)    Tempus::Log::GetCoreLogger()->fatal_full(__FILE__, __LINE__, __VA_ARGS__)

// Client log macros
#define TP_TRACE(...)	      Tempus::Log::GetClientLogger()->trace_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_INFO(...)	      Tempus::Log::GetClientLogger()->info_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_WARN(...)	      Tempus::Log::GetClientLogger()->warn_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_ERROR(...)	      Tempus::Log::GetClientLogger()->error_full(__FILE__, __LINE__, __VA_ARGS__)
#define TP_FATAL(...)	      Tempus::Log::GetClientLogger()->fatal_full(__FILE__, __LINE__, __VA_ARGS__)