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
  PLATFORM_NAME                  = Selene
  PLATFORM_GUID                  = b6325ac2-9f3f-4b1d-b129-ac7b35ddde60
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/SelenePkg
  SUPPORTED_ARCHITECTURES        = AARCH64
  BUILD_TARGETS                  = DEBUG|RELEASE
  SKUID_IDENTIFIER               = DEFAULT
  FLASH_DEFINITION               = SelenePkg/Selene.fdf
  SECURE_BOOT                    = 0
  USE_PHYSICAL_TIMER             = 0
  USE_SCREEN_FOR_SERIAL_OUTPUT   = 0
  USE_MEMORY_FOR_SERIAL_OUTPUT   = 0

  DEFAULT_KEYS                   = FALSE
  PK_DEFAULT_FILE                = SelunaPkg/Include/Resources/SecureBoot/keystore/OEMA0-PK.der
  KEK_DEFAULT_FILE1              = SelunaPkg/Include/Resources/SecureBoot/keystore/KEK/Certificates/MicCorKEKCA2011_2011-06-24.der
  KEK_DEFAULT_FILE2              = SelunaPkg/Include/Resources/SecureBoot/keystore/KEK/Certificates/microsoft_corporation_kek_2k_ca_2023.der
  KEK_DEFAULT_FILE3              = SelunaPkg/Include/Resources/SecureBoot/keystore/OEMA0-KEK.der
  DB_DEFAULT_FILE1               = SelunaPkg/Include/Resources/SecureBoot/keystore/DB/Certificates/MicWinProPCA2011_2011-10-19.der
  DB_DEFAULT_FILE2               = SelunaPkg/Include/Resources/SecureBoot/keystore/DB/Certificates/windows_uefi_ca_2023.der
  DB_DEFAULT_FILE3               = SelunaPkg/Include/Resources/SecureBoot/keystore/DB/Certificates/MicCorUEFCA2011_2011-06-27.der
  DB_DEFAULT_FILE4               = SelunaPkg/Include/Resources/SecureBoot/keystore/DB/Certificates/microsoft_uefi_ca_2023.der
  DB_DEFAULT_FILE5               = SelunaPkg/Include/Resources/SecureBoot/keystore/DB/Certificates/microsoft_option_rom_uefi_ca_2023.der
  DBX_DEFAULT_FILE1              = SelunaPkg/Include/Resources/SecureBoot/Artifacts/Aarch64/DefaultDbx.bin

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

  PLATFORM_HAS_ACTLR_EL1_UNIMPLEMENTED_ERRATA         = 0
  PLATFORM_HAS_AMCNTENSET0_EL0_UNIMPLEMENTED_ERRATA   = 0
  PLATFORM_HAS_GIC_V3_WITHOUT_IRM_FLAG_SUPPORT_ERRATA = 0
  PLATFORM_HAS_PSCI_MEMPROTECT_FAILING_ERRATA         = 1

[PcdsFixedAtBuild.common]
  # Platform-specific
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x80000000        # 2GB Size

  # SMBIOS
  gSelunaPkgTokenSpaceGuid.PcdSmbiosSystemModel|"Selene"
  gSelunaPkgTokenSpaceGuid.PcdSmbiosSystemRetailModel|"XXXX"
  gSelunaPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"Selene"
  gSelunaPkgTokenSpaceGuid.PcdSmbiosBoardModel|"Selene"

  # Simple FrameBuffer
  gSelunaPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|408
  gSelunaPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|408
  gSelunaPkgTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

  gSelunaPkgTokenSpaceGuid.PcdABLProduct|"selene"

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|408
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|408
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|408
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|408
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|51 # 51 = 408 / EFI_GLYPH_WIDTH(8)
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|21 # 21.47 = 408 / EFI_GLYPH_HEIGHT(19)
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|51 # 51 = 408 / EFI_GLYPH_WIDTH(8)
  gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|21 # 21.47 = 408 / EFI_GLYPH_HEIGHT(19)

!include QcomPkg/QcomPkg.dsc.inc
!include SelunaPkg/Seluna.dsc.inc
!include SelunaPkg/Frontpage.dsc.inc

[Components.common]
  #SelenePkg/AcpiTables/AcpiTables.inf
