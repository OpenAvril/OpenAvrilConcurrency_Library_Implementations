#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_SERVERINPUTACTION.h"

// pointers.
	// classes.
OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = NULL;
// registers.

// constructor.
OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION()
{

}

// destructor.

// public.
	// dynamic.
	/*
	void* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}//ToDO: uncomment for C#.
	*/
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return get_ptr_Framework();
	}//ToDO: uncomment for C++.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::get_ptr_Framework()
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
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_SERVERINPUTACTION_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION;
	}
		// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::CLIDWriteEnableForThreadsAtSERVERINPUTACTION::stat_set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_SERVERINPUTACTION = writeEnable;
}