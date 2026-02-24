#include "pch.h"

// classes.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* _ptr_Global = NULL;
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* _ptr_LaunchConcurrency_Control = NULL;

// registers.

// pointers.

// constructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT()
    {
        create_ptr_Global();
    }

// destructor.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::~LaunchEnableForConcurrentThreadsAt_CLIENT()
    {
        delete _ptr_Global;
        delete _ptr_LaunchConcurrency_Control;
    }

// public.
    // dynamin.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::initialise_Control()
    {
        create_ptr_LaunchConcurrency_Control();
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::thread_Start(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Request(obj, concurrent_CoreId);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_Activate(obj);
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchQue_Update(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->launchEnable_SortQue(obj, obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_number_Implemented_Threads());
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_flag_praisinglaunch(false);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId)
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
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::get_ptr_LaunchConcurrency_Control()
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
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::create_ptr_Global()
    {
        Set_ptr_Global(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global());
        while (Get_ptr_Global() == NULL) {}
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::create_ptr_LaunchConcurrency_Control()
    {
        Set_ptr_LaunchConcurrency_Control(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control());
        while (Get_ptr_LaunchConcurrency_Control() == NULL) {}
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Global* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::Get_ptr_Global()
    {
        return _ptr_Global;
    }
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Control* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::Get_ptr_LaunchConcurrency_Control()
    {
        return _ptr_LaunchConcurrency_Control;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::Set_ptr_Global(LaunchEnableForConcurrentThreadsAt_CLIENT_Global* newClass)
    {
        _ptr_Global = newClass;
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT::Set_ptr_LaunchConcurrency_Control(LaunchEnableForConcurrentThreadsAt_CLIENT_Control* newClass)
    {
        _ptr_LaunchConcurrency_Control = newClass;
    }