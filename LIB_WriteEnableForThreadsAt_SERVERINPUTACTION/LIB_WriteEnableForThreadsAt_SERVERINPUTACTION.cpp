#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"

// pointers.
	// classes.
OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = NULL;
// registers.

// constructor.
OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION()
{

}

// destructor.

// public.
	// dynamic.
	/*
	void* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}//ToDO: uncomment for C#.
	*/
	OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
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
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_End(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::get_ptr_Framework()
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
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::stat_create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION;
	}
		// get.
		// set.
	void OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::CLIBWriteEnableForThreadsAtSERVERINPUTACTION::stat_set_ptr_Framework(OpenAvrilCLIBWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = writeEnable;
}