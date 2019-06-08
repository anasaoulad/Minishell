#include<stdio.h>
#include<string.h>
#include<signal.h>
#include<unistd.h> 
int sec;
/*-----------------------fonction de lecture audio -----------*/
void lire (int sig)
{	printf("\n *****************************");
	printf("\n ************Alarme !*********");
	printf("\n *****************************");
	execlp("mplayer","mplayer", "/home/anas/Bureau/vocal.m4a",NULL);
	for(;;);
}
/*----------------------------main-----------------------------*/
main()
{
printf("dans combien des seconde voulez vous avoir une alarme");
scanf("%d",&sec);
signal(SIGALRM, lire);
printf("L'alarme sonnera dans %d\n",sec);
alarm(sec);
pause();
}
/*---------------------------fin------------------------------*/
