#pragma once
#include "Identity.h"
class Teacher :
    public Identity
{
public:
    Teacher();

    Teacher(int emp_id, string name, string pwd);

    void OperMenu();

    void ShowAllOrder();

    void ValidateOrder();

    void SetEmpId(const int& id);

    const int& GetEmpId()const;


private:
    int m_emp_id;
};

