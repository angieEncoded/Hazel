#pragma once

// create a macro that's either an import or export depending on whether or not we are building this dll
#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else 
		#define HAZEL_API __declspec(dllimport)
	#endif	
#else
	#error Hazel only supports Windows
#endif


