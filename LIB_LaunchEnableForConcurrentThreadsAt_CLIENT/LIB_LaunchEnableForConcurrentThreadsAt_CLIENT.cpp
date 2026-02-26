#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.h"

// pointer.
    // classes.
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT = NULL;
// registers.

// constructor.
OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT()
{
}

// destructor.

// public.
    // dynamic.
        // get.
        // set.
    // static.
    void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::generate_Program()
    {
        stat_set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
        stat_get_ptr_Framework()->initialise(stat_get_ptr_Framework());
        return (void*)stat_get_ptr_Framework();
    }//ToDO: uncomment for C#.
  
    /*
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::generate_Program()
    {
        stat_set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
        stat_get_ptr_Framework()->initialise(stat_get_ptr_Framework());
        return stat_get_ptr_Framework();
    }//ToDO: uncomment for C++.
    */
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::request_Wait_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrentThreadID);
    }
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID)
    {
        obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrentThreadID);
    }
        // get.
    uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_coreId_To_launch(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_Flag_Active(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID);
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_Flag_Idle(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
    }
    bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_State_launchBit(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
    {
        return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0));
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::set_Flag_ConcurrentCoreState(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID, bool value)
    {
        obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrentThreadID, value);
    }

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::create_ptr_Framework()
    {
        stat_set_ptr_Framework(new OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
        while (stat_get_ptr_Framework() == NULL) {}
    }
        // get.
    OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_get_ptr_Framework()
    {
        return _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT;
    }
        // set.
    void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::stat_set_ptr_Framework(LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* newClass)
    {
        _ptr_Framework_LaunchEnableForConcurrentThreadsAt_CLIENT = newClass;
}