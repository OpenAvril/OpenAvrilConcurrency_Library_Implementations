#include "pch.h"

// classes.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global* _ptr_Global = NULL;
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Control* _ptr_LaunchConcurrency_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::LaunchEnableForConcurrentThreadsAt_SERVER()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::~LaunchEnableForConcurrentThreadsAt_SERVER()
    {
        delete _ptr_Global;
        delete _ptr_LaunchConcurrency_Control;
    }

// public.
    // dynamin.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::initialise_Control()
    {
        create_ptr_LaunchConcurrency_Control();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Request(obj, concurrent_CoreId);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Activate(obj);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrent_CoreId)
    {
        while (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_flag_praisinglaunch() == true)
        {

        }
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(true);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_concurrentCycle_Try_CoreId_Index(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_new_concurrentCycle_Try_CoreId_Index());
        if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() == concurrent_CoreId)
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE());
        }
        else
        {
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_concurrentCycle_Try_CoreId_Index() + 1);

            if (obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_new_concurrentCycle_Try_CoreId_Index() == 3)//NUMBER OF CONCURNT CORES
            {
                obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_new_concurrentCycle_Try_CoreId_Index(0);
            }
            obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
            obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrent_CoreId);
        }
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::get_ptr_LaunchConcurrency_Control()
    {
        return _ptr_LaunchConcurrency_Control;
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
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::create_ptr_Global()
    {
        Set_ptr_Global(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::create_ptr_LaunchConcurrency_Control()
    {
        Set_ptr_LaunchConcurrency_Control(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Control());
        while (Get_ptr_LaunchConcurrency_Control() == NULL) {}
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::Get_ptr_LaunchConcurrency_Control()
    {
        return _ptr_LaunchConcurrency_Control;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::Set_ptr_Global(LaunchEnableForConcurrentThreadsAt_SERVER_Global* newClass)
    {
        _ptr_Global = newClass;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER::Set_ptr_LaunchConcurrency_Control(LaunchEnableForConcurrentThreadsAt_SERVER_Control* newClass)
    {
        _ptr_LaunchConcurrency_Control = newClass;
    }