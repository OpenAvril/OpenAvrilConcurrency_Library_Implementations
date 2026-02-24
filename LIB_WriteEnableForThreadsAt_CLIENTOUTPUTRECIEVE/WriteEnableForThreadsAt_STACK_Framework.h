#pragma once

namespace OpenAvrilLIB
{
    class WriteEnableForThreadsAt_STACK_Framework
    {
// classes.

// registers.

// pointers.

    public:
// constructor.
        WriteEnableForThreadsAt_STACK_Framework();

// destructor.
        virtual ~WriteEnableForThreadsAt_STACK_Framework();

// public.
    // dynamic.
        void initialise(class WriteEnableForThreadsAt_STACK_Framework* obj);
        // get.
        class WriteEnableForThreadsAt_STACK* get_ptr_WriteEnable();
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
        static void create_ptr_WriteEnable();
        // get.
        static class WriteEnableForThreadsAt_STACK* Get_ptr_WriteEnable();
        // set.
        static void set_ptr_WriteEnable(class WriteEnableForThreadsAt_STACK* writeEnable);
    };
}