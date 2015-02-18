using System;
using System.Globalization;
using CILHelper.Settings;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace CILHelper_UnitTests
{
    [TestClass]
    public class SettingsTest
    {
        [TestMethod]
        public void SaveLoadTest()
        {
            SettingsData settingsOld = SettingsProvider.Load();
            int recentProjectsCountOld = settingsOld.RecentProjects.Count;
            string randomNewRecentPrjectName = Guid.NewGuid().ToString();
            settingsOld.RecentProjects.Add(randomNewRecentPrjectName);
            SettingsProvider.Save(settingsOld);

            SettingsData settingsUpdated = SettingsProvider.Load();

            int currentRecentProjectsCount = settingsUpdated.RecentProjects.Count;

            Assert.AreEqual(recentProjectsCountOld + 1, currentRecentProjectsCount);

            Assert.AreEqual(settingsUpdated.RecentProjects[currentRecentProjectsCount - 1], randomNewRecentPrjectName);
        }
    }
}
