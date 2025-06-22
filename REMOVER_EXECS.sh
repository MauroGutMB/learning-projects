#!/bin/bash
find . -type f -name "-o" -exec rm -f {} \;
find . -type f ! -name "*.*" -perm -u=x -exec rm -f {} \;

