#pragma once
#include "ICommand.h"

namespace cila
{
	class ImportCOMTypeLibraryToCILAssembly : public ICommand
	{
	public:
		ImportCOMTypeLibraryToCILAssembly();
		~ImportCOMTypeLibraryToCILAssembly();

		virtual void execute();
	};
}