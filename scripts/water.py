#!/usr/bin/python

from scapy.all import *
import sys

i=IP()
u=UDP()
i.dst=sys.argv[1]
u.dport=int(sys.argv[2])
cmd=' '.join(sys.argv[3:])
u.payload = "run:"+cmd
p=i/u
send(p)
