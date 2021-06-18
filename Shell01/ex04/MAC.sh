#!/bin/sh
ifconfig | grep -Eo '[0-9a-f:]{17}'
