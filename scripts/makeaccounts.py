#!/usr/bin/python3

import requests

url="https://10.10.8.30/iredadmin"
parameters={"iRedAdmin":"efdbfcd9c1cdcdf8d3e6ea9175296812bba420ac"}
data = requests.get(url + "/create/user/nukd.net", verify=False, data=parameters)
print(data.text)
