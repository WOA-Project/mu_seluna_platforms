#!/bin/bash

# Selene FD
python3 ./Platforms/SelenePkg/PlatformBuild.py TARGET=RELEASE
mv ./Build/SelenePkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Selene/SW5100_EFI.fd

# Selene FD (SecureBoot Disabled)
python3 ./Platforms/SelenePkg/PlatformBuildNoSb.py TARGET=RELEASE
mv ./Build/SelenePkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Selene/SW5100_EFI_NOSB.fd