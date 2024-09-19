#!/bin/bash

# Andromeda888 UEFI as Boot
cat ./BootShim/BootShim.Luna.bin ./ImageResources/Luna/SW5100_EFI.fd > ./ImageResources/Luna/uefi.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/uefi.payload.bin \
  --ramdisk ./ImageResources/Luna/ramdisk \
  -o ./ImageResources/Luna/uefi.img \
  --pagesize 4096 \
  --header_version 3 \
  --cmdline "" \
  --base 0x0 \
  --os_version 11.0.0 \
  --os_patch_level 2023-04-01

# Andromeda888 UEFI as Boot (SecureBoot Disabled)
cat ./BootShim/BootShim.Luna.bin ./ImageResources/Luna/SW5100_EFI_NOSB.fd > ./ImageResources/Luna/uefi_nosb.payload.bin
python3 ./ImageResources/mkbootimg.py \
  --kernel ./ImageResources/Luna/uefi_nosb.payload.bin \
  --ramdisk ./ImageResources/Luna/ramdisk \
  -o ./ImageResources/Luna/uefi_nosb.img \
  --pagesize 4096 \
  --header_version 3 \
  --cmdline "" \
  --base 0x0 \
  --os_version 11.0.0 \
  --os_patch_level 2024-04-01