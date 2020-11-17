#!/usr/bin/bash
# prepare_my_repo.sh
blih -u quentin.treheux@epitech.eu repository create "$1"
blih -u quentin.treheux@epitech.eu repository setacl "$1" ramassage-tek r
blih -u quentin.treheux@epitech.eu repository getacl "$1"
