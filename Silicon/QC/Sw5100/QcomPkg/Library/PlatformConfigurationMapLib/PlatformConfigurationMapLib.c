#include <Library/BaseLib.h>
#include <Library/PlatformConfigurationMapLib.h>

static CONFIGURATION_DESCRIPTOR_EX gDeviceConfigurationDescriptorEx[] = {
    {"AllowNonPersistentVarsInRetail", 0x1},
    {"ConfigParameterCount", 64},
    {"DloadCookieAddr", 0x003D3000},
    {"DloadCookieValue", 0x10},
    {"EarlyInitCoreCnt", 1},
    {"EnableDisplayThread", 1},
    {"EnableLogFsSyncInRetail", 0x1},
    {"EnableMultiThreading", 1},
    {"EnableSDHCSwitch", 0x1},
    {"EnableShell", 0x1},
    {"EnableUefiSecAppDebugLogDump", 0x0},
    {"EnableUfsIOC", 0},
    {"MaxCoreCnt", 4},
    {"MaxLogFileSize", 0x400000},
    {"MinidumpTALoadingCfg", 0x0},
    {"NumActiveCores", 8},
    {"NumCpus", 8},
    {"NumCpusFuseAddr", 0x5C04C},
    {"PwrBtnShutdownFlag", 0x0},
    {"Sdc1GpioConfigOff", 0xA00},
    {"Sdc1GpioConfigOn", 0x1E92},
    {"Sdc2GpioConfigOff", 0xA00},
    {"Sdc2GpioConfigOn", 0x1E92},
    {"SecurityFlag", 0x1C4},
    {"SharedIMEMBaseAddr", 0x0C125000},
    {"ShmBridgememSize", 0xA00000},
    {"TzAppsRegnAddr", 0x61800000},
    {"TzAppsRegnSize", 0x0700000},
    {"TzAppsRegnSizeLowRAM", 0x0700000},
    {"UefiMemUseThreshold", 0x77},
    {"UfsSmmuConfigForOtherBootDev", 1},
    {"UsbFnIoRevNum", 0x00010001},
    {"USBHS1_Config", 0x0},
    /* Terminator */
    {"Terminator", 0xFFFFFFFF}};

CONFIGURATION_DESCRIPTOR_EX *GetPlatformConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}