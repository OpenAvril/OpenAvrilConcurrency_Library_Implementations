#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE
{
    class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework
    {
    public:
// constructor.
        WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework();

// destructor.
        virtual ~WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework();

// public.
    // dynamic.
        void initialise(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE_Framework* obj);
        // get.
        class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* get_ptr_WriteEnable();
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
        static void stat_create_WriteEnable();
        // get.
        static class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* stat_get_ptr_WriteEnable();
        // set.
        static void stat_set_ptr_WriteEnable(class WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* writeEnable);
    // pointers.
        // classes.
        static OpenAvrilCLIDWriteEnableForThreadsAtCLIENTOUTPUTRECIEVE::WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE* _ptr_WriteEnable;
        // registers.
    };
}