#pragma once

namespace OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION
{
    class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework
    {
    public:
// constructor.
        WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework();

// destructor.
        virtual ~WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework();

// public.
    // dynamic.
        void initialise(class WriteEnableForThreadsAt_CLIENTINPUTACTION_Framework* obj);
        // get.
        class WriteEnableForThreadsAt_CLIENTINPUTACTION* get_ptr_WriteEnable();
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
        static class WriteEnableForThreadsAt_CLIENTINPUTACTION* stat_get_ptr_WriteEnable();
        // set.
        static void stat_set_ptr_WriteEnable(class WriteEnableForThreadsAt_CLIENTINPUTACTION* writeEnable);
    // pointers.
        // classes.
        static OpenAvrilCLIDWriteEnableForThreadsAtCLIENTINPUTACTION::WriteEnableForThreadsAt_CLIENTINPUTACTION* _ptr_WriteEnable;
        // registers.
    };
}