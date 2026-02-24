// LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.cpp : Defines the exported functions for the DLL.
#include "pch.h"
#include "framework.h"
#include "LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.h"

class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework = NULL;



OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT()
{
}

// This is an example of an exported function.
void* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::create_Program()
{
    set_ptr_Framework(new class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework());
    while (get_ptr_Framework() == NULL) {}
    get_ptr_Framework()->initialise(get_ptr_Framework());
    return (void*)get_ptr_Framework();
}

void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::request_Wait_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId)
{
    obj->get_ptr_LaunchConcurrency()->thread_Start(obj, concurrent_CoreId);
}

void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::thread_End(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId)
{
    obj->get_ptr_LaunchConcurrency()->thread_End(obj, concurrent_CoreId);
}

uint8_t OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_coreId_To_launch(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_for_Que_Of_CoreTolaunch(0);
}

bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_Flag_Active(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_ACTIVE();
}

bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_Flag_ConcurrentCoreState(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId);
}

bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_Flag_Idle(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_Global()->get_flag_core_IDLE();
}

bool OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_State_launchBit(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj)
{
    return obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->get_Item_On_list_Of_STATE_For_ConcurrentCore(0);
}

void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::set_state_ConcurrentCore(OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId, bool value)
{
    obj->get_ptr_LaunchConcurrency()->get_ptr_LaunchConcurrency_Control()->set_Item_On_list_Of_STATE_For_ConcurrentCore(concurrent_CoreId, value);
}

OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::get_ptr_Framework()
{
    return ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework;
}

void OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::CLIBLaunchEnableForConcurrentThreadsAtCLIENT::set_ptr_Framework(class OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT::LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* framework)
{
    ptr_LaunchEnableForConcurrentThreadsAt_CLIENT_Framework = framework;
}
