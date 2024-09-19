APRIORI DXE {

    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    # Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
    INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf

    FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
            SECTION PE32 = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Override/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.efi
            SECTION UI = "DiskIoDxe"
    }

    FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
            SECTION PE32 = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Override/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.efi
            SECTION UI = "PartitionDxe"
    }

    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
    INF FatPkg/EnhancedFatDxe/Fat.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

    FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
            SECTION UI = "RngDxe"
            SECTION RAW = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/RNGDxe/RngDxe.raw
            SECTION PE32 = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/RNGDxe/RngDxe.efi
    }

    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Drivers/MsEnvDxe/MsEnvDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/PILDxe/PILDxe.inf
    INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Drivers/TouchControllerInitDxe/TouchControllerInitDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Drivers/SfpdUtils/SfpdUtils.inf

    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/FontDxe/FontDxe.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Drivers/ExtFgDxe/ExtFgDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf

    FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
            SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/XhciDxe/XhciDxe.efi
            SECTION UI = "XhciDxe"
    }

    FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
            SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.efi
            SECTION UI = "UsbBusDxe"
    }

    FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
            SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.efi
            SECTION UI = "UsbKbDxe"
    }

    FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
            SECTION PE32 = Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.efi
            SECTION UI = "UsbMassStorageDxe"
    }

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
    INF Cambria/BOOT.XF.3.0.1-00243-SC8180XWZB-2/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

    FILE DRIVER = f09ad92e-4e91-490f-ab99-e69939b840b2 {
            SECTION UI = "LimitsDxe"
            SECTION RAW = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/LimitsDxe/LimitsDxe.raw
            SECTION PE32 = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/LimitsDxe/LimitsDxe.efi
    }

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/GpiDxe/GpiDxe.inf

    FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
            SECTION UI = "HashDxe"
            SECTION RAW = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/HashDxe/HashDxe.raw
            SECTION PE32 = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/HashDxe/HashDxe.efi
    }

    FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
            SECTION UI = "CipherDxe"
            SECTION RAW = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/CipherDxe/CipherDxe.raw
            SECTION PE32 = Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
    }

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Drivers/VarLockNullDxe/VarLockNullDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Override/MdeModulePkg/Universal/Variable/UefiVariablePolicy/Dxe/VariablePolicyNullDxe.inf
    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/Sw5100FamilyPkg/Drivers/MsManufacturingModeDxe/MsManufacturingMode.inf

    INF Seluna/BOOT.XF.4.3-00248-ATHERTONLAZ-2/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
}