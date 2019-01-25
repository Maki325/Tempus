#pragma once

#ifdef TP_PLATFORM_WINDOWS
	#ifdef TP_BUILD_DLL
		#define TEMPUS_API __declspec(dllexport)
	#else
		#define TEMPUS_API __declspec(dllimport)
	#endif
#else

#endif