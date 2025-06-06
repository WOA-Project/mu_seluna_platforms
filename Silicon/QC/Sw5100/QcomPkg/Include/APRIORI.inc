APRIORI DXE {

    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

    # INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/RscRtDxe.inf
    # INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/SCHandlerRtDxe.inf

    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

    # Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
    INF QcomPkg/PatchedBinaries/HALIOMMUDxe.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/VcsDxe/VcsDxe.inf

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
    ## TODO: Review Patch granularity
    INF QcomPkg/PatchedBinaries/ClockDxe.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf

    ## Hangs
    ## INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf

    FILE DRIVER = 6b38f7b4-ad98-40e9-9093-aca2b5a253c4 {
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.efi
            SECTION UI = "DiskIoDxe"
    }

    FILE DRIVER = 1fa1f39e-feff-4aae-bd7b-38a070a3b609 {
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.efi
            SECTION UI = "PartitionDxe"
    }

    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
    INF FatPkg/EnhancedFatDxe/Fat.inf

    ## Fails with not found then reboot
    ## INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
    INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    ## Fails with not found then reboot
    ## INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/PILDxe/PILDxe.inf
    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
    FILE DRIVER = C2F9A4F5-F7B4-43E7-BA99-5EA804CC103A {
            SECTION UI = "ASN1X509Dxe"
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.efi
    }

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
    FILE DRIVER = 32C71E68-83A8-46ED-AED1-094E71B12057 {
            SECTION UI = "SecRSADxe"
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SecRSADxe/SecRSADxe.efi
    }

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
    INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf

    # INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf

    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/FontDxe/FontDxe.inf

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomBds/QcomBds.inf

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
    INF SelunaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

    ## Hangs
    ## INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/GpiDxe/GpiDxe.inf

    FILE DRIVER = 3adf8dda-1850-44c5-8c63-bb991849bc6f {
            SECTION UI = "HashDxe"
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/HashDxe/HashDxe.efi
    }

    FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
            SECTION UI = "CipherDxe"
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/CipherDxe/CipherDxe.efi
    }

    # INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/MacDxe/MacDxe.inf
    FILE DRIVER = 20583A66-3C26-4D9E-9A8C-E2DFA2914015 {
            SECTION UI = "MacDxe"
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/MacDxe/MacDxe.efi
    }

    FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
            SECTION UI = "RngDxe"
            SECTION PE32 = Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/RNGDxe/RngDxe.efi
    }

    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
    INF Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf

    # INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    # INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
    # INF SelunaPkg/Driver/GraphicsConsoleDxe.inf
}