#include "pch.h"
#include "framework.h"
#include "LIB_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.h"

// pointers.
	// classes.
OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = NULL;
// registers.

// constructor.
OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE()
{

}

// destructor.

// public.
	// dynamic.
	void* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return (void*)get_ptr_Framework();
	}//ToDO: uncomment for C#.
	/*
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::generate_Program()
	{
		stat_set_ptr_Framework(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (get_ptr_Framework() == NULL) {}
		get_ptr_Framework()->initialise(get_ptr_Framework());
		return get_ptr_Framework();
	}//ToDO: uncomment for C++.
	*/
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_End(obj, coreId);
	}
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
	{
		obj->get_ptr_WriteEnable()->write_Start(obj, coreId);
	}
	// get.
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::get_ptr_Framework()
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
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_create_Framework()
	{
		stat_set_ptr_Framework(new WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework());
		while (stat_get_ptr_Framework() == NULL) {}
	}
	OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_get_ptr_Framework()
	{
		return _ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE;
	}
		// get.
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::CLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::stat_set_ptr_Framework(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* writeEnable)
	{
		_ptr_Framework_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE = writeEnable;
	}