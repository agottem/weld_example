# Setup our configuration for this build, assuming a unixy machine
source_path := .
build_path  := ./build
arch        := amd64
mode        ?= debug
shell_name  := sh
platform    := unix
unix_flavor := linux
c_toolchain := gcc
