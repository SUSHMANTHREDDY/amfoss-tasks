import requests
import os

organisation="amfoss"
i=1
repos=[]
while True:
	
	req=requests.get('https://api.github.com/users/'+organisation+'/repos?page='+str(i))
	if not req.json():
		break	
	i+=1
	for repo in req.json():
		repos.append(repo["name"])
	
		
		
  	
for i in range(0,len(repos)):
	os.system("perceval git --json-line https://github.com/"+organisation+"/"+repos[i]+">> commits.json")
