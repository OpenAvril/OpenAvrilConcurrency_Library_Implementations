#include "pch.h"

// classes.
    class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* _ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* _ptr_WriteEnable_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::~WriteEnableForThreadsAt_CLIENTINPUTACTION()
    {
        delete _ptr_Global;
        delete _ptr_WriteEnable_Control;
    }
    // public.
        // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj)
    {
        create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(coreId, *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_IDLE());
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId) + 1);
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_new_writeCycle_Try_ThreadId_Index() == 3)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(0);
        }
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(false);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ReQUEst(obj, coreId);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Activate(obj, coreId);
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::get_ptr_WriteEnable_Control()
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
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::create_ptr_Global()
    {
        set_ptr_Global(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::create_ptr_WriteEnable_Control()
    {
        set_ptr_WriteEnable_Control(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control(_ptr_Global));
        while (Get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::Get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
    }
            // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::set_ptr_Global(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* global)
    {
        _ptr_Global = global;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION::set_ptr_WriteEnable_Control(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* writeEnableControl)
    {
        _ptr_WriteEnable_Control = writeEnableControl;
    }