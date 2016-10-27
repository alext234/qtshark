# qtshark


to build:
--------------------------
install qt-skd 

- sudo apt-get install qt-sdk qtcreator


build json11

- build json11
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
- cmake . 
- make
- ./runtests
