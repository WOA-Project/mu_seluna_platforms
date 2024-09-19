#
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
#

################################################################################
#
# Defines Section - statements that will be processed to create a Makefile.
#
################################################################################
[Defines]
  PLATFORM_NAME                  = Luna
  PLATFORM_GUID                  = b6325ac2-9f3f-4b1d-b129-ac7b35ddde60
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/LunaPkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = LunaPkg/Luna.fdf
  SECURE_BOOT                    = 1
  USE_PHYSICAL_TIMER             = 0
  USE_SCREEN_FOR_SERIAL_OUTPUT   = 0
  USE_MEMORY_FOR_SERIAL_OUTPUT   = 0

  DEFAULT_KEYS                   = TRUE
  PK_DEFAULT_FILE                = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/OEMA0-PK.der
  KEK_DEFAULT_FILE1              = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/Kek/MicCorKEKCA2011_2011-06-24.der
  KEK_DEFAULT_FILE2              = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/Kek/microsoft_corporation_kek_2k_ca_2023.der
  KEK_DEFAULT_FILE3              = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/OEMA0-KEK.der
  DB_DEFAULT_FILE1               = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/Db/MicWinProPCA2011_2011-10-19.der
  DB_DEFAULT_FILE2               = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/Db/windows_uefi_ca_2023.der
  DB_DEFAULT_FILE3               = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/Db/MicCorUEFCA2011_2011-06-27.der
  DB_DEFAULT_FILE4               = SelunaFamilyPkg/Include/Resources/SecureBoot/keystore/Db/microsoft_uefi_ca_2023.der
  DBX_DEFAULT_FILE1              = SelunaFamilyPkg/Include/Resources/SecureBoot/Artifacts/Aarch64/DefaultDbx.bin

  PEI_CRYPTO_SERVICES            = NONE
  DXE_CRYPTO_SERVICES            = STANDARD
  RUNTIMEDXE_CRYPTO_SERVICES     = STANDARD
  SMM_CRYPTO_SERVICES            = NONE
  STANDALONEMM_CRYPTO_SERVICES   = NONE
  PEI_CRYPTO_ARCH                = NONE
  DXE_CRYPTO_ARCH                = AARCH64
  RUNTIMEDXE_CRYPTO_ARCH         = AARCH64
  SMM_CRYPTO_ARCH                = NONE
  STANDALONEMM_CRYPTO_ARCH       = NONE

  PLATFORM_HAS_ACTLR_EL1_UNIMPLEMENTED_ERRATA         = 1
  PLATFORM_HAS_AMCNTENSET0_EL0_UNIMPLEMENTED_ERRATA   = 0
  PLATFORM_HAS_GIC_V3_WITHOUT_IRM_FLAG_SUPPORT_ERRATA = 1
  PLATFORM_HAS_PSCI_MEMPROTECT_FAILING_ERRATA         = 0

[PcdsFixedAtBuild.common]
  # Platform-specific
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x200000000        # 8GB Size

  # SMBIOS
  gSelunaFamilyPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Luna"
  gSelunaFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"XXXX"
  gSelunaFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Luna"
  gSelunaFamilyPkgTokenSpaceGuid.PcdSmbiosBoardModel|"Luna"

  # Simple FrameBuffer
  gSelunaFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1344
  gSelunaFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|1892
  gSelunaFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

  gSelunaFamilyPkgTokenSpaceGuid.PcdABLProduct|"luna"

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1344
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1892
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1344
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1892
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|168 # 168 = 1344 / EFI_GLYPH_WIDTH(8)
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|99 # 99.57 = 1892 / EFI_GLYPH_HEIGHT(19)
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|168 # 168 = 1344 / EFI_GLYPH_WIDTH(8)
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|99 # 99.57 = 1892 / EFI_GLYPH_HEIGHT(19)

!include QcomPkg/QcomPkg.dsc.inc
!include SelunaFamilyPkg/SelunaFamily.dsc.inc
!include SelunaFamilyPkg/Frontpage.dsc.inc

[Components.common]
  LunaPkg/AcpiTables/AcpiTables.inf
