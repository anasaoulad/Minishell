#include<stdio.h>
#include<string.h>
#include<signal.h>
#include<unistd.h> 

/*-----------------------fonction de lecture audio -----------*/
void lire (int sig)
{	printf("\n *****************************");
	printf("\n ************Alarme !*********");
	printf("\n *****************************");
	execlp("mplayer","mplayer", "/home/anas/Bureau/vocal.m4a",NULL);
	for(;;);
}
/*----------------------------main-----------------------------*/
main(int argc, char* argv[])
{
int sec;
sec=atoi(argv[1]);
// printf("dans combien des seconde voulez vous avoir une alarme");
signal(SIGALRM, lire);
printf("L'alarme sonnera dans %d\n",sec);
alarm(sec);
pause();
}
/*---------------------------fin------------------------------*/
