#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
    class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework
    {
    public:
// constructor.
        LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();

// destructor.
        virtual ~LaunchEnableForConcurrentThreadsAt_CLIENT_Framework();

// public.
    // dynamic.
        void initialise(class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework* obj);
        // get.
        class LaunchEnableForConcurrentThreadsAt_CLIENT* get_ptr_LaunchConcurrency();
        // set.
    // static.
        // get.
        // set.

    private:
// private.
    // dynaminc.
        // get.
        // set.
    // static.
        static void stat_create_ptr_LaunchConcurrency();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_CLIENT* stat_get_ptr_LaunchConcurrency();
        // set.
        static void stat_set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_CLIENT* concurrentQue);
    // pointers.
        // classes.
        static class LaunchEnableForConcurrentThreadsAt_CLIENT* _ptr_LaunchConcurrency;
        // registers.
    };
}