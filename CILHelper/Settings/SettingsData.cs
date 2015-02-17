using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace CILHelper.Settings
{
    /// <summary>
    /// Instances of this class keep application level settings.
    /// They contain some application level data (i.e. the list of recent projects, etc.), which shall be saved between solution runs in the "Settings" xml file.
    /// The class is usually instantiated as a result of a deserialization and after the class instance is updated it is usually serialized back to the XML file.
    /// </summary>
    [Serializable]
    [XmlRoot("Settings")]
    public class SettingsData
    {
        /// <summary>
        /// The list of paths (on the file system) to recent projects (the projects that a user worked with recently)
        /// </summary>
        [XmlArrayItem("path")]
        public List<string> RecentProjects {get; set;}
    }
}
