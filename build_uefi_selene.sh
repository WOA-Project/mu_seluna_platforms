#!/bin/bash

# Selene UEFI as Boot
cat ./ImageResources/bootstrap.bin ./BootShim/BootShim.Selene.bin ./ImageResources/Selene/SW5100_EFI.fd > ./ImageResources/Selene/uefi.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Selene/uefi.payload.bin \
  -o ./ImageResources/Selene/uefi.img \
  --header_version 4

# Selene UEFI as Boot (SecureBoot Disabled)
cat ./ImageResources/bootstrap.bin ./BootShim/BootShim.Selene.bin ./ImageResources/Selene/SW5100_EFI_NOSB.fd > ./ImageResources/Selene/uefi_nosb.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Selene/uefi_nosb.payload.bin \
  -o ./ImageResources/Selene/uefi_nosb.img \
  --header_version 4