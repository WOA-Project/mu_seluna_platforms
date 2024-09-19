#!/bin/bash

# Selene UEFI as Boot (Dual Boot)
cat ./ImageResources/bootstrap.bin ./ImageResources/Selene/patchedkernel ./ImageResources/Selene/SW5100_EFI.fd > ./ImageResources/Selene/boot.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Selene/boot.payload.bin \
  -o ./ImageResources/Selene/boot.img \
  --header_version 4

# Selene UEFI as Boot (Dual Boot) (SecureBoot Disabled)
cat ./ImageResources/bootstrap.bin ./ImageResources/Selene/patchedkernel ./ImageResources/Selene/SW5100_EFI_NOSB.fd > ./ImageResources/Selene/boot_nosb.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Selene/boot_nosb.payload.bin \
  -o ./ImageResources/Selene/boot_nosb.img \
  --header_version 4