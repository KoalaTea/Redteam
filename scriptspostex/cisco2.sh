for device in `cat device-list.txt`; do
	echo $device
	temp=`echo $device | awk -F . '{print $3}'`
	sed -i "s/teamX/team${temp}/" /srv/tftp/deploy2.tcl
	./cisco.exp $device
	sed -i "s/team${temp}/teamX/" /srv/tftp/deploy2.tcl
done
for device in `cat device-list.txt`; do
	echo hi;	
done
