#include "stdafx.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace	Microsoft::VisualStudio::TestTools::UnitTesting;
using namespace CILLowLevel;

namespace CILLowLevel_UnitTests
{
	[TestClass]
	public ref class ProjectSettings_Tests
	{
		String^ _pathToProject;
		ProjectSettings^ _projectSettings = nullptr;

	public: 
		[TestInitializeAttribute]
		void Initialize()
		{
			_pathToProject = "D:\\My Projects\\Excel 2013";
		}

		[TestMethod]
		void ConfigProperty_Test()
		{
			ProjectSettings ^settings = gcnew ProjectSettings(_pathToProject);

			Assert::IsTrue(settings->ConfigFile == ".config");
		}

		[TestMethod]
		void ProjectNameProperty_Test()
		{
			ProjectSettings ^settings = gcnew ProjectSettings(_pathToProject);

			Assert::IsTrue(settings->ProjectName == "Excel 2013");
		}

		[TestMethod]
		[ExpectedException(ArgumentException::typeid)]
		void ProjectPathProperty_Test()
		{
			ProjectSettings ^settings1 = gcnew ProjectSettings(_pathToProject + "\\");
			Assert::IsTrue(settings1->ProjectPath == _pathToProject + "\\");

			ProjectSettings ^settings2 = gcnew ProjectSettings(_pathToProject);
			Assert::IsTrue(settings2->ProjectPath == _pathToProject + "\\");

			// Note: expected throwing of ArgumentException exception
			ProjectSettings ^settings3 = gcnew ProjectSettings("D:");
		}

		[TestMethod]
		void ILFileNameProperty_Test()
		{
			ProjectSettings ^settings = gcnew ProjectSettings(_pathToProject);
			Assert::IsTrue(settings->ILFileName == "Excel 2013.il");
		}

		[TestMethod]
		void ILFilePathProperty_Test()
		{
			ProjectSettings ^settings = gcnew ProjectSettings(_pathToProject);
			Assert::IsTrue(settings->ILFilePath == _pathToProject + "\\" + "Excel 2013.il");
		}

	};
}
