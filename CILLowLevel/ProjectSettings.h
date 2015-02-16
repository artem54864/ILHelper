#pragma once
using namespace System;

namespace CILLowLevel {

	public ref class ProjectSettings
	{
		const String^ CONFIG_FILE		= ".config";
		const String^ ORDER_FILE		= ".order";
		const String^ ASSEMBLY_FILE		= ".assembly";

		const String^ CONTENT_FOLDER	= "content";

		String^ _pathToProject;
		String^ _projectName;
		String^ _ilFileName;
		String^ _contentFolder;

	public:
		ProjectSettings()
		{
		}

		ProjectSettings(String^ pathToProject);

		property const String^ ConfigFile	{
			const String^ get()
			{
				return CONFIG_FILE;
			}
		}

		property const String^ ProjectName {
			const String^ get()
			{
				return _projectName;
			}
		}

		property const String^ ProjectPath {
			const String^ get()
			{
				return _pathToProject + "\\";
			}
		}

		property const String^ ILFileName {
			const String^ get()
			{
				return _ilFileName;
			}
		}

		property const String^ ILFilePath {
			const String^ get()
			{
				return _pathToProject + "\\" + _ilFileName;
			}
		}

		property const String^ ContentFolder {
			const String^ get()
			{
				return CONTENT_FOLDER;
			}
		}

		property const String^ ContentFolderPath {
			const String^ get()
			{
				return _pathToProject + "\\" + ContentFolder;
			}
		}

		property const String^ OrderFileName {
			const String^ get()
			{
				return ORDER_FILE;
			}
		}

		property const String^ AssemblyFileName {
			const String^ get()
			{
				return ASSEMBLY_FILE;
			}
		}
	};

}

