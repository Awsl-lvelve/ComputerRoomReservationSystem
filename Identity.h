#pragma once

#include"INCLUDES.h"

class Identity
{
public:
	virtual void OperMenu() = 0;

	void SetName(const string& name) 
	{ this->m_name = name; 
	};
	void SetPwd(const string& pwd) {
		this->m_pwd = pwd; 
	}

	const string& GetName()const {
		return this->m_name;
	}

	const string& GetPwd()const {
		return this->m_pwd;
	}

private:
	string m_name;
	string m_pwd;
};

