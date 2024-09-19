#!/bin/bash

# Luna UEFI as Boot (Dual Boot)
cat ./ImageResources/bootstrap.bin ./ImageResources/Luna/patchedkernel ./ImageResources/Luna/SW5100_EFI.fd > ./ImageResources/Luna/boot.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/boot.payload.bin \
  -o ./ImageResources/Luna/boot.img \
  --header_version 4

# Luna UEFI as Boot (Dual Boot) (SecureBoot Disabled)
cat ./ImageResources/bootstrap.bin ./ImageResources/Luna/patchedkernel ./ImageResources/Luna/SW5100_EFI_NOSB.fd > ./ImageResources/Luna/boot_nosb.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/boot_nosb.payload.bin \
  -o ./ImageResources/Luna/boot_nosb.img \
  --header_version 4