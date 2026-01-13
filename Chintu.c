#include<stdio.h>
#include<string.h>
#include<dos.h>

void main(int argc, char * argv[])
{
	char * str;
	if(strcmp("Screen",argv[1])==0)
	{
	  system("cls");
      printf("\n\n Yes Sir ! Ho Gaya!\n\n");	
	}
	else
	{
		if(strcmp("Salman",argv[1])==0)
		{
	  
      		printf("\n\n Ek Bhar jo maine commitment kar di, Phir main 4 logo ki bhi nahi sunata! \n\n");	
		}
		else
		{
			printf("\n \n Type to achese karo 4 student dekh ke kya bolenge! \n \n");
		}
		
	}
	

}
