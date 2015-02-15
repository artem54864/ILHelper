#include "stdafx.h"
#include "ProjectSettings.h"

namespace CILLowLevel {

	ProjectSettings::ProjectSettings(String^ pathToProject)
		: _pathToProject(pathToProject)
	{
		// Note: exclude last '\' symbol if necessary
		if (_pathToProject[_pathToProject->Length - 1] == '\\')
			_pathToProject = _pathToProject->Remove(_pathToProject->Length - 1);

		// Note: define project name - name of folder
		auto index = _pathToProject->LastIndexOf('\\');
		if (index != -1)
		{
			_projectName = _pathToProject->Substring(index + 1);
		}

		if (String::IsNullOrEmpty(_projectName))
			throw gcnew ArgumentException("project name is empty.");

		// Note: define name of resulting IL file
		_ilFileName = _projectName + ".il";
	}

}