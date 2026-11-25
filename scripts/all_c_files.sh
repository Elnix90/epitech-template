#!/bin/bash

find src -name "*.c" -not -path tests -not -name main.c  -type f  -exec printf "\t{} \\ \n" \;