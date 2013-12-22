#RPM Build of DivWork
#First download a tar.gz of the source code
#Second, copy the file to SPECS dir
#Third, run rpmbuild -ba <SPEC file> or rpmbuild -bb <SPEC file>

Summary: DivWork is a suite of utilitary work
Name: divwork
Version: 0.1.1
Release: 1
License: GPLv2
Group: Applications/Internet
Source0: http://github.com/AdrianArroyoCalle/divwork/archive/master.tar.gz
BuildRequires: cmake gcc-c++ libstdc++-devel wxWidgets-devel libwx_gtk2u_core-2_8-0-wxcontainer
URL: http://github.com/AdrianArroyoCalle/divwork
%description
This package is a collection of some programs that might be util
%prep
%setup -qn divwork-master
%build
cmake . -DBUILD_DIV_VIDEO=OFF
make
%install
make DESTDIR=%{buildroot} install

%files
/usr/local/bin
/usr/local/share/applications
/usr/local/share/icons/hicolor/64x64/apps
%changelog
* Wed Oct 16 2013 Adrian Arroyo Calle <adrian.arroyocalle@gmail.com>
- First SPEC file

