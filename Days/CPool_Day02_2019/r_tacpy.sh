#!/bin/bash
cut -d ":" -f1 | sed -n 2~2p | rev | sort -r | sed -n  "$MY_LINE1","$MY_LINE2"p | awk 1 ORS=", " | awk 'sub("..$",".")'
