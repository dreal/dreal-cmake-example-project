![CI](https://github.com/dreal/dreal-cmake-example-project/workflows/CI/badge.svg)

An example cmake project to show you how to use the system-installed
dReal as a library in a Cmake project.

Setup
=====

You need to install [dReal4](https://github.com/dreal/dreal4) in your
system. We also rely on
[pkg-config](https://www.freedesktop.org/wiki/Software/pkg-config).

macOS 11.0 / 10.15 / 10.14
--------------------------

We use [homebrew](https://brew.sh).

```bash
brew install pkg-config
brew install dreal/dreal/dreal
```


Ubuntu 20.04 / 18.04
--------------------

```bash
curl -s https://raw.githubusercontent.com/dreal/dreal4/master/setup/ubuntu/$(lsb_release -r -s)/install.sh | sudo bash
```


CMake Build
===========

Run the following to build and run the example project.

```bash
git clone https://github.com/dreal/dreal-cmake-example-project.git
cd dreal-cmake-example-project
mkdir build
cd build
cmake ../
make           # Build
./check_sat    # Execute
```
