#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE.h"


// pointers.
	// classes.
OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE = NULL;
// registers.

// constructor.
OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE()
{

}

// destructor.

// public.
	// dynamic.
	/*
	void* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}//ToDO: uncomment for C#.
	*/
	OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework());
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
		return get_ptr_Framework();
	}//ToDO: uncomment for C++.
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_End(OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::get_ptr_Framework()
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
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::stat_create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE;
	}
		// get.
		// set.
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::CLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::stat_set_ptr_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE = writeEnable;
	}