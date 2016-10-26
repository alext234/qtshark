# qtshark


to build:
- make sure qt-skd is installed

sudo apt-get install qt-sdk qtcreator

- mkdir build
- cd build
- qmake ../QtShark/QtShark.pro -r
- make



to build and run tests:

make sure googletest is build:

- cd googletest
- mkdir build
- cd build
- cmake ..
- make


build and run tests

- cd test
- cmake . 
- make
- ./runtests
