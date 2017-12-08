#!/bin/sh

#libtoolize
#aclocal
#automake --add-missing --copy
#autoconf
autoreconf -if
./configure ${@}
