#include "pch.h"

// pointers.
    // classes.
    // registers.
    bool* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_flag_praisingWrite = NULL;
    std::list<std::array<bool, 2>>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_list_Of_2ibt_flag_WriteState = NULL;
    std::list<uint32_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_list_Of_WriteActive_Count_For_ThreadId = NULL;
    std::list<uint32_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_list_Of_WriteIdle_Count_For_ThreadId = NULL;
    std::list<uint32_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_list_Of_WriteWait_Count_For_ThreadId = NULL;
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_new_writeCycle_Try_ThreadId_Index = NULL;
    std::list<uint8_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_QUE_List_Of_ThreadToWrite = NULL;
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::_ptr_writeCycle_Try_ThreadId_Index = NULL;

// constructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Global* global)
    {
        bool* newDEAFULT_bool = new bool(true);
        stat_create_flag_praisingWrite(newDEAFULT_bool);
        delete newDEAFULT_bool;
        std::array<bool, 2>* newDEAFULT_boolSet = new std::array<bool, 2>{ true, true };
        stat_create_list_Of_2ibt_flag_WriteState(newDEAFULT_boolSet);
        delete newDEAFULT_boolSet;
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        stat_create_QUE_List_Of_ThreadToWrite(newDEFAULT_uint8_t);
        stat_create_writeCycle_Try_ThreadId_Index(newDEFAULT_uint8_t);
        stat_create_new_writeCycle_Try_ThreadId_Index(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        uint32_t* newDEFAULT_uint32_t = new uint32_t(UINT8_MAX);
        stat_create_list_Of_WriteActive_Count_For_ThreadId(newDEFAULT_uint32_t);
        stat_create_list_Of_WriteIdle_Count_For_ThreadId(newDEFAULT_uint32_t);
        stat_create_list_Of_WriteWait_Count_For_ThreadId(newDEFAULT_uint32_t);
        delete newDEFAULT_uint32_t;
    }
    
// destructor.
    OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::~WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control()
    {
        delete _ptr_flag_praisingWrite;
        delete _ptr_list_Of_2ibt_flag_WriteState;
        delete _ptr_list_Of_WriteActive_Count_For_ThreadId;
        delete _ptr_list_Of_WriteIdle_Count_For_ThreadId;
        delete _ptr_list_Of_WriteWait_Count_For_ThreadId;
        delete _ptr_new_writeCycle_Try_ThreadId_Index;
        delete _ptr_QUE_List_Of_ThreadToWrite;
        delete _ptr_writeCycle_Try_ThreadId_Index;
    }

// public.
    // dynamin.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_flag_praisingWrite(bool* newINITIALISED_bool)
    {
        stat_set_flag_praisingWrite(*newINITIALISED_bool);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2>* newINITIALISED_boolList)
    {
        stat_set_Item_On_list_Of_2ibt_flag_WriteState(concurrentThreadID, *newINITIALISED_boolList);;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        stat_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrentThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        stat_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_new_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t)
    {
        stat_set_new_writeCycle_Try_ThreadId_Index(*newINITIALISED_uint8_t);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t* newINITIALISED_uint8_t)
    {
        stat_set_Item_On_QUE_List_Of_ThreadToWrite(slotID, *newINITIALISED_uint8_t);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::initialise_writeCycle_Try_ThreadId_Index(uint8_t* newINITIALISED_uint8_t)
    {
        stat_set_writeCycle_Try_ThreadId_Index(*newINITIALISED_uint8_t);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::writeEnable_Activate(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT());
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::writeEnable_SortQue(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WRITE())
                {
                    if ((obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                        || (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE()))
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite( index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WRITE())
                    {
                        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE())
                {
                    if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE())
                    {
                        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_A)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                {
                    if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(index_B)) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                }
            }
        }
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::writeEnable_Request(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
    {
        while (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_flag_praisingWrite() == true)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->dynamicStagger(obj, coreId);
        }
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(true);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_new_writeCycle_Try_ThreadId_Index());
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(coreId, obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT());
        }
        else
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() + 1);
            if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads())
            {
                set_new_writeCycle_Try_ThreadId_Index(0);
            }
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(false);
            writeEnable_Request(obj, coreId);
        }
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::writeQue_Update(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj)
    {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_IDLE())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WAIT())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, get_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->get_ptr_WriteEnable()->get_ptr_Global()->get_2bit_flag_write_WRITE())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID, get_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
        // get.
    bool OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_flag_praisingWrite()
    {
        return *stat_get_ptr_flag_praisingWrite();
    }
    std::array<bool, 2> OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID)
    {
        auto temp = stat_get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint32_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID)
    {
        auto temp = stat_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        return *temp;
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_new_writeCycle_Try_ThreadId_Index()
    {
        return *stat_get_ptr_new_writeCycle_Try_ThreadId_Index();
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID)
    {
        auto temp = stat_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }
    uint8_t OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::get_writeCycle_Try_ThreadId_Index()
    {
        return *stat_get_ptr_writeCycle_Try_ThreadId_Index();
    }
        // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_flag_praisingWrite(bool newBoolValue)
    {
        stat_set_flag_praisingWrite(newBoolValue);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
    {
        stat_set_Item_On_list_Of_2ibt_flag_WriteState(concurrentThreadID, new2bitState);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        stat_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_new_writeCycle_Try_ThreadId_Index(uint8_t newID)
    {
        stat_set_writeCycle_Try_ThreadId_Index(newID);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID)
    {
        stat_set_Item_On_QUE_List_Of_ThreadToWrite(slotID, newID);
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::set_writeCycle_Try_ThreadId_Index(uint8_t newID)
    {
        stat_set_writeCycle_Try_ThreadId_Index(newID);
    }
    // static.
        // get.
        // set.
        
// private.
    // dynamin.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::dynamicStagger(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId)
    {
        if (*stat_get_ptr_writeCycle_Try_ThreadId_Index() == coreId)
        {
            //exit early
        }
        else
        {
            int ptr_count = int(0);
            while (ptr_count < 20)//TODO record till flag change
            {
                ptr_count = ptr_count + 1;
            }
        }
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::writeEnable_ShiftQueValues(OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Framework* obj, uint8_t coreId_A, uint8_t coreId_B)
    {
        int temp_A = int(0);
        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        uint8_t temp_B = uint8_t(0);
        temp_B = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(coreId_B, temp_B);
    }
        // get.
        // set.
    // static.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_flag_praisingWrite(bool* newDEFAULT_bool)
    {
        stat_set_flag_praisingWrite(newDEFAULT_bool);
        while (stat_get_ptr_flag_praisingWrite() == NULL) { }
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_list_Of_2ibt_flag_WriteState(std::array<bool, 2>* newDEFAULT_boolList)
    {
        std::list<std::array<bool, 2>>* _ptr_list_Of_2ibt_flag_WriteState = new std::list<std::array<bool, 2>>();
        while (stat_get_ptr_list_Of_2ibt_flag_WriteState() == NULL) {}
        *_ptr_list_Of_2ibt_flag_WriteState = { *newDEFAULT_boolList, *newDEFAULT_boolList, *newDEFAULT_boolList };
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_list_Of_WriteActive_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t>* _ptr_list_Of_WriteActive_Count_For_ThreadId = new std::list<uint32_t>{};
        while (stat_get_ptr_list_Of_WriteActive_Count_For_ThreadId() == NULL) {}
        *_ptr_list_Of_WriteActive_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_list_Of_WriteIdle_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t>* _ptr_list_Of_WriteIdle_Count_For_ThreadId = new std::list<uint32_t>();
        while (stat_get_ptr_list_Of_WriteIdle_Count_For_ThreadId() == NULL) {}
        *_ptr_list_Of_WriteIdle_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_list_Of_WriteWait_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t>* _ptr_list_Of_WriteWait_Count_For_ThreadId = new std::list<uint32_t>();
        while (stat_get_ptr_list_Of_WriteWait_Count_For_ThreadId() == NULL) {}
        *_ptr_list_Of_WriteWait_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_new_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t)
    {
        stat_set_new_writeCycle_Try_ThreadId_Index(*newDEFAULT_uint8_t);
        while (stat_get_ptr_new_writeCycle_Try_ThreadId_Index() == NULL) {}
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_QUE_List_Of_ThreadToWrite(uint8_t* newDEFAULT_uint8_t)
    {
        std::list<uint8_t>* _ptr_QUE_List_Of_ThreadToWrite = new std::list<uint8_t>();
        while (stat_get_ptr_QUE_List_Of_ThreadToWrite() == NULL) {}
        *_ptr_QUE_List_Of_ThreadToWrite = { *newDEFAULT_uint8_t, *newDEFAULT_uint8_t, *newDEFAULT_uint8_t };//NUMBER OF CONCURRENT THREADS
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_create_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint8_t)
    {
        stat_set_writeCycle_Try_ThreadId_Index(*newDEFAULT_uint8_t);
        while(stat_get_ptr_writeCycle_Try_ThreadId_Index() == NULL) { }
    }
        // get.
    bool* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_flag_praisingWrite()
    {
        return _ptr_flag_praisingWrite;
    }
    std::list<std::array<bool, 2>>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_list_Of_2ibt_flag_WriteState()
    {
        return _ptr_list_Of_2ibt_flag_WriteState;
    }
    std::list<uint32_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteActive_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteIdle_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteWait_Count_For_ThreadId;
    }
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_new_writeCycle_Try_ThreadId_Index()
    {
        return _ptr_new_writeCycle_Try_ThreadId_Index;
    }
    std::list<uint8_t>* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_QUE_List_Of_ThreadToWrite()
    {
        return _ptr_QUE_List_Of_ThreadToWrite;
    }
    uint8_t* OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_get_ptr_writeCycle_Try_ThreadId_Index()
    {
        return _ptr_writeCycle_Try_ThreadId_Index;
    }
    // set.
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_flag_praisingWrite(bool newFlag)
    {
        *_ptr_flag_praisingWrite = newFlag;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_Item_On_list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
    {
        auto temp = stat_get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = new2bitState;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_Item_On_list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_Item_On_list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
    {
        auto temp = stat_get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrentThreadID);
        *temp = newCount;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_Item_On_QUE_List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID)
    {
        auto temp = stat_get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        *temp = newID;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        *_ptr_new_writeCycle_Try_ThreadId_Index = newValue;
    }
    void OpenAvrilCLIDWriteEnableForThreadsAtSERVEROUTPUTRECIEVE::WriteEnableForThreadsAt_SERVEROUTPUTRECIEVE_Control::stat_set_writeCycle_Try_ThreadId_Index(uint8_t _writeCycle_Try_ThreadId_Index)
    {
        _writeCycle_Try_ThreadId_Index = _writeCycle_Try_ThreadId_Index;
    }