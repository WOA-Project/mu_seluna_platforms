#!/bin/bash

# Selene BootShim
cd BootShim
make UEFI_BASE=0x5FC41000 UEFI_SIZE=0x002BF000
mv ./BootShim.bin ./BootShim.Selene.bin
mv ./BootShim.elf ./BootShim.Selene.elf
cd ..