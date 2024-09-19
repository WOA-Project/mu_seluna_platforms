#!/bin/bash

# Andromeda855 FD
python3 ./Platforms/SelenePkg/PlatformBuild.py TARGET=RELEASE
mv ./Build/SelenePkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Selene/SW5100_EFI.fd

# Andromeda855 FD (SecureBoot Disabled)
python3 ./Platforms/SelenePkg/PlatformBuildNoSb.py TARGET=RELEASE
mv ./Build/SelenePkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Selene/SW5100_EFI_NOSB.fd