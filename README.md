# ecc
An eliptic curve crypto system, for academic purporses.  
__Warning: Do not use this in critical applications!__

# Requirements
GMP is required in order to build this program. It can be downloaded at https://gmplib.org/ or installed through your favorite package manager.

# Build
1. run `./configure` in root directory to initialize the Makefiles with cmake.
2. build out of source with `make`. Binaries will be stored to `bin/`.
3. clean build and cmake files with `make distclean`

Do not delete Makefile in the root directory!
