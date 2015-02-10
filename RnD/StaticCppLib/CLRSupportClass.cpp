#include "stdafx.h"
#include "CLRSupportClass.h"
#include "UMCircle.h"

CLRSupportClass::CLRSupportClass()
{
	mShape = new UMCircle();
}


CLRSupportClass::~CLRSupportClass()
{
	if (mShape != nullptr)
		delete mShape;
}

void
CLRSupportClass::print()
{
	mShape->print();
}
