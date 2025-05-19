# [Project Mu](https://microsoft.github.io/mu/) UEFI Implementation for Seluna Platforms

## For users

You can download the latest UEFI build by clicking [here](https://github.com/WOA-Project/mu_seluna_platforms/releases).

[![Build Status (Visual Studio Team Services)](https://gus33000.visualstudio.com/mu_seluna_platforms/_apis/build/status/mu_seluna_platforms%20CI?branchName=main)](https://gus33000.visualstudio.com/mu_seluna_platforms/_build/latest?definitionId=1&branchName=main)

## What's this?

This package demonstrates an AArch64 UEFI implementation for hacked Selene and Luna devices. Currently it is able to boot Windows 10 ARM64 as well as Windows 11 ARM64. Please be aware that Selene devices have limited support.

## Support Status

Applicable to all supported targets unless noted.

- Low-speed I/O: I2C, SPI, GPIO, SPMI and Pinmux (TLMM).
- Power Management: PMIC and Resource Power Manager (RPM).
- High-speed I/O for firmware and HLOS: UFS 3.1
- Peripherals: Side-band buttons (TLMM GPIO and PMIC GPIO)
- Display FrameBuffer

## What can you do?

Please see https://github.com/WOA-Project/PixelWatch-Guides for some tutorials.

## Compatibility

| Device Name   | Device Generation/Year | Codenames/Internal Names | UEFI Port Status | Windows Bootability Status |
|---------------|------------------------|--------------------------|------------------|----------------------------|
| Selene        | 2024                   | Selene                   | ✅               | ✅                        |
| Luna          | 2024                   | Luna                     | ✅               | ✅                        |

It is not going to work on any other device even if they use the same SoC as is. You may risk breaking your other device if you even try it. It is only for Seluna devices, and there is no interest in adding support for other devices in this repository.

## Build

### Minimum System Requirements

- At least 2 cores x86_64 processor running at 2Ghz or higher implementing the X86 ISA with 64 bit AMD extensions (AMD64) (Currently, building on any other ISA is not supported. In other words, do. not. build. this. on. a. phone. running. android. please.)
- SSD
- A linux environment capable of running below tool stack:
  - Bash
  - Python 3.10 or higher (python3.10, python3.10-venv, python3.10-pip)
  - mono-devel
  - git-core, git
  - build-essential
  - clangpdb (or higher), llvm, gcc-aarch64-linux-gnu
  - cargo
- Exported CLANGPDB_BIN environment variable pointing to LLVM 10 binary folder
- Exported CLANGPDB_AARCH64_PREFIX variable equalling to aarch64-linux-gnu-

### Build Instructions

- Clone this repository to a reasonable location on your disk (There is absolutely no need to initialize submodules, stuart will do it for you later on)
- Run the following commands in order, with 0 typo, and without copy pasting all of them blindly all at once:

```
# Build UEFI
pip install --upgrade -r pip-requirements.txt
./build_uefi_selene.sh
./build_uefi_luna.sh

# Generate ELF image
./build_bootshim.sh
./build_boot_images.sh
```

## Acknowledgements

- [EFIDroid Project](http://efidroid.org)
- Andrei Warkentin and his [RaspberryPiPkg](https://github.com/andreiw/RaspberryPiPkg)
- Sarah Purohit
- [Googulator](https://github.com/Googulator/)
- [Ben (Bingxing) Wang](https://github.com/imbushuo/)
- Samuel Tulach and his [Rainbow Patcher](https://github.com/SamuelTulach/rainbow)

## License

All code is licensed under BSD 2-Clause.

## Testimonials

![image](https://github.com/user-attachments/assets/5c981b22-768d-45cb-aa27-2bf2c80f1606)

![image](https://github.com/user-attachments/assets/939e1468-f108-4e4a-876e-b901392973b5)

![image](https://github.com/user-attachments/assets/64e87b20-a67a-476f-836b-b568131e2e9a)

_People really thought we wouldnt be serious about this like with Surface Duo and Lumia 950s heh?_


