#pragma once
#include "ICommand.h"

namespace cila
{

class BuildCILFile : public ICommand
{
public:
	BuildCILFile();
	~BuildCILFile();

	void execute() override;
};

}

