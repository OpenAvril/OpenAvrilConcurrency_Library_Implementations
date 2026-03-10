#include "pch.h"

// pointers.
    // classes.
    class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::_ptr_Global = NULL;
    class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::_ptr_WriteEnable_Control = NULL;
    // registers.

// constructor.
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        stat_create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::~WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        delete _ptr_Global;
        delete _ptr_WriteEnable_Control;
    }
    // public.
        // dynamic.
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::initialise_Control(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        obj->get_ptr_WriteEnable()->stat_create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::write_End(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE());
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(false);
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::write_Start(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Request(obj, coreId);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Activate(obj, coreId);
    }
            // get.
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::get_ptr_Global()
    {
        return stat_get_ptr_Global();
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::get_ptr_WriteEnable_Control()
    {
        return stat_get_ptr_WriteEnable_Control();
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
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_create_ptr_Global()
    {
        stat_set_ptr_Global(new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global());
        while (stat_get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_create_ptr_WriteEnable_Control()
    {
        stat_set_ptr_WriteEnable_Control(new class OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control(_ptr_Global));
        while (stat_get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
    }
            // set.
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_set_ptr_Global(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* global)
    {
        _ptr_Global = global;
    }
    void OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::stat_set_ptr_WriteEnable_Control(OpenAvrilCLIBWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* writeEnableControl)
    {
        _ptr_WriteEnable_Control = writeEnableControl;
    }