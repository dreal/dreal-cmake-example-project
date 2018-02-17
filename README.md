[![Build Status](https://travis-ci.org/dreal/dreal-cmake-example-project.svg?branch=master)](https://travis-ci.org/dreal/dreal-cmake-example-project)

An example cmake project to show you how to use the system-installed
dReal as a library in a Cmake project.

Setup
=====

You need to install [dReal4](https://github.com/dreal/dreal4) in your
system. We also rely on
[pkg-config](https://www.freedesktop.org/wiki/Software/pkg-config).

macOS 10.12/10.13
-----

We use [homebrew](https://brew.sh).

```bash
brew install dreal/dreal/dreal
```


Ubuntu 16.04
------------

```bash
sudo apt install -y software-properties-common  # for add-apt-repository
sudo add-apt-repository ppa:dreal/dreal -y
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y
sudo apt update
sudo apt install bison coinor-libclp-dev flex pkg-config libibex-dev libnlopt-dev
wget https://dl.bintray.com/dreal/dreal/dreal_4.18.02.3_16.04_amd64.deb
sudo dpkg -i dreal_4.18.02.3_16.04_amd64.deb
```

Ubuntu 14.04
------------

```bash
sudo apt install -y software-properties-common  # for add-apt-repository
sudo add-apt-repository ppa:dreal/dreal -y
sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y
sudo apt update
sudo apt install bison coinor-libclp-dev flex pkg-config libibex-dev libnlopt-dev
wget https://dl.bintray.com/dreal/dreal/dreal_4.18.02.3_14.04_amd64.deb
sudo dpkg -i dreal_4.18.02.3_14.04_amd64.deb
```

CMake Build
===========

Following the above setup, please run the following to build and run
the example project.

```bash
git clone https://github.com/dreal/dreal-cmake-example-project.git
cd dreal-cmake-example-project
mkdir build
cd build
cmake ../
make           # Build
./check_sat    # Execute
```
