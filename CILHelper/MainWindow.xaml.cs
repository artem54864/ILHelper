using System;
using System.Reflection;
using System.Resources;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Windows;
using System.Windows.Markup;
using CILHelper;
using Microsoft.Practices.Prism.ViewModel;
using Microsoft.Practices.Prism.Commands;
using System.Windows.Input;

namespace CILHelper
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow
    {
        public MainWindow()
        {
            System.Threading.Thread.CurrentThread.CurrentUICulture =
            new System.Globalization.CultureInfo("en");
            InitializeComponent();
            DataContext = new ViewModel(this);
        }
    }
}

[MarkupExtensionReturnType(typeof(string), typeof(string))]
public class TranslateExtension : MarkupExtension
{
    readonly ResourceManager _stringsResource = ResourceManager.CreateFileBasedResourceManager("Manager", "CILHelper.Resources", typeof(MainWindow));
    readonly string _key;

    public TranslateExtension(string key)
    {
        _key = key;
    }

    const string NotFoundError = "#StringNotFound#";

    public override object ProvideValue(IServiceProvider serviceProvider)
    {
        if (string.IsNullOrEmpty(_key))
            return NotFoundError;

        return _stringsResource.GetString(_key) ?? NotFoundError;
    }

}

public class ViewModel
{
    #region Fields
    public Window Window { get; set; }

    private DelegateCommand _exitCommand;
    private DelegateCommand _openProjectCommand;
    private DelegateCommand _newProjectCommand;
    private DelegateCommand _closeProjectCommand;
    private DelegateCommand _mergeCommand;
    private DelegateCommand _compileCommand;
    private DelegateCommand _showSettingsCommand;
    private DelegateCommand _helpCommand;
    private DelegateCommand _showSimpleViewCommand;
    private DelegateCommand _showDetailedViewCommand;
    #endregion

    public ViewModel(Window win)
    {
        Window = win;
    }

    #region Commands

    public ICommand ExitCommand
    {
        get
        {
            if (_exitCommand == null)
            {
                _exitCommand = new DelegateCommand(ExitWindow);
            }
            return _exitCommand;
        }
    }

    public ICommand NewProjectCommand
    {
        get
        {
            if (_newProjectCommand == null)
            {
                _newProjectCommand = new DelegateCommand(NewProject);
            }

            return _newProjectCommand;
        }
    }

    public ICommand OpenProjectCommand
    {
        get
        {
            if (_openProjectCommand == null)
            {
                _openProjectCommand = new DelegateCommand(OpenProject);
            }

            return _openProjectCommand;
        }
    }

    public ICommand CloseProjectCommand
    {
        get
        {
            if (_closeProjectCommand == null)
            {
                _closeProjectCommand = new DelegateCommand(CloseProject);
            }

            return _closeProjectCommand;
        }
    }

    public ICommand MergeCommand
    {
        get
        {
            if (_mergeCommand == null)
            {
                _mergeCommand = new DelegateCommand(Merge);
            }

            return _mergeCommand;
        }
    }

    public ICommand CompileCommand
    {
        get
        {
            if (_compileCommand == null)
            {
                _compileCommand = new DelegateCommand(Compile);
            }

            return _compileCommand;
        }
    }

    public ICommand ShowSettingsCommand
    {
        get
        {
            if (_showSettingsCommand == null)
            {
                _showSettingsCommand = new DelegateCommand(ShowSettings);
            }

            return _showSettingsCommand;
        }
    }

    public ICommand HelpCommand
    {
        get
        {
            if (_helpCommand == null)
            {
                _helpCommand = new DelegateCommand(Help);
            }

            return _helpCommand;
        }
    }

    public ICommand ShowSimpleViewCommand
    {
        get
        {
            if (_showSimpleViewCommand == null)
            {
                _showSimpleViewCommand = new DelegateCommand(ShowSimpleView);
            }

            return _showSimpleViewCommand;
        }
    }

    public ICommand ShowDetailedViewCommand
    {
        get
        {
            if (_showDetailedViewCommand == null)
            {
                _showDetailedViewCommand = new DelegateCommand(ShowDetailedView);
            }

            return _showDetailedViewCommand;
        }
    }

    #endregion

    #region Methods

    private void ExitWindow()
    {
        MessageBox.Show("Close window!");
        Window.Close();
    }

    private void OpenProject()
    {
        MessageBox.Show("Open project!");
    }

    private void NewProject()
    {
        MessageBox.Show("New project!");
    }

    private void CloseProject()
    {
        MessageBox.Show("Close project!");
    }

    private void Merge()
    {
        MessageBox.Show("Merge projects!");
    }

    private void Compile()
    {
        MessageBox.Show("Compile project!");
    }

    private void ShowSettings()
    {
        MessageBox.Show("Show settings window!");
    }

    private void Help()
    {
        MessageBox.Show("Help window!");
    }

    private void ShowSimpleView()
    {
        MessageBox.Show("Simple view loaded!");
    }

    private void ShowDetailedView()
    {
        MessageBox.Show("Detailed view loaded!");
    }

    #endregion
}