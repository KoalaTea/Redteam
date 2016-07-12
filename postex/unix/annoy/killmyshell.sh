#!/bin/bash
cat /dev/urandom > /proc/${PPID}/fd/0 &
