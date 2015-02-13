#pragma once
#include <string>

namespace cila
{

class DecomposeCILFile
{
public:
	DecomposeCILFile(void);
	~DecomposeCILFile(void);

	void execute(std::string cilFile);
};

}

