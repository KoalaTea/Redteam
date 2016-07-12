for device in `cat team-list.txt`; do
	echo $device
	./ciscopiv.exp $device &
done
for device in `cat device-list.txt`; do
	echo hi;	
done
