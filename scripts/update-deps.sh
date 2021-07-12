#!/bin/sh

git -C apices checkout master; git -C apices pull
git -C guinda checkout master; git -C guinda pull

git submodule init
git submodule update --recursive

cp apices/examples/webgain/ui/stub-ui.js src/ui/
cp guinda/guinda.js src/ui/
