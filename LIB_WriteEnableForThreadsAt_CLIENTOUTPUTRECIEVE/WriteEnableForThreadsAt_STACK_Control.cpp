#include "pch.h"

// classes.

// registers.
    bool _flag_praisingWrite = NULL;
    std::list<std::list<bool>> _list_Of_2ibt_flag_WriteState = { {NULL} };
    std::list<uint32_t> _list_Of_WriteActive_Count_For_ThreadId = { NULL };
    std::list<uint32_t> _list_Of_WriteIdle_Count_For_ThreadId = { NULL };
    std::list<uint32_t> _list_Of_WriteWait_Count_For_ThreadId = { NULL };
    uint8_t _new_writeCycle_Try_ThreadId_Index = NULL;
    std::list<uint8_t> _QUE_List_Of_ThreadToWrite = { NULL };
    uint8_t _writeCycle_Try_ThreadId_Index = NULL;

// pointers.
    bool* _ptr_flag_praisingWrite = NULL;
    std::list<std::list<bool>>* _ptr_list_Of_2ibt_flag_WriteState = NULL;
    std::list<uint32_t>* _ptr_list_Of_WriteActive_Count_For_ThreadId = NULL;
    std::list<uint32_t>* _ptr_list_Of_WriteIdle_Count_For_ThreadId = NULL;
    std::list<uint32_t>* _ptr_list_Of_WriteWait_Count_For_ThreadId = NULL;
    uint8_t* _ptr_new_writeCycle_Try_ThreadId_Index = NULL;
    std::list<uint8_t>* _ptr_QUE_List_Of_ThreadToWrite = NULL;
    uint8_t* _ptr_writeCycle_Try_ThreadId_Index = NULL;

// constructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::WriteEnableForThreadsAt_STACK_Control(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Global* global)
    {
        _ptr_flag_praisingWrite = &_flag_praisingWrite;
        _ptr_new_writeCycle_Try_ThreadId_Index = &_new_writeCycle_Try_ThreadId_Index;
        _ptr_writeCycle_Try_ThreadId_Index = &_writeCycle_Try_ThreadId_Index;
        bool* newDEAFULT_bool = new bool(false);
        create_flag_praisingWrite(&newDEAFULT_bool);
        delete newDEAFULT_bool;
        uint8_t* newDEFAULT_uint8_t = new uint8_t(UINT8_MAX);
        create_QUE_List_Of_ThreadToWrite(newDEFAULT_uint8_t);
        create_writeCycle_Try_ThreadId_Index(newDEFAULT_uint8_t);
        create_new_writeCycle_Try_ThreadId_Index(newDEFAULT_uint8_t);
        delete newDEFAULT_uint8_t;
        uint32_t* newDEFAULT_uint32_t = new uint32_t(UINT8_MAX);
        create_list_Of_WriteActive_Count_For_ThreadId(newDEFAULT_uint32_t);
        create_list_Of_WriteIdle_Count_For_ThreadId(newDEFAULT_uint32_t);
        create_list_Of_WriteWait_Count_For_ThreadId(newDEFAULT_uint32_t);
        delete newDEFAULT_uint32_t;
    }

// destructor.
    OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::~WriteEnableForThreadsAt_STACK_Control()
    {
        delete _ptr_list_Of_2ibt_flag_WriteState;
        delete _ptr_list_Of_WriteActive_Count_For_ThreadId;
        delete _ptr_list_Of_WriteIdle_Count_For_ThreadId;
        delete _ptr_list_Of_WriteWait_Count_For_ThreadId;
        delete _ptr_QUE_List_Of_ThreadToWrite;
        delete _ptr_flag_praisingWrite;
        delete _ptr_new_writeCycle_Try_ThreadId_Index;
        delete _ptr_writeCycle_Try_ThreadId_Index;
    }

// public.
    // dynamic.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_Activate(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(obj, coreId, *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT());
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_SortQue(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_A)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WRITE())
                {
                    if ((obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_B)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT())
                        || (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_B)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_IDLE()))
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_B)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WRITE())
                    {
                        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, index_A) > obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, index_B))
                        {
                            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_A)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_IDLE())
                {
                    if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_B)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT())
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_B)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_IDLE())
                    {
                        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, index_A) < obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, index_B))
                        {
                            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_A)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT())
                {
                    if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, index_B)) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT())
                    {
                        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                }
            }
        }
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_Request(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        while (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_flag_praisingWrite() == true)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->dynamicStagger(obj, coreId);
        }
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(true);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_writeCycle_Try_ThreadId_Index(obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_new_writeCycle_Try_ThreadId_Index());
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(obj, coreId, *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT());
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
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeQue_Update(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj)
    {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->get_ptr_WriteEnable()->get_ptr_Global()->get_number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, concurrenctThreadID) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_IDLE())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, concurrenctThreadID, get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, concurrenctThreadID) + 1);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, concurrenctThreadID, 0);
            }
            else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, concurrenctThreadID) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WAIT())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, concurrenctThreadID, get_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, concurrenctThreadID) + 1);
            }
            else if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_2ibt_flag_WriteState(obj, concurrenctThreadID) == *obj->get_ptr_WriteEnable()->get_ptr_Global()->get_ptr_2bit_flag_write_WRITE())
            {
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, concurrenctThreadID, get_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, concurrenctThreadID) + 1);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, concurrenctThreadID, 0);
                obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, concurrenctThreadID, 0);
            }
        }
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_flag_praisingWrite(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, bool newDEAFULT_bool)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_flag_praisingWrite(newDEAFULT_bool);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_Item_On_list_Of_2ibt_flag_WriteState(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t slot, std::list<bool>* newINITIALISED_boolList)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_2ibt_flag_WriteState(obj, slot, *newINITIALISED_boolList);;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_Item_On_list_Of_WriteActive_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, concurrenctThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_Item_On_list_Of_WriteIdle_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, concurrenctThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_Item_On_list_Of_WriteWait_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, uint32_t* newINITIALISED_uint32_t)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, concurrenctThreadID, *newINITIALISED_uint32_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_new_writeCycle_Try_ThreadId_Index(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t* newINITIALISED_uint8_t)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_new_writeCycle_Try_ThreadId_Index(*newINITIALISED_uint8_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_Item_On_QUE_List_Of_ThreadToWrite(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t slotID, uint8_t* newINITIALISED_uint8_t)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(obj, slotID, *newINITIALISED_uint8_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::initialise_writeCycle_Try_ThreadId_Index(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t* newINITIALISED_uint8_t)
    {
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_writeCycle_Try_ThreadId_Index(*newINITIALISED_uint8_t);
    }
        // get.
    bool OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_flag_praisingWrite()
    {
        return _flag_praisingWrite;
    }
    std::list<bool> OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_2ibt_flag_WriteState(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, concurrenctThreadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_WriteActive_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrenctThreadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrenctThreadID);
        return *temp;
    }
    uint32_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_list_Of_WriteWait_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrenctThreadID);
        return *temp;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_Item_On_QUE_List_Of_ThreadToWrite(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t slotID)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, slotID);
        return *temp;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_new_writeCycle_Try_ThreadId_Index()
    {
        return _new_writeCycle_Try_ThreadId_Index;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteActive_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteIdle_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteWait_Count_For_ThreadId;
    }
    std::list<std::list<bool>>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_list_Of_2ibt_flag_WriteState()
    {
        return _ptr_list_Of_2ibt_flag_WriteState;
    }
    std::list<uint8_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_ptr_QUE_List_Of_ThreadToWrite()
    {
        return _ptr_QUE_List_Of_ThreadToWrite;
    }
    uint8_t OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::get_writeCycle_Try_ThreadId_Index()
    {
        return _writeCycle_Try_ThreadId_Index;
    }
        // set.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_flag_praisingWrite(bool newFlag)
    {
        _flag_praisingWrite = newFlag;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_2ibt_flag_WriteState(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, std::list<bool> newState)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_2ibt_flag_WriteState()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newState;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_WriteActive_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, uint32_t newCount)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_WriteActive_Count_For_ThreadId()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newCount;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, uint32_t newCount)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_WriteIdle_Count_For_ThreadId()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newCount;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_list_Of_WriteWait_Count_For_ThreadId(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t concurrenctThreadID, uint32_t newCount)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_list_Of_WriteWait_Count_For_ThreadId()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = newCount;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_Item_On_QUE_List_Of_ThreadToWrite(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t slotID, uint8_t concurrenctThreadID)
    {
        auto temp = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_ptr_QUE_List_Of_ThreadToWrite()->begin();
        std::advance(temp, concurrenctThreadID);
        *temp = concurrenctThreadID;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        _new_writeCycle_Try_ThreadId_Index = newValue;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        _writeCycle_Try_ThreadId_Index = newValue;
    }
    // static.
        // get.
        // set.

// private.
    // dynamic.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::dynamicStagger(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId)
    {
        if (obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_writeCycle_Try_ThreadId_Index() == coreId)
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
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::writeEnable_ShiftQueValues(OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Framework* obj, uint8_t coreId_A, uint8_t coreId_B)
    {
        int temp_A = int(0);
        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteActive_Count_For_ThreadId(obj, coreId_B, temp_A);

        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteIdle_Count_For_ThreadId(obj, coreId_B, temp_A);

        temp_A = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_list_Of_WriteWait_Count_For_ThreadId(obj, coreId_B, temp_A);

        uint8_t temp_B = uint8_t(0);
        temp_B = obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, coreId_A);
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(obj, coreId_A, obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->get_Item_On_QUE_List_Of_ThreadToWrite(obj, coreId_B));
        obj->get_ptr_WriteEnable()->get_ptr_WriteEnable_Control()->set_Item_On_QUE_List_Of_ThreadToWrite(obj, coreId_B, temp_B);
    }
        // get.
        // set.
    // static.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_flag_praisingWrite(bool newDEAFULT_bool)
    {
        Set_flag_praisingWrite(false);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_2ibt_flag_WriteState(bool newDEAFULT_bool)
    {
        std::list<std::list<bool>> _list_Of_2ibt_flag_WriteState = { {true, true}, { true, true }, { true, true } };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_2ibt_flag_WriteState();
        while (Get_ptr_list_Of_2ibt_flag_WriteState() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_WriteActive_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t> _list_Of_WriteActive_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_WriteActive_Count_For_ThreadId();
        while (Get_ptr_list_Of_WriteActive_Count_For_ThreadId() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_WriteIdle_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t> _list_Of_WriteIdle_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_WriteIdle_Count_For_ThreadId();
        while (Get_ptr_list_Of_WriteIdle_Count_For_ThreadId() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_list_Of_WriteWait_Count_For_ThreadId(uint32_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t> _list_Of_WriteWait_Count_For_ThreadId = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
        create_ptr_list_Of_WriteWait_Count_For_ThreadId();
        while (Get_ptr_list_Of_WriteWait_Count_For_ThreadId() == NULL) {}
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_new_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint32_t)
    {
        Set_new_writeCycle_Try_ThreadId_Index(*newDEFAULT_uint32_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_QUE_List_Of_ThreadToWrite(uint8_t* newDEFAULT_uint32_t)
    {
        std::list<uint32_t> _QUE_List_Of_ThreadToWrite = { *newDEFAULT_uint32_t, *newDEFAULT_uint32_t, *newDEFAULT_uint32_t };//NUMBER OF CONCURRENT THREADS
        create_ptr_QUE_List_Of_ThreadToWrite();
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_writeCycle_Try_ThreadId_Index(uint8_t* newDEFAULT_uint32_t)
    {
        Set_writeCycle_Try_ThreadId_Index(*newDEFAULT_uint32_t);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        set_ptr_list_Of_WriteActive_Count_For_ThreadId(&_list_Of_WriteActive_Count_For_ThreadId);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        set_ptr_list_Of_WriteIdle_Count_For_ThreadId(&_list_Of_WriteIdle_Count_For_ThreadId);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        set_ptr_list_Of_WriteWait_Count_For_ThreadId(&_list_Of_WriteWait_Count_For_ThreadId);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_list_Of_2ibt_flag_WriteState()
    {
        set_ptr_list_Of_2ibt_flag_WriteState(&_list_Of_2ibt_flag_WriteState);
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::create_ptr_QUE_List_Of_ThreadToWrite()
    {
        set_ptr_QUE_List_Of_ThreadToWrite(&_QUE_List_Of_ThreadToWrite);
    }
        // get.
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Get_ptr_list_Of_WriteActive_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteActive_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Get_ptr_list_Of_WriteIdle_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteIdle_Count_For_ThreadId;
    }
    std::list<uint32_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Get_ptr_list_Of_WriteWait_Count_For_ThreadId()
    {
        return _ptr_list_Of_WriteWait_Count_For_ThreadId;
    }
    std::list<std::list<bool>>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Get_ptr_list_Of_2ibt_flag_WriteState()
    {
        return _ptr_list_Of_2ibt_flag_WriteState;
    }
    std::list<uint8_t>* OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Get_ptr_QUE_List_Of_ThreadToWrite()
    {
        return _ptr_QUE_List_Of_ThreadToWrite;
    }
        // set.
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Set_flag_praisingWrite(bool newFlag)
    {
        _flag_praisingWrite = newFlag;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_WriteActive_Count_For_ThreadId(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_WriteActive_Count_For_ThreadId = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_WriteIdle_Count_For_ThreadId(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_WriteIdle_Count_For_ThreadId = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_WriteWait_Count_For_ThreadId(std::list<uint32_t>* newPtr)
    {
        _ptr_list_Of_WriteWait_Count_For_ThreadId = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_list_Of_2ibt_flag_WriteState(std::list<std::list<bool>>* newPtr)
    {
        _ptr_list_Of_2ibt_flag_WriteState = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::set_ptr_QUE_List_Of_ThreadToWrite(std::list<uint8_t>* newPtr)
    {
        _ptr_QUE_List_Of_ThreadToWrite = newPtr;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Set_new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        _new_writeCycle_Try_ThreadId_Index = newValue;
    }
    void OpenAvrilLIB::WriteEnableForThreadsAt_STACK_Control::Set_writeCycle_Try_ThreadId_Index(uint8_t newValue)
    {
        _writeCycle_Try_ThreadId_Index = newValue;
    }