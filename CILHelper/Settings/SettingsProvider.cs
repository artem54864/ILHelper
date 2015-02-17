using System;
using System.Collections.Generic;
using System.Configuration;
using System.IO;
using System.Linq;
using System.Reflection.Emit;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Xml;
using System.Xml.Serialization;

namespace CILHelper.Settings
{
    /// <summary>
    /// The class is used to load and save Application Settings from \ to the predefined XML file.
    /// </summary>
    public class SettingsProvider
    {
        /// <summary>
        /// The key is specified in the "App.config" file.
        /// </summary>
        private const string FilePathKey = "SettingsFilePath";

        /// <summary>
        /// The method loads settings from a persistent storage (the XML file)
        /// and populates an instance of the "SettingsModel" class to be used in the application and returns it to a caller.
        /// </summary>
        /// <returns></returns>
        public static SettingsData Load()
        {
            XmlSerializer serializer = new XmlSerializer(typeof(SettingsData));
            string settingsFilePath = ConfigurationManager.AppSettings[FilePathKey];
            using (FileStream fs = new FileStream(settingsFilePath, FileMode.Open, FileAccess.Read, FileShare.Read))
            {
                return (SettingsData) serializer.Deserialize(fs);
            }
        }

        /// <summary>
        /// The method saves the settings from the "settingsToSave" argument to the persistant storage (the XML file)
        /// </summary>
        public static void Save(SettingsData settingsToSave)
        {
            XmlSerializer serializer = new XmlSerializer(typeof(SettingsData));
            string settingsFilePath = ConfigurationManager.AppSettings[FilePathKey];
            using (FileStream fs = new FileStream(settingsFilePath, FileMode.Open, FileAccess.ReadWrite, FileShare.Read))
            {
                serializer.Serialize(fs, settingsToSave);
            }
        }
    }
}
