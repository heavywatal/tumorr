# tumorr

`tumorr` is R interface of [tumopp](https://github.com/heavywatal/tumopp),
a tumor growth simulator in C++.

## Installation

1.  Install [tumopp](https://github.com/heavywatal/tumopp) with Homebrew/Linuxbrew or CMake.

2.  Install [devtools](https://github.com/hadley/devtools) in R:
    `install.packages('devtools')`

3.  Execute `devtools::install_github('heavywatal/tumorr')` in R.
    You may need `Sys.setenv(CMAKE_PREFIX_PATH='/prefix/to/tumopp')` to tell R the location of tumopp installation.
