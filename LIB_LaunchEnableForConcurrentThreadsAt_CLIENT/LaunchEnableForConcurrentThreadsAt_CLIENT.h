#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
    class LaunchEnableForConcurrentThreadsAt_CLIENT
    {
// classes.

// registers.

// pointer.

    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_CLIENT();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_CLIENT();

// public.
    // dynamic.
        void initialise_Control(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
        void thread_Start(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId);
        void thread_End(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrent_CoreId);
        // get.
        class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* get_ptr_Global();
        class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* get_ptr_LaunchConcurrency_Control();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynamic.
        void create_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
        // get.
        // set.
        
    // static.
        static void create_ptr_Global();
        
        // get.
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* Get_ptr_Global();
        // set.
        static void set_ptr_Global(class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* newClass);
        static void set_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* newClass);
    };
}