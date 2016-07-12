for device in `cat device-list.txt`; do
	echo $device
	./cisco.exp $device&
done
for device in `cat device-list.txt`; do
	echo hi;	
done
