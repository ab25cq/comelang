#!/bin/sh

export EDITOR=vin
git config --global user.email ab25cq@icloud.com
git config --global user.name ab25cq

sh remove_all_build.sh

git remote add origin git@github.com:ab25cq/comelang.git
git add .
git commit 
git branch -M master
git push --force master master


