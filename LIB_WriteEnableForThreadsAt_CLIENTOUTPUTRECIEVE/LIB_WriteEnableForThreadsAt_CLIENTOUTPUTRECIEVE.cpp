#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.h"

// classes.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE()
	{

	}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::create_Program()
	{
		set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework * OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
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
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = writeEnable;
	}