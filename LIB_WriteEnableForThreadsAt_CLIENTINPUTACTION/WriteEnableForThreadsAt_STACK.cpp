#include "pch.h"

// classes.
    class OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* _ptr_Global = NULL;
    class OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control* _ptr_WriteEnable_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK::WriteEnableForThreadsAt_STACK()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK::~WriteEnableForThreadsAt_STACK()
    {
        delete _ptr_Global;
        delete _ptr_WriteEnable_Control;
    }
    // public.
        // dynamic.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::initialise_Control(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        obj->get_ptr_WriteEnable()->create_ptr_WriteEnable_Control();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::write_End(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
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
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::write_Start(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Request(obj, coreId);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Activate(obj, coreId);
    }
            // get.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* OpenAvrilLIB::WriteEnableForThreadsAt_STACK::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control* OpenAvrilLIB::WriteEnableForThreadsAt_STACK::get_ptr_WriteEnable_Control()
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
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::create_ptr_Global()
    {
        set_ptr_Global(new class OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::create_ptr_WriteEnable_Control()
    {
        set_ptr_WriteEnable_Control(new class OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control(_ptr_Global));
        while (Get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* OpenAvrilLIB::WriteEnableForThreadsAt_STACK::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control* OpenAvrilLIB::WriteEnableForThreadsAt_STACK::Get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
    }
            // set.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::set_ptr_Global(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* global)
    {
        _ptr_Global = global;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK::set_ptr_WriteEnable_Control(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control* writeEnableControl)
    {
        _ptr_WriteEnable_Control = writeEnableControl;
    }