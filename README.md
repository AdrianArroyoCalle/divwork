DivWork [![Build Status](https://travis-ci.org/AdrianArroyoCalle/divwork.png)] (https://travis-ci.org/AdrianArroyoCalle/divwork)
=======

DivWork is a utilitary suite free for personal use and little bussiness. DivWork is built with libraries and a GUI (always in wxWidgets, but other libs can also be supported like FLTK or BeAPI).

DivWork comes with these programs:

* Divel Calendar
* Divel Calendar Mobile
* Agenda Correos
* DivIRC
* DivXMPP
* DivZip
* DivTar
* DivImage
* DivDraw
* DivVerifyHTTP
* DivVNC
* DivGPG
* DivTasks
* Divel Write
* Divel Quiz

Compiling
=========

To compile DivWork run the following commands:

``` sh
git clone https://github.com/AdrianArroyoCalle/divwork.git
cd divwork
mkdir build && cd build
cmake ..
make
```

To enable and disable DivWork components try hacking the CMakeLists.txt or via CMake GUI

Installing
========

To install your custom DivWork build you need to run:

``` sh
make install
```

or 

``` sh
cpack -G <package>
```

where package can be DEB, RPM, TGZ, ZIP or NSIS.
