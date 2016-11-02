[![Build Status](https://travis-ci.org/networkshark/qtshark.svg?branch=master)](https://travis-ci.org/networkshark/qtshark)

# qtshark

clone recursively to include submodules
- git clone --recursive https://github.com/networkshark/qtshark.git



to build
--------------------------
install qt-skd 

- sudo apt-get install qt-sdk qtcreator


build json11

- cd json11
- mkdir build
- cmake ..
- make


finally, build qtshark

- mkdir build
- cd build
- qmake ../QtShark/QtShark.pro -r
- make



Optional
-----------------------
build googletest:

- cd googletest
- mkdir build
- cd build
- cmake ..
- make


build and run tests

- cd test
- mkdir build
- cd build
- cmake ..
- make
- ./runtests
