#!/usr/bin/bash
# push_that.sh

git add --all
git commit -m "$1"
git push
