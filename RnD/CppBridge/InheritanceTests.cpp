// This is the main DLL file.

#include "stdafx.h"

#include "InheritanceTests.h"
#include <UMCircle.h>

namespace CppBridge {

	InheritanceTests::InheritanceTests()
	{
		mShape = new UMCircle;
	}

	InheritanceTests::~InheritanceTests()
	{
		if (mShape != nullptr)
			delete mShape;
	}

}