#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
    class LaunchEnableForConcurrentThreadsAt_CLIENT
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_CLIENT();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_CLIENT();

// public.
    // dynamic.
        void initialise_Control(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
        void thread_Start(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID);
        void thread_End(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj, uint8_t concurrentThreadID);
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
        // get.
        // set.
    // static.
        static void stat_create_ptr_Global();
        static void stat_create_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
        // get.
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* stat_get_ptr_Global();
        static class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* stat_get_ptr_LaunchConcurrency_Control();
        // set.
        static void stat_set_ptr_Global(class LaunchEnableForConcurrentThreadsAt_CLIENT_Global* newClass);
        static void stat_set_ptr_LaunchConcurrency_Control(class LaunchEnableForConcurrentThreadsAt_CLIENT_Control* newClass);
    // pointers.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_CLIENT* _ptr_LaunchConcurrency;
        // registers.
    };
}