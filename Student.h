#pragma once
#include "Identity.h"
class Student :
    public Identity
{
public:
    
    Student();

    Student(int id,string name,string pwd);

    virtual void OperMenu();

    void ApplyOrder();

    void ShowMyOrder();

    void ShowAllOrder();

    void CancelOrder();

    void SetId(const int& id);

    void GetId()const;


private:
    int m_id;
};

