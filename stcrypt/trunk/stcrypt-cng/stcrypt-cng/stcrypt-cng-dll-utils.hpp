//================================================================================================================================================
// FILE: stcrypt-cng-dll-utils.h
// (c) GIE 2011-02-08  04:15
//
//================================================================================================================================================
#ifndef H_GUARD_STCRYPT_CNG_DLL_UTILS_2011_02_08_04_15
#define H_GUARD_STCRYPT_CNG_DLL_UTILS_2011_02_08_04_15
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include <string>
//================================================================================================================================================
namespace stcrypt {

	extern HMODULE this_module_handle;

	std::wstring self_dll_path();

}
//================================================================================================================================================
#endif
//================================================================================================================================================