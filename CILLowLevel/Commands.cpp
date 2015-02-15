#include "stdafx.h"

#include "Commands.h"
#include <DecomposeCILFile.h>

#include <msclr\marshal_cppstd.h>
#include <string>

namespace CILLowLevel {
	
void 
Commands::ImportCOMTypeLibraryToCILAssembly(String^ pathToTlb, String^ pathToOutput)
{
}

void 
Commands::DisassemblePE(String^ pathToPE, String^ pathToProject)
{
}

void 
Commands::DecomposeCILFile(String^ pathToCILFile)
{
	std::string path = msclr::interop::marshal_as<std::string>(pathToCILFile);

	cila::DecomposeCILFile command(path);
	command.execute();
}

void 
Commands::BuildCILFile(String^ pathToProject)
{
}

}