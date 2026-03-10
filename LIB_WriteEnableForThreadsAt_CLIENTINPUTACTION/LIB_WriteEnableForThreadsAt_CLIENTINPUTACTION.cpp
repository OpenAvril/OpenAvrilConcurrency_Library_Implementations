#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"

// pointers.
	// classes.
OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = NULL;
// registers.

// constructor.
OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION()
{

}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
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
	OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return get_ptr_Framework();
	}//ToDO: uncomment for C++.
	*/
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::write_End(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::write_Start(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::get_ptr_Framework()
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
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::stat_create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
	}
		// get.
		// set.
	void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::CLIBWriteEnableForThreadsAtCLIENTINPUTACTION::stat_set_ptr_Framework(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = writeEnable;
}