#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE
    {
    public:
// constructor.
        WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE();

// destructor.
        virtual ~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE();

// public.
    // dynamic.
        void initialise_Control(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj);
        void write_End(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        void write_Start(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj, uint8_t coreId);
        // get.
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* get_ptr_Global();
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* get_ptr_WriteEnable_Control();
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
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* stat_get_ptr_Global();
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* stat_get_ptr_WriteEnable_Control();
        // set.
        static void stat_set_ptr_Global(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* global);
        static void stat_set_ptr_WriteEnable_Control(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* writeEnableControl);
    // pointers.
        // classes.
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Global* _ptr_Global;
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Control* _ptr_WriteEnable_Control;
        // registers.
    };
}