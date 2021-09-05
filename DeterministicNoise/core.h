#pragma once


#ifdef DNOISE_BUILD_DLL
	// export engine api
#define API __declspec(dllexport)

#else
	// import engine api
#define API __declspec(dllimport)
#endif // 

#ifdef DNOISE_BUILD_DLL

#endif // DEBUG




