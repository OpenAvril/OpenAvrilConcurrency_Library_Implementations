#include "pch.h"

// classes.
    class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* _ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* _ptr_WriteEnable_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE()
    {
        delete _ptr_Global;
        delete _ptr_WriteEnable_Control;
    }
    // public.
        // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj)
    {
        create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::write_End(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
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
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ReQUEst(obj, coreId);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Activate(obj, coreId);
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::get_ptr_WriteEnable_Control()
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
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::create_ptr_Global()
    {
        set_ptr_Global(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::create_ptr_WriteEnable_Control()
    {
        set_ptr_WriteEnable_Control(new class OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control(_ptr_Global));
        while (Get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::Get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
    }
            // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::set_ptr_Global(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* global)
    {
        _ptr_Global = global;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE::set_ptr_WriteEnable_Control(OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* writeEnableControl)
    {
        _ptr_WriteEnable_Control = writeEnableControl;
    }