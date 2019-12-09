tar -xvf CUnit-2.1-3.tar.bz2
cd CUnit-2.1-3
libtoolize --force
aclocal
autoheader
automake --force-missing --add-missing
autoconf
chmod u+x configure
./configure --prefix `readlink -f ../CUnit`
make
make install
cd ..
rm -rf CUnit-2.1-3