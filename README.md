### Screencast

![dQuery](https://media.giphy.com/media/3dkVwbaSCdSSPvPPDs/giphy.gif)
<br>

### Description
dQuery is a terminal based DNS lookup tool. Supplying a hostname to it resolves and displays all the IP addresses associated with
that hostname. The default hostname is 'localhost' meaning a loopback address of 127.0.0.1 will be displayed if user fails to supply
a hostname. Relevant error message is displayed to the user if dQuery fails to resolve the 
IP address from the given hostname.  
<br>  

### Usage
```
mkdir dnslookup
git clone https://github.com/potatoCoder97/dQuery.git .
cd src
make
./dquery netflix.com
```
