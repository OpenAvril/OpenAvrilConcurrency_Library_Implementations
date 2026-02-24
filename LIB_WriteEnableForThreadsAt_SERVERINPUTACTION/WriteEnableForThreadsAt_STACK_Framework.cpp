#include "pch.h"


// classes.
	class OpenAvrilLIB::WriteEnableForThreadsAt_STACK* _ptr_WriteEnable = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::WriteEnableForThreadsAt_STACK_Framework()
	{
		create_ptr_WriteEnable();
	}

// destructor.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::~WriteEnableForThreadsAt_STACK_Framework()
	{
		delete _ptr_WriteEnable;
	}

// public.
	// dynamic.
	void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::initialise(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
	{
		std::list<bool>* ptr_newINITIALISED_boolList = new std::list<bool>(true);
		while (ptr_newINITIALISED_boolList == NULL) {}
		*ptr_newINITIALISED_boolList = { false, false };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_IDLE(obj, 0, ptr_newINITIALISED_boolList);
		*ptr_newINITIALISED_boolList = { false, true };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_WAIT(obj, 1, ptr_newINITIALISED_boolList);
		*ptr_newINITIALISED_boolList = { true, false };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_WRITE(obj, 2, ptr_newINITIALISED_boolList);
		delete ptr_newINITIALISED_boolList;

		uint8_t* newINITIALISED_uint32_t1 = new uint8_t(UINT8_MAX);
		*newINITIALISED_uint32_t1 = 4;//NUMBER OF THREADS
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_number_Of_Implemented_Threads(newINITIALISED_uint32_t1);
		delete newINITIALISED_uint32_t1;
		
		obj->get_ptr_WriteEnable()->initialise_Control(obj);
		
		bool* newINITIALISED_bool = new bool(false);
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_flag_praisingWrite(obj, &newINITIALISED_bool);
		delete newINITIALISED_bool;

		uint8_t* newINITIALISED_uint8_t2 = new uint8_t(UINT8_MAX);
		*newINITIALISED_uint8_t2 = 0;
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
		{
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_QUE_List_Of_ThreadToWrite(obj, concurrentThreadID, &concurrentThreadID);
		}
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_writeCycle_Try_ThreadId_Index(obj, newINITIALISED_uint8_t2);
		*newINITIALISED_uint8_t2 = 1;
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_new_writeCycle_Try_ThreadId_Index(obj, newINITIALISED_uint8_t2);
		delete newINITIALISED_uint8_t2;
		
		uint32_t* newINITIALISED_uint32_t = new uint32_t(UINT32_MAX);
		while (newINITIALISED_uint32_t == NULL) {}
		*newINITIALISED_uint32_t = 0;
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (uint8_t)(obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
		{
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, concurrentThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, concurrentThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, concurrentThreadID, newINITIALISED_uint32_t);
		}
		delete newINITIALISED_uint32_t;
	}
		// get.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::get_ptr_WriteEnable()
	{
		return _ptr_WriteEnable;
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
	void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::create_ptr_WriteEnable()
	{
		set_ptr_WriteEnable(new class OpenAvrilLIB::WriteEnableForThreadsAt_STACK());
		while (Get_ptr_WriteEnable() == NULL) {}
	}
		// get.
	OpenAvrilLIB::WriteEnableForThreadsAt_STACK* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::Get_ptr_WriteEnable()
	{
		return _ptr_WriteEnable;
	}
		// set.
	void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework::set_ptr_WriteEnable(OpenAvrilLIB::WriteEnableForThreadsAt_STACK* writeEnable)
	{
		_ptr_WriteEnable = writeEnable;
	}