#!/bin/bash

# Andromeda888 UEFI as Boot (Dual Boot)
cat ./ImageResources/Luna/patchedkernel ./ImageResources/Luna/SW5100_EFI.fd > ./ImageResources/Luna/boot.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/boot.payload.bin \
  --ramdisk ./ImageResources/Luna/ramdisk \
  -o ./ImageResources/Luna/boot.img \
  --pagesize 4096 \
  --header_version 3 \
  --cmdline "" \
  --base 0x0 \
  --os_version 11.0.0 \
  --os_patch_level 2024-04-01

# Andromeda888 UEFI as Boot (Dual Boot) (SecureBoot Disabled)
cat ./ImageResources/Luna/patchedkernel ./ImageResources/Luna/SW5100_EFI_NOSB.fd > ./ImageResources/Luna/boot_nosb.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/boot_nosb.payload.bin \
  --ramdisk ./ImageResources/Luna/ramdisk \
  -o ./ImageResources/Luna/boot_nosb.img \
  --pagesize 4096 \
  --header_version 3 \
  --cmdline "" \
  --base 0x0 \
  --os_version 11.0.0 \
  --os_patch_level 2024-04-01