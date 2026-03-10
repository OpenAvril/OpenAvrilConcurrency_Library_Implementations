#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.h"

// pointers.
	// classes.
OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = NULL;
// registers.

// constructor.
OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE()
{

}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|        MIT Write Que .dll         |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		return (void*)get_ptr_Framework();
	}//ToDO: uncomment for C#.
	/*
	OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return get_ptr_Framework();
	}//ToDO: uncomment for C++.
	*/
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_End(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_Start(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
	// get.
	OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::get_ptr_Framework()
	{
		return stat_get_ptr_Framework();
	}
	// set.
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// get.
		// set.
	// static.
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
	}
		// get.
		// set.
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_set_ptr_Framework(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = writeEnable;
	}