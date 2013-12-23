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
%if 0%{?suse_version}
BuildRequires: cmake gcc-c++ libstdc++-devel wxWidgets-devel libwx_gtk2u_core-2_8-0-wxcontainer update-desktop-files
Requires: xdg-utils libwx_gtk2u_core-2_8-0-wxcontainer
%endif
%if 0%{?fedora_version}
BuildRequires: wxGTK-devel cmake
%endif
%if 0%{?rhel_version}
BuildRequires: wxGTK-devel cmake
%endif
%if 0%{?centos_version}
BuildRequires: wxGTK-devel cmake
%endif
URL: http://github.com/AdrianArroyoCalle/divwork
%description
This package is a collection of some programs that might be util
%prep
%setup -qn divwork-master
%build
cmake . -DBUILD_DIV_VIDEO=OFF -DCMAKE_INSTALL_PREFIX=/usr
make
%install
make DESTDIR=%{buildroot} install
%if 0%{?suse_version}
%suse_update_desktop_file -r div-video Utility
%suse_update_desktop_file -r div-verify-ftp Utility
%suse_update_desktop_file -r div-verify-http Utility
%suse_update_desktop_file -r divel-write Utility
%endif
%files
/usr/local/bin
/usr/local/share/applications
/usr/local/share/icons/hicolor/64x64/apps
%changelog
* Wed Oct 16 2013 Adrian Arroyo Calle <adrian.arroyocalle@gmail.com>
- First SPEC file

