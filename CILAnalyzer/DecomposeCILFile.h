#pragma once
#include <string>

#include "ICommand.h"

namespace cila
{
	/**
	<summary>
	'DecomposeCILFile' is a class which helps to decompose content of the specified CIL file to
	the independent files such as: *.class, *.assembly, *.order files etc.

	We parse the input CIL file and create separate files for each element of the file such as class or
	assembly declaration. All created files locates in selected project folder. Project folder has scecial structure
	which described in the another section.
	</summary>
	*/
	class DecomposeCILFile : public ICommand
	{
	public:
		DecomposeCILFile(std::string cilFile);
		~DecomposeCILFile(void);

		void execute() override;
	};

}

