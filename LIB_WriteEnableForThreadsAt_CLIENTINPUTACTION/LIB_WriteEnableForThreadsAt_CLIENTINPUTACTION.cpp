#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTINPUTACTION.h"

// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::create_Program()
	{
		set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework * OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION;
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
		// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::CLIDWriteEnableForThreadsAtCLIENTINPUTACTION::set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTINPUTACTION = writeEnable;
	}