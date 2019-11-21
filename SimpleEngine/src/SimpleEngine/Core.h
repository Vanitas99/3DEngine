#pragma once


#ifdef SE_PLATFORM_WINDOWS
	#ifdef SE_BUILD_ALL
		#define SE_API __declspec(dllexport)
	#else
		#define SE_API __declspec(dllimport)
	#endif
#else
	#error Only Windows supported so far.
#endif