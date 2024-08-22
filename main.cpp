#include <Windows.h>
#include <TlHelp32.h>
#include "process.h"
#include <iostream>

int main()
{
	DWORD pID, baseModule;

	pID = GetProcessID(L".exe");
	baseModule = GetModuleBaseAddress(pID, L".exe");

	std::cout << "Process ID: " << pID << std::endl;
	std::cout << std::hex << "Base Address: " << baseModule << std::endl;
}