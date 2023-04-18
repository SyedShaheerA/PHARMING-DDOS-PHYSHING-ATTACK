#include <stdio.h>
#include <stdlib.h>


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
	printf("7. TCP COMMAND")
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
		system("cd /var; mkdir www; cd www; mkdir html; cd html; mkdir yahoo; cd yahoo; ls; wget http://yahoo.com ;dir");
		
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
		system("cd /var; mkdir www; cd www; mkdir html; cd html; mkdir youtube; cd youtube; ls; wget http://youtube.com ;dir");
	}
	else if(option ==7)
	{
		system("tshark -i eth0");

	}
	printf("hello world");
}
