#include "pch.h"

// classes.

// registers.
    std::list<bool> _2bit_flag_write_IDLE = { NULL};
    std::list<bool> _2bit_flag_write_WAIT = { NULL };
    std::list<bool> _2bit_flag_write_WRITE = { NULL };
    uint8_t _number_Of_Implemented_Threads = NULL;

// pointers.
    std::list<bool>* _ptr_2bit_flag_write_IDLE = NULL;
    std::list<bool>* _ptr_2bit_flag_write_WAIT = NULL;
    std::list<bool>* _ptr_2bit_flag_write_WRITE = NULL;
    uint8_t* _ptr_number_Of_Implemented_Threads = NULL;

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global()
    {
        _ptr_number_Of_Implemented_Threads = &_number_Of_Implemented_Threads;
        bool* newDEFAULT_Flagbit = new bool(false);
        create_2bit_flag_write_IDLE(&newDEFAULT_Flagbit);
        create_2bit_flag_write_WAIT(&newDEFAULT_Flagbit);
        create_2bit_flag_write_WRITE(&newDEFAULT_Flagbit);
        delete newDEFAULT_Flagbit;
        uint8_t* newDEFAULT_Value = new uint8_t(255);
        create_number_Of_Implemented_Threads(newDEFAULT_Value);
        delete newDEFAULT_Value;
    }

// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global()
    {
        delete _ptr_2bit_flag_write_IDLE;
        delete _ptr_2bit_flag_write_WAIT;
        delete _ptr_2bit_flag_write_WRITE;
        delete _ptr_number_Of_Implemented_Threads;
    }
// public.
    // dynamic.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::initialise_Item_Of_2bit_flag_write_IDLE(uint8_t slot, bool newINITIALISED_FlagBit)
    {
        auto temp = get_ptr_2bit_flag_write_IDLE()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_FlagBit;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::initialise_Item_Of_2bit_flag_write_WAIT(uint8_t slot, bool newINITIALISED_FlagBit)
    {
        auto temp = get_ptr_2bit_flag_write_WAIT()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_FlagBit;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::initialise_Item_Of_2bit_flag_write_WRITE(uint8_t slot, bool newINITIALISED_FlagBit)
    {
        auto temp = get_ptr_2bit_flag_write_WRITE()->begin();
        std::advance(temp, slot);
        *temp = newINITIALISED_FlagBit;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::initialise_number_Of_Implemented_Threads(uint8_t* newValue)
    {
        _number_Of_Implemented_Threads = *newValue;
    }
        // get.
    std::list<bool>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::get_ptr_2bit_flag_write_IDLE()
    {
        return _ptr_2bit_flag_write_IDLE;
    }
    std::list<bool>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::get_ptr_2bit_flag_write_WAIT()
    {
        return _ptr_2bit_flag_write_WAIT;
    }
    std::list<bool>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::get_ptr_2bit_flag_write_WRITE()
    {
        return _ptr_2bit_flag_write_WRITE;
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::get_number_Of_Implemented_Threads()
    {
        return _number_Of_Implemented_Threads;
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
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_2bit_flag_write_IDLE(bool newDEAFULT_FlagBit)
    {
        std::list<bool> _2bit_flag_write_IDLE = { newDEAFULT_FlagBit, newDEAFULT_FlagBit };
        create_ptr_2bit_flag_write_IDLE();
        while (Get_ptr_2bit_flag_write_IDLE() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_2bit_flag_write_WAIT(bool newDEAFULT_FlagBit)
    {
        std::list<bool> _2bit_flag_write_WAIT = { newDEAFULT_FlagBit, newDEAFULT_FlagBit };
        create_ptr_2bit_flag_write_IDLE();
        while (Get_ptr_2bit_flag_write_IDLE() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_2bit_flag_write_WRITE(bool newDEAFULT_FlagBit)
    {
        std::list<bool> _2bit_flag_write_WRITE = { newDEAFULT_FlagBit, newDEAFULT_FlagBit };
        create_ptr_2bit_flag_write_IDLE();
        while (Get_ptr_2bit_flag_write_IDLE() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_number_Of_Implemented_Threads(uint8_t* newDEFAULT_Value)
    {
        set_number_Of_Implemented_Threads(*newDEFAULT_Value);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_ptr_2bit_flag_write_IDLE()
    {
        set_ptr_2bit_flag_write_IDLE(&_2bit_flag_write_IDLE);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_ptr_2bit_flag_write_WAIT()
    {
        set_ptr_2bit_flag_write_WAIT(&_2bit_flag_write_WAIT);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::create_ptr_2bit_flag_write_WRITE()
    {
        set_ptr_2bit_flag_write_WRITE(&_2bit_flag_write_WRITE);
    }

        // get.
    std::list<bool>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::Get_ptr_2bit_flag_write_IDLE()
    {
        return _ptr_2bit_flag_write_IDLE;
    }
    std::list<bool>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::Get_ptr_2bit_flag_write_WAIT()
    {
        return _ptr_2bit_flag_write_WAIT;
    }
    std::list<bool>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::Get_ptr_2bit_flag_write_WRITE()
    {
        return _ptr_2bit_flag_write_WRITE;
    }
        // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_Item_Of_2bit_flag_write_IDLE(uint8_t slot, bool newValue)
    {
        auto temp = Get_ptr_2bit_flag_write_IDLE()->begin();
        std::advance(temp, slot);
        *temp = newValue;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_Item_Of_2bit_flag_write_WAIT(uint8_t slot, bool newValue)
    {
        auto temp = Get_ptr_2bit_flag_write_WAIT()->begin();
        std::advance(temp, slot);
        *temp = newValue;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_Item_Of_2bit_flag_write_WRITE(uint8_t slot, bool newValue)
    {
        auto temp = Get_ptr_2bit_flag_write_WRITE()->begin();
        std::advance(temp, slot);
        *temp = newValue;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_ptr_2bit_flag_write_IDLE(std::list<bool>* newPtr)
    {
        _ptr_2bit_flag_write_IDLE = newPtr;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_ptr_2bit_flag_write_WAIT(std::list<bool>* newPtr)
    {
        _ptr_2bit_flag_write_WAIT = newPtr;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_ptr_2bit_flag_write_WRITE(std::list<bool>* newPtr)
    {
        _ptr_2bit_flag_write_WRITE = newPtr;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global::set_number_Of_Implemented_Threads(uint8_t newValue)
    {
        _number_Of_Implemented_Threads = newValue;
    }
