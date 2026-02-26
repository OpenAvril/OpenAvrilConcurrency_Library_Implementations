#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtSTACK
{
    class WriteEnableForThreadsAt_STACK
    {
    public:
// constructor.
        WriteEnableForThreadsAt_STACK();

// destructor.
        virtual ~WriteEnableForThreadsAt_STACK();

// public.
    // dynamic.
        void initialise_Control(class WriteEnableForThreadsAt_STACK_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_STACK_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_STACK_Control* get_ptr_WriteEnable_Control();
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
        static void create_ptr_Global();
        static void create_ptr_WriteEnable_Control();
        // get.
        static class WriteEnableForThreadsAt_STACK_Global* stat_get_ptr_Global();
        static class WriteEnableForThreadsAt_STACK_Control* stat_get_ptr_WriteEnable_Control();
        // set.
        static void stat_set_ptr_Global(class WriteEnableForThreadsAt_STACK_Global* global);
        static void stat_set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_STACK_Control* writeEnableControl);
    // pointers.
        // classes.
        static class WriteEnableForThreadsAt_STACK_Global* _ptr_Global;
        static class WriteEnableForThreadsAt_STACK_Control* _ptr_WriteEnable_Control;
        // registers.
    };
}