#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"

// pointers.
	// classes.
OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = NULL;
// registers.

// constructor.
OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION()
{

}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}//ToDO: uncomment for C#.
	/*
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return get_ptr_Framework();
	}//ToDO: uncomment for C++.
	*/
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::get_ptr_Framework()
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
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
	}
		// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::stat_set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = writeEnable;
}