#include "pch.h"

// classes.
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* _ptr_Global = NULL;
    class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* _ptr_WriteEnable_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE()
    {
        delete _ptr_Global;
        delete _ptr_WriteEnable_Control;
    }
    // public.
        // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::initialise_Control(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj)
    {
        create_ptr_WriteEnable_Control();
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::write_End(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
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
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::write_Start(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ReQUEst(obj, coreId);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeQue_Update(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_SortQue(obj);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_Activate(obj, coreId);
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::get_ptr_WriteEnable_Control()
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
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::create_ptr_Global()
    {
        set_ptr_Global(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::create_ptr_WriteEnable_Control()
    {
        set_ptr_WriteEnable_Control(new class OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control(_ptr_Global));
        while (Get_ptr_WriteEnable_Control() == NULL) {}
    }
            // get.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::Get_ptr_WriteEnable_Control()
    {
        return _ptr_WriteEnable_Control;
    }
            // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::set_ptr_Global(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global)
    {
        _ptr_Global = global;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE::set_ptr_WriteEnable_Control(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control* writeEnableControl)
    {
        _ptr_WriteEnable_Control = writeEnableControl;
    }