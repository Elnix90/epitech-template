#!/bin/bash

find tests -name "*_test.c" -type f -exec printf "\t{} \\ \n" \;
