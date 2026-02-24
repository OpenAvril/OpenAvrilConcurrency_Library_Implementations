#include "pch.h"

// classes.
	class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* _ptr_WriteEnable = NULL;

// registers.

// pointers.

// constructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework()
	{
		create_ptr_WriteEnable();
	}

// destructor.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework()
	{
		delete _ptr_WriteEnable;
	}

// public.
	// dynamic.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::initialise(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj)
	{
		std::list<bool> newINITIALISED_boolList = { false, false };
		std::list<bool>* ptr_newINITIALISED_boolList = &newINITIALISED_boolList;
		while (ptr_newINITIALISED_boolList == NULL) {}
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_IDLE(0, ptr_newINITIALISED_boolList);
		newINITIALISED_boolList = { false, true };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_WAIT(1, ptr_newINITIALISED_boolList);
		newINITIALISED_boolList = { true, false };
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_Item_Of_2bit_flag_write_WRITE(2, ptr_newINITIALISED_boolList);
		delete ptr_newINITIALISED_boolList;
		uint8_t* newINITIALISED_uint32_t1 = new uint8_t(4);
		obj->get_ptr_WriteEnable()->get_ptr_Global()->initialise_number_Of_Implemented_Threads(newINITIALISED_uint32_t1);
		delete newINITIALISED_uint32_t1;
		obj->get_ptr_WriteEnable()->initialise_Control(obj);
		bool* newINITIALISED_bool = new bool(false);
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_flag_praisingWrite(&newINITIALISED_bool);
		delete newINITIALISED_bool;
		uint8_t* newINITIALISED_uint8_t2 = new uint8_t(0);
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
		{
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_QUE_List_Of_ThreadToWrite(concurrentThreadID, &concurrentThreadID);
		}
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_writeCycle_Try_ThreadId_Index(newINITIALISED_uint8_t2);
		obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_new_writeCycle_Try_ThreadId_Index(newINITIALISED_uint8_t2);
		delete newINITIALISED_uint8_t2;
		uint32_t* newINITIALISED_uint32_t = new uint32_t(0);
		for (uint8_t concurrentThreadID = 0; concurrentThreadID < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); concurrentThreadID++)
		{
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
			obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, newINITIALISED_uint32_t);
		}
		delete newINITIALISED_uint32_t;
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::get_ptr_WriteEnable()
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
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::create_ptr_WriteEnable()
	{
		set_ptr_WriteEnable(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE());
		while (Get_ptr_WriteEnable() == NULL) {}
	}
		// get.
	OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::Get_ptr_WriteEnable()
	{
		return _ptr_WriteEnable;
	}
		// set.
	void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework::set_ptr_WriteEnable(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE* writeEnable)
	{
		_ptr_WriteEnable = writeEnable;
	}