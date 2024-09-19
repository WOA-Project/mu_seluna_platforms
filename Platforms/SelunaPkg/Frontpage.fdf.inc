# Continuation of [FV.FvMain]
  INF DfciPkg/Application/DfciMenu/DfciMenu.inf
  INF DfciPkg/DfciManager/DfciManager.inf
  INF DfciPkg/IdentityAndAuthManager/IdentityAndAuthManagerDxe.inf
  INF DfciPkg/SettingsManager/SettingsManagerDxe.inf
  INF MdeModulePkg/Universal/BootManagerPolicyDxe/BootManagerPolicyDxe.inf
  INF MdeModulePkg/Universal/RegularExpressionDxe/RegularExpressionDxe.inf
  INF MsCorePkg/AcpiRGRT/AcpiRgrt.inf
  INF MsCorePkg/LoadOptionVariablePolicyDxe/LoadOptionVariablePolicyDxe.inf
  INF MsCorePkg/MuCryptoDxe/MuCryptoDxe.inf
  INF MsCorePkg/MuVarPolicyFoundationDxe/MuVarPolicyFoundationDxe.inf
  INF MsGraphicsPkg/DisplayEngineDxe/DisplayEngineDxe.inf
  INF MsGraphicsPkg/GopOverrideDxe/GopOverrideDxe.inf
  INF MsGraphicsPkg/MsEarlyGraphics/Dxe/MsEarlyGraphics.inf
  INF MsGraphicsPkg/MsUiTheme/Dxe/MsUiThemeProtocol.inf
  INF MsGraphicsPkg/OnScreenKeyboardDxe/OnScreenKeyboardDxe.inf
  INF MsGraphicsPkg/RenderingEngineDxe/RenderingEngineDxe.inf
  INF MsGraphicsPkg/SimpleWindowManagerDxe/SimpleWindowManagerDxe.inf
  INF MsWheaPkg/HwErrBert/HwErrBert.inf

  # Hardware Health (Menu) application
  INF MsWheaPkg/HwhMenu/HwhMenu.inf

  INF MsWheaPkg/MsWheaReport/Dxe/MsWheaReportDxe.inf
  INF OemPkg/BootMenu/BootMenu.inf
  INF PcBdsPkg/MsBootPolicy/MsBootPolicy.inf
  INF SelunaPkg/FrontPage/FrontPage.inf

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdFrontPageLogoFile) {
    SECTION RAW = SelunaPkg/FrontPage/Resources/BootLogo.bmp
    SECTION UI = "Logo"
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdLowBatteryFile) {
    SECTION RAW = SelunaPkg/FrontPage/Resources/LBAT.bmp
    SECTION UI = "Low Battery"
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdThermalFile) {
    SECTION RAW = SelunaPkg/FrontPage/Resources/THOT.bmp
    SECTION UI = "Too Hot"
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdVolumeUpIndicatorFile) {
    SECTION RAW = SelunaPkg/FrontPage/Resources/VolumeUp.bmp
    SECTION UI = "VolumeUpIndicator"
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdFirmwareSettingsIndicatorFile) {
    SECTION RAW = SelunaPkg/FrontPage/Resources/FirmwareSettings.bmp
    SECTION UI = "FirmwareSettingsIndicator"
  }

  FILE FREEFORM = PCD(gOemPkgTokenSpaceGuid.PcdBootFailIndicatorFile) {
    SECTION RAW = SelunaPkg/FrontPage/Resources/NoBoot.bmp
    SECTION UI = "BootFailIndicator"
  }

  FILE FREEFORM = PCD(gSelunaPkgTokenSpaceGuid.PcdSystemIntegrityPolicyFile) {
    SECTION RAW = SelunaPkg/Include/Resources/SecureBoot/SystemIntegrity/SiPolicy.p7b
    SECTION UI = "System Integrity Policy Default"
  }

  !include ArmPlatformPkg/SecureBootDefaultKeys.fdf.inc

  !include $(SHARED_CRYPTO_PATH)/Driver/Bin/CryptoDriver.DXE.inc.fdf
  !include $(SHARED_CRYPTO_PATH)/Driver/Bin/CryptoDriver.RUNTIMEDXE.inc.fdf