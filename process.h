#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>


DWORD GetProcessID(const wchar_t* procName);
DWORD GetModuleBaseAddress(DWORD procId, const wchar_t* modName);