#pragma once
using namespace System;

namespace CILLowLevel {

	public ref class ProjectSettings
	{
		const String^ CONFIG_FILE = L".config";

		String^ _pathToProject;
		String^ _projectName;
		String^ _ilFileName;

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

	};

}

