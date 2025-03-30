## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, Bingxing Wang. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x40000000         # Starting address
  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x5FF8C000
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|19200000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|29
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|30
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x0f200000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x0f300000

  gEfiMdeModulePkgTokenSpaceGuid.PcdAcpiDefaultOemRevision|0x00005100
  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x5FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000      # 256K stack
  gEmbeddedTokenSpaceGuid.PcdInterruptBaseAddress|0x0f200000
  gEmbeddedTokenSpaceGuid.PcdPrePiCpuIoSize|44

  gSelunaPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Snapdragon (TM) W5 @ X.XX GHz"
  gSelunaPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"SW5100"

  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x40000000         # 1GB Base
  gArmPlatformTokenSpaceGuid.PcdCoreCount|4
  gArmPlatformTokenSpaceGuid.PcdClusterCount|1

  # UART
  gSelunaPkgTokenSpaceGuid.PcdUartSerialBase|0x04a98000

[LibraryClasses.common]
  PlatformMemoryMapLib|QcomPkg/Library/PlatformMemoryMapLib/PlatformMemoryMapLib.inf
  PlatformConfigurationMapLib|QcomPkg/Library/PlatformConfigurationMapLib/PlatformConfigurationMapLib.inf
  PlatformPeiLib|QcomPkg/PlatformPei/PlatformPeiLib.inf
  PlatformPrePiLib|QcomPkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  AslUpdateLib|SelunaPkg/Library/DxeAslUpdateLib/DxeAslUpdateLib.inf
  RFSProtectionLib|QcomPkg/Library/RFSProtectionLib/RFSProtectionLib.inf

  AcpiPlatformUpdateLib|QcomPkg/Library/AcpiPlatformUpdateLib/AcpiPlatformUpdateLib.inf
  PlatformThemeLib|QcomPkg/Library/PlatformThemeLib/PlatformThemeLib.inf

  ConsoleMsgLib|PcBdsPkg/Library/ConsoleMsgLibNull/ConsoleMsgLibNull.inf

[Components.common]
  SelunaPkg/Driver/GpioButtons/GpioButtons.inf
  SelunaPkg/Driver/SimpleFbDxe/SimpleFbDxe.inf

  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  # Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  QcomPkg/PatchedBinaries/ClockDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/FontDxe/FontDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/FuseInfoDxe/FuseInfoDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/HashDxe/HashDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/MacDxe/MacDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/PILDxe/PILDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomBds/QcomBds.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  Seluna/BOOT.XF.4.3-00257-ATHERTONLAZ-1/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf