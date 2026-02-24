#include "pch.h"

// classes.
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* _ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* _ptr_WriteEnable_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::~WriteEnableForThreadsAt_SERVERINPUTACTION()
    {
        delete _ptr_Global;
        delete _ptr_WriteEnable_Control;
    }
    // public.
        // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj)
    {
        obj->get_ptr_WriteEnable()->create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(obj, coreId, *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_IDLE());
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, coreId) + 1);
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(false);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Request(obj, coreId);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Activate(obj, coreId);
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
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
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::create_ptr_Global()
    {
        set_ptr_Global(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::create_ptr_WriteEnable_Control()
    {
        set_ptr_WriteEnable_Control(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control(_ptr_Global));
        while (Get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::Get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
    }
            // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::set_ptr_Global(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Global* global)
    {
        _ptr_Global = global;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION::set_ptr_WriteEnable_Control(OpenAvrilCLIDWriteEnableForThreadsAtSERVERINPUTACTION::WriteEnableForThreadsAt_SERVERINPUTACTION_Control* writeEnableControl)
    {
        _ptr_WriteEnable_Control = writeEnableControl;
    }