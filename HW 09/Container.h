#pragma once
#ifndef _CONTAINER_H_
#define _CONTAINER_H_

#include "employee.h"

class Container {
public:
	Employee* emp;
	Container* next;
	Container();			// constructor
};

#endif // _CONTAINER_H_