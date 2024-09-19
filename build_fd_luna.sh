#!/bin/bash

# Luna FD
python3 ./Platforms/LunaPkg/PlatformBuild.py TARGET=RELEASE
mv ./Build/LunaPkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Luna/SW5100_EFI.fd

# Luna FD (SecureBoot Disabled)
python3 ./Platforms/LunaPkg/PlatformBuildNoSb.py TARGET=RELEASE
mv ./Build/LunaPkg/RELEASE_CLANGPDB/FV/SW5100_EFI.fd ./ImageResources/Luna/SW5100_EFI_NOSB.fd