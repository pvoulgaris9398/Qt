#!/bin/bash
echo "Cleaning artifacts..."
rm -vrf debug
rm -vrf release
rm -vf .qmake.stash
rm -vf Makefile*