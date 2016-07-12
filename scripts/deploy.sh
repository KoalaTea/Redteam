#!/bin/bash

if [ -d ~/.ssh ]; then
	tar -cf backupssh.tar ~/.ssh/

	if [ -f ~/.ssh/id_rsa ]; then
		rm -rf ~/.ssh/id_rsa
	fi
	cp ../files/.ssh/id_rsa ~/.ssh/id_rsa

	if [ -f ~/.ssh/id_rsa.pub ]; then
		rm -rf ~/.ssh/id_rsa.pub
	fi
	cp ../files/.ssh/id_rsa.pub ~/.ssh/id_rsa.pub
else
	mkdir ~/.ssh
	cp ../files/.ssh/id_rsa ~/.ssh/id_rsa
	cp ../files/.ssh/id_rsa.pub ~/.ssh/id_rsa.pub   
fi
if [ -d /srv/tftp/ ]; then
	cp ../postex/mal/net/cisco/*.tcl /srv/tftp/
else
	mkdir /srv/tftp
	cp ../postex/mal/net/cisco/*.tcl /srv/tftp/
fi
service postgresql start
msfdb init
