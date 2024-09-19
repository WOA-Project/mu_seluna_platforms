#!/bin/bash

# Luna UEFI as Boot
cat ./ImageResources/bootstrap.bin ./BootShim/BootShim.Luna.bin ./ImageResources/Luna/SW5100_EFI.fd > ./ImageResources/Luna/uefi.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/uefi.payload.bin \
  -o ./ImageResources/Luna/uefi.img \
  --header_version 4

# Luna UEFI as Boot (SecureBoot Disabled)
cat ./ImageResources/bootstrap.bin ./BootShim/BootShim.Luna.bin ./ImageResources/Luna/SW5100_EFI_NOSB.fd > ./ImageResources/Luna/uefi_nosb.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/uefi_nosb.payload.bin \
  -o ./ImageResources/Luna/uefi_nosb.img \
  --header_version 4