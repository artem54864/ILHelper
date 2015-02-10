#pragma once
#include <UMShape.h>

using namespace System;


namespace CppBridge {

	public ref class InheritanceTests
	{
		UMShape *mShape = nullptr;

	public:
		InheritanceTests();
		~InheritanceTests();

		void print()
		{
			mShape->print();
		}
	};
}
