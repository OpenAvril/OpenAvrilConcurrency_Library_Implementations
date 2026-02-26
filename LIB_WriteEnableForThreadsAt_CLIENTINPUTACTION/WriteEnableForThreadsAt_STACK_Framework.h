#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK_Framework
    {
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
        static void create_WriteEnable();
        // get.
        static class WriteEnableForThreadsAt_STACK* stat_get_ptr_WriteEnable();
        // set.
        static void stat_set_ptr_WriteEnable(class WriteEnableForThreadsAt_STACK* writeEnable);
    // pointers.
        // classes.
        static OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK* _ptr_WriteEnable;
        // registers.
    };
}