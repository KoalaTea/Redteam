:g
netsh advfirewall set allprofiles state off
netsh advfirewall firewall delete rule name=all
goto g
