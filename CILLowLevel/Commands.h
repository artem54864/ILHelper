#pragma once

using namespace System;

namespace CILLowLevel {
	public ref class Commands
	{
	public:
		void ImportCOMTypeLibraryToCILAssembly(String^ pathToTlb, String^ pathToOutput);
		
		void DisassemblePE(String^ pathToPE, String^ pathToProject);
		
		void DecomposeCILFile(String^ pathToCILFile);
		void BuildCILFile(String^ pathToProject);
	};
}
