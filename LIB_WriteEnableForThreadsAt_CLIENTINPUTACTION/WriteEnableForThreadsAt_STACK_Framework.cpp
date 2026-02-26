#include "pch.h"

// pointers.
	// classes.
OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::_ptr_WriteEnable = NULL;
	// registers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
	{
		create_WriteEnable();
	}

// destructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
	{
		delete _ptr_WriteEnable;
	}

// public.
	// dynamic.
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::initialise(OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		std::array<bool, 2>* ptr_newINITIALISED_boolList = new std::array<bool, 2>;
		while (ptr_newINITIALISED_boolList == NULL) {}
		*ptr_newINITIALISED_boolList = { false, false };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_IDLE(ptr_newINITIALISED_boolList);
		*ptr_newINITIALISED_boolList = { false, true };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_WAIT(ptr_newINITIALISED_boolList);
		*ptr_newINITIALISED_boolList = { true, false };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_WRITE(ptr_newINITIALISED_boolList);
		delete ptr_newINITIALISED_boolList;

		uint8_t* newINITIALISED_uint32_t1 = new uint8_t(UINT8_MAX);
		*newINITIALISED_uint32_t1 = 4;//NUMBER OF THREADS
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_number_Of_Implemented_Threads(newINITIALISED_uint32_t1);
		delete newINITIALISED_uint32_t1;
		
		obj->get_ptr_WriteEnable()->initialise_Control(obj);
		
		bool* newINITIALISED_bool = new bool(false);
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_flag_praisingWrite(newINITIALISED_bool);
		delete newINITIALISED_bool;

		uint8_t* newINITIALISED_uint8_t2 = new uint8_t(UINT8_MAX);
		*newINITIALISED_uint8_t2 = 0;
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
		{
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_QUE_List_Of_ThreadToWrite(concurrentThreadID, &concurrentThreadID);
		}
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_writeCycle_Try_ThreadId_Index(newINITIALISED_uint8_t2);
		*newINITIALISED_uint8_t2 = 1;
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_new_writeCycle_Try_ThreadId_Index(newINITIALISED_uint8_t2);
		delete newINITIALISED_uint8_t2;
		
		uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
		while (newINITIALISED_uint32_t == NULL) {}
		*newINITIALISED_uint32_t = 0;
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (uint8_t)(obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
		{
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
		}
		delete newINITIALISED_uint32_t;
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::get_ptr_WriteEnable()
	{
		return stat_get_ptr_WriteEnable();
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
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::create_WriteEnable()
	{
		stat_set_ptr_WriteEnable(new class OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK());
		while (stat_get_ptr_WriteEnable() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_get_ptr_WriteEnable()
	{
		return _ptr_WriteEnable;
	}
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Framework::stat_set_ptr_WriteEnable(WriteEnableForThreadsAt_STACK* newPtr)
	{
		_ptr_WriteEnable = newPtr;
	}