#pragma once

#ifdef MT_PLATFORM_WINDOWS
	#ifdef MT_BUILD_DLL
		#define MINT_API __declspec(dllexport)
	#else
		#define MINT_API __declspec(dllimport)
	#endif
#else
	#error Mint only supports Windows!
#endif