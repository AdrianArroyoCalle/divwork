# This is an example PKGBUILD file. Use this as a start to creating your own,
# and remove these comments. For more information, see 'man PKGBUILD'.
# NOTE: Please fill out the license field for your package! If it is unknown,
# then please put 'unknown'.

#Create tar.gz file with tar -zcvf divel-calendar.tar.gz .

# Maintainer: Adrian Arroyo Calle <adrian.arroyocalle@gmail.com>
pkgname=divwork
pkgver=1.0.0
pkgrel=1
pkgdesc="Suite of utilitary software"
arch=('i686' 'x86_64')
url="http://sites.google.com/site/divelmedia"
license=('GPL')
groups=()
depends=('wxgtk')
makedepends=('wxgtk' 'cmake')
optdepends=()
provides=()
conflicts=()
replaces=()
backup=()
options=()
install=
changelog=
source=("$pkgname"::'git://github.com/AdrianArroyoCalle/divwork')
noextract=()
md5sums=('SKIP') #generate with 'makepkg -g'

build() {
  cd "$pkgname"
  cmake . -DCMAKE_INSTALL_PREFIX=/usr
  make
}

package() {
 cd "$pkgname"
 make DESTDIR=$pkgdir install
}