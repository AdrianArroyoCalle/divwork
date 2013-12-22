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
%if 0%{?suse version}
BuildRequires: cmake gcc-c++ libstdc++-devel wxWidgets-devel libwx_gtk2u_core-2_8-0-wxcontainer
%endif
URL: http://github.com/AdrianArroyoCalle/divwork
%description
This package is a collection of some programs that might be util
%prep
%setup -qn divwork-master
%build
cmake .
make
%install
make DESTDIR=%{buildroot} install

%files
/usr/local/bin/AgendaCorreos
/usr/local/bin/DivVerifyFTP
/usr/local/bin/DivVerifyHTTP
/usr/local/bin/DivelWrite
/usr/local/bin/Divel_Calendar
/usr/local/share/applications/agenda-correos.desktop
/usr/local/share/applications/div-verify-ftp.desktop
/usr/local/share/applications/div-verify-http.desktop
/usr/local/share/applications/divel-calendar.desktop
/usr/local/share/applications/divel-write.desktop
/usr/local/share/icons/hicolor/64x64/apps/DivVerifyFTP.png
/usr/local/share/icons/hicolor/64x64/apps/DivVerifyHTTP.png
/usr/local/share/icons/hicolor/64x64/apps/divel-calendar.png
%changelog
* Wed Oct 16 2013 Adrian Arroyo Calle <adrian.arroyocalle@gmail.com>
- First SPEC file

