#pragma once

#ifdef SE_PLATFORM_WINDOWS
	#ifdef SE_BUILD_DLL
		#define SPENGINE_API __declspec(dllexport)
	#else
		#define SPENGINE_API __declspec(dllimport)
	#endif
#else 
	#error Spengine Only Supports Windows
#endif