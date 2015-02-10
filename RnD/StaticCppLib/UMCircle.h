#pragma once
#include "UMShape.h"
#include <iostream>
#define DllExport   __declspec( dllexport )

class DllExport UMCircle : public UMShape
{
public:
	UMCircle(){}
	virtual ~UMCircle(){}

	virtual void print()
	{
		std::cout << "I am UMCircle" << std::endl;
	}
};

