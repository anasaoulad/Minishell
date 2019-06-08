/*-----------------declaration des bibliotheques---------------*/
#include<stdio.h>
#include<string.h>
#include<signal.h>
#include<unistd.h>
#include<wait.h>
#include<stdlib.h>
/*-----------------------------main----------------------------*/
main () 
{

	execlp("date","date","+%H:%M",NULL);
	
}
/*-----------------------------fin-----------------------------*/
