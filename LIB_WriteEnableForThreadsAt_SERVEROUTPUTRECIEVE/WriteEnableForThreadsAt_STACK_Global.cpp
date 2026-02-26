#include "pch.h"

// pointers.
    // classes.
    // registers.
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_ptr_2bit_flag_write_IDLE = NULL;
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_ptr_2bit_flag_write_WAIT = NULL;
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_ptr_2bit_flag_write_WRITE = NULL;
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::_ptr_number_Of_Implemented_Threads = NULL;

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::WriteEnableForThreadsAt_STACK_Global()
    {
        std::array<bool, 2>* newDEAFULT_FlagSet = new std::array<bool, 2>{true, true};
        create_2bit_flag_write_IDLE(newDEAFULT_FlagSet);
        create_2bit_flag_write_WAIT(newDEAFULT_FlagSet);//
        create_2bit_flag_write_WRITE(newDEAFULT_FlagSet);
        delete newDEAFULT_FlagSet;
        uint8_t* newDEFAULT_Value = new uint8_t(UINT8_MAX);
        create_number_Of_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::~WriteEnableForThreadsAt_STACK_Global()
    {
        delete _ptr_2bit_flag_write_IDLE;
        delete _ptr_2bit_flag_write_WAIT;
        delete _ptr_2bit_flag_write_WRITE;
        delete _ptr_number_Of_Implemented_Threads;
    }
// public.
    // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::initialise_Item_Of_2bit_flag_write_IDLE(std::array<bool, 2>* new_FlagBitSet)
    {
        stat_set_2bit_flag_write_IDLE(*new_FlagBitSet);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::initialise_Item_Of_2bit_flag_write_WAIT(std::array<bool, 2 >* new_FlagBitSet)
    {
        stat_set_2bit_flag_write_IDLE(*new_FlagBitSet);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::initialise_Item_Of_2bit_flag_write_WRITE(std::array<bool, 2 >* new_FlagBitSet)
    {
        stat_set_2bit_flag_write_WRITE(*new_FlagBitSet);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::initialise_number_Of_Implemented_Threads(uint8_t* newValue)
    {
        stat_set_number_Of_Implemented_Threads(*newValue);
    }
        // get.
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_IDLE()
    {
        return *stat_get_ptr_2bit_flag_write_IDLE();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_WAIT()
    {
        return *stat_get_ptr_2bit_flag_write_WAIT();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::get_2bit_flag_write_WRITE()
    {
        return *stat_get_ptr_2bit_flag_write_WRITE();
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::get_number_Of_Implemented_Threads()
    {
        return *stat_get_ptr_number_Of_Implemented_Threads();
    }
        // set.
    // static.
        // get.
        // set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_IDLE(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        std::array<bool, 2>* _ptr_2bit_flag_write_IDLE = new std::array<bool, 2>;
        while (stat_get_ptr_2bit_flag_write_IDLE() == NULL) {}
        *_ptr_2bit_flag_write_IDLE = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_WAIT(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        std::array<bool, 2>* _ptr_2bit_flag_write_WAIT = new std::array<bool, 2>;
        while (stat_get_ptr_2bit_flag_write_WAIT() == NULL) {}
        *_ptr_2bit_flag_write_WAIT = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::create_2bit_flag_write_WRITE(std::array<bool, 2>* newDEAFULT_FlagSet)
    {
        std::array<bool, 2>* _ptr_2bit_flag_write_WRITE = new std::array<bool, 2>;
        while (stat_get_ptr_2bit_flag_write_WRITE() == NULL) {}
        *_ptr_2bit_flag_write_WRITE = *newDEAFULT_FlagSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        uint8_t* _ptr_number_Of_Implemented_Threads = new uint8_t();
        while (stat_get_ptr_number_Of_Implemented_Threads() == NULL) {}
        *_ptr_number_Of_Implemented_Threads = *newDEFAULT_Value;
    }
        // get.
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_2bit_flag_write_IDLE()
    {
        return _ptr_2bit_flag_write_IDLE;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_2bit_flag_write_WAIT()
    {
        return _ptr_2bit_flag_write_WAIT;
    }
    std::array<bool, 2>* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_2bit_flag_write_WRITE()
    {
        return _ptr_2bit_flag_write_WRITE;
    }
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_get_ptr_number_Of_Implemented_Threads()
    {
        return _ptr_number_Of_Implemented_Threads;
    }
        // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_set_2bit_flag_write_IDLE(std::array<bool, 2> new_FlagBitSet)
    {
        *_ptr_2bit_flag_write_IDLE = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_set_2bit_flag_write_WAIT(std::array<bool, 2> new_FlagBitSet)
    {
        *_ptr_2bit_flag_write_WAIT = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_set_2bit_flag_write_WRITE(std::array<bool, 2> new_FlagBitSet)
    {
        *_ptr_2bit_flag_write_WRITE = new_FlagBitSet;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSTACK::WriteEnableForThreadsAt_STACK_Global::stat_set_number_Of_Implemented_Threads(uint8_t newValue)
    {
        *_ptr_number_Of_Implemented_Threads = newValue;
    }