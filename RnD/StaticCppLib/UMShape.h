#pragma once

#define DllExport   __declspec( dllexport )

class DllExport UMShape
{
public:
	UMShape(){}
	virtual ~UMShape(){}

	virtual void print() = 0;
};

