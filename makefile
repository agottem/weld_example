# Include some default settings
config_file := ./example_config.mk


# Include the Weld build system
include ../weld/weld.mk


# Play around with the command line. From the directory containing this makefile, do the following:

# alias weld="make -C `pwd` --quiet show_progress=1 -j"

### rebuild
# weld clean build

### build just the runlucas binary
# weld runlucas

### build just the fib library
# weld fib

### build just the runfib/source/main.c source file
# weld runfib/main.o

### build release mode
# weld config=release
