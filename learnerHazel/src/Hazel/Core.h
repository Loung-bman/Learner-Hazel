#pragma once
#ifdef HZ_PLAYFORM_WINDOWS
#ifdef HZ_BULID_DLL
#define HZ_API _declspec(dllexport)
#else
#define HZ_API _declspec(dllimport)
#endif // HZ_BULID_DLL
#else
#error Hazel only supports windows!
#endif // HZ_PLAYFORM_WINDOWS
