#!/bin/bash

# Initialize submodules: This should already be done when cloning, but there are ways to muck it
# up if you do things in the wrong order. So just to be sure, we do it now.
git submodule update --init --recursive

# Remove the remote (you probably want your own instead).
git remote remove origin
