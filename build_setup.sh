#!/bin/bash

sudo apt update
sudo apt install -y uuid-dev clang llvm gcc-aarch64-linux-gnu lld

#cargo install --force cargo-make
#cargo add cargo-tarpaulin

pip install --upgrade -r ./pip-requirements.txt

python3 ./Platforms/SelenePkg/PlatformBuild.py --setup -t RELEASE
python3 ./Platforms/SelenePkg/PlatformBuild.py --update -t RELEASE
