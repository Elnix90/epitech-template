#!/bin/bash

find src -name "*.c"  -type f -exec clang-format -i {} \;
