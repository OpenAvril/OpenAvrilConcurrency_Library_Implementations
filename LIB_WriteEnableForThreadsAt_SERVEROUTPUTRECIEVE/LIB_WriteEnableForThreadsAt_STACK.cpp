#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_STACK.h"

// pointers.
	// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* _ptr_Framework_WriteEnableForThreadsAt_STACK = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::write_End(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::get_ptr_Framework()
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
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_STACK_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_STACK;
	}
	// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::CLIDWriteEnableForThreadsAtSTACK::stat_set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_STACK = writeEnable;
	}