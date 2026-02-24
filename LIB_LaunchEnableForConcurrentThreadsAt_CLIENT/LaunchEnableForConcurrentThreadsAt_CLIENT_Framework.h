#pragma once

namespace OpenAvrilCLIBLaunchEnableForConcurrentThreadsAtCLIENT
{
    class LaunchEnableForConcurrentThreadsAt_CLIENT_Framework
    {
// classes.

// registers.

// pointers.

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
        void set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_CLIENT* concurrentQue);

    // static.
        static void create_ptr_LaunchConcurrency();
        // get.
        static class LaunchEnableForConcurrentThreadsAt_CLIENT* Get_ptr_LaunchConcurrency();
        // set.
        static void Set_ptr_LaunchConcurrency(class LaunchEnableForConcurrentThreadsAt_CLIENT* concurrentQue);
    };
}