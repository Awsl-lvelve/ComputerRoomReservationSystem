#pragma once
#include"Identity.h"

class Administrator :
    public Identity
{
public:
    Administrator();

    Administrator(string name, string pwd);

    virtual void OperMenu();

    void AddPerson();

    void ShowPerson();

    void ShowComputer();

    void ClearFile();

};

