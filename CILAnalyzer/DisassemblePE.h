#pragma once
#include "ICommand.h"

namespace cila
{
	class DisassemblePE : public ICommand
	{
	public:
		DisassemblePE();
		~DisassemblePE();

		virtual void execute();
	};

}

