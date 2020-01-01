#pragma once

#ifdef TP_PLATFORM_WINDOWS
	#ifdef TP_BUILD_DLL
		#define TEMPEST_API __declspec(dllexport)
	#else
		#define TEMPEST_API __declspec(dllimport)
	#endif // TP_BUILD_DLL
#else
	#error Tempest only supports Windows!
#endif // TP_PLATFORM_WINDOWS
