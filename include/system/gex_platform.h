#ifndef GEX_PLATFORM_H
#define GEX_PLATFORM_H


//
// NOTE: 
//
// Define pre-processor macros for DLL Export, import and 
// system macros
//

#ifdef _WIN32
	#define GEX_SYS_WINDOWS
	//defined to disable <windows.h> from defining the min and max macros
	#ifndef NOMINMAX
	#define NOMINMAX
	#endif

#elif defined(__LINUX__)
	#define GEX_SYS_LINUX
#elif defined (__APPLE__)
	#define GEX_SYS_MACOS
#endif

#ifndef GEX_STATIC_BUILD
	#ifdef GEX_SYS_WINDOWS
		#ifdef GEX_NONCLIENT_BUILD
			#define GEX_API __declspec(dllexport)
		#else
			#define GEX_API __declspec(dllimport)
		#endif

		// Visual C++ compiler warning C4251 disable
		#ifdef _MSC_VER
			#pragma warning(disable : 4251)
		#endif
	#else
		#ifdef __GNUC__ >= 4
			#define GEX_API __attribute__ ((__visibility__("default")))
		#else
			#define GEX_API GEX_API
		#endif
	#endif
#else
	#define GEX_API GEX_API
#endif

#endif