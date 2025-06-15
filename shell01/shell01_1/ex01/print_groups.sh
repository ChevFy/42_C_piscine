#!/bin/bash
id -nG $FT_USER | tr -d '\n' | tr -s ' ' ',' 
