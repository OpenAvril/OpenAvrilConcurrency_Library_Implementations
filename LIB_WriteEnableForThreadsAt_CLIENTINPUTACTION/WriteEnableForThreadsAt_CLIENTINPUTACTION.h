#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION
{
    class WriteEnableForThreadsAt_CLIENTINPUTACTION
    {
    public:
// constructor.
        WriteEnableForThreadsAt_CLIENTINPUTACTION();

// destructor.
        virtual ~WriteEnableForThreadsAt_CLIENTINPUTACTION();

// public.
    // dynamic.
        void initialise_Control(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* get_ptr_WriteEnable_Control();
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
        static void stat_create_ptr_WriteEnable_Control();
        // get.
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* stat_get_ptr_Global();
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* stat_get_ptr_WriteEnable_Control();
        // set.
        static void stat_set_ptr_Global(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* global);
        static void stat_set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* writeEnableControl);
    // pointers.
        // classes.
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Global* _ptr_Global;
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION_Control* _ptr_WriteEnable_Control;
        // registers.
    };
}