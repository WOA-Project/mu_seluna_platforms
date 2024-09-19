#!/bin/bash

# Andromeda888 FD
python3 ./Platforms/LunaPkg/PlatformBuild.py TARGET=RELEASE
mv ./Build/LunaPkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Luna/SW5100_EFI.fd

# Andromeda888 FD (SecureBoot Disabled)
python3 ./Platforms/LunaPkg/PlatformBuildNoSb.py TARGET=RELEASE
mv ./Build/LunaPkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Luna/SW5100_EFI_NOSB.fd