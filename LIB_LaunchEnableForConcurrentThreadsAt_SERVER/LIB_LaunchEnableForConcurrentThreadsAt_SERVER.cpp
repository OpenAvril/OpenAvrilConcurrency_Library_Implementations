#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_SERVER.h"

// pointer.
    // classes.
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = NULL;
// registers.

// constructor.
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER()
{
}

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
    /*
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_Program()
    {
        stat_set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
        stat_get_ptr_Framework()->initialise(stat_get_ptr_Framework());
        return (void*)stat_get_ptr_Framework();
    }//ToDO: uncomment for C#.
    */
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::generate_Program()
    {
        stat_set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
        stat_get_ptr_Framework()->initialise(stat_get_ptr_Framework());
        return stat_get_ptr_Framework();
    }//ToDO: uncomment for C++.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::request_Wait_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrentThreadID);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrentThreadID);
    }
    // get.
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0));
    }
    // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::set_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_SERVER_Framework* obj, uint8_t concurrentThreadID, bool value)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, value);
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::create_ptr_Framework()
    {
        stat_set_ptr_Framework(new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::LaunchEnableForConcurrentThreadsAt_SERVER_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_get_ptr_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtSERVER::CLIBLaunchEnableForConcurrentThreadsAtSERVER::stat_set_ptr_Framework(LaunchEnableForConcurrentThreadsAt_SERVER_Framework* newClass)
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_SERVER = newClass;
}