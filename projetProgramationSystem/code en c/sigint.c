#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h> 
#include<sys/types.h>

void tache(int sign)
{
  if (sign == SIGINT)
printf("\n\n**********Merci d'avoir utiliser notre shell Graphique !*********\n");
sleep(2);
exit(0);
}

int main(void)
{
  if (signal(SIGINT, tache) == SIG_ERR)
  printf("\n une erreur est survenu \n");
for(;;);  
}
