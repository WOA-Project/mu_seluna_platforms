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
