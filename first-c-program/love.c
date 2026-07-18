#include<stdio.h>
#include<unistd.h>

int main(){
  char spinner[] = {'|','/','-','\\'};
    char ans;
printf("DO YOU LOVE ME?\n");

printf("(Y/N)\n");

scanf("%c",&ans);
  
if ( ans == 'Y' || ans == 'y' )
{
    printf("O really baby do you love me\n ");

    fflush(stdout);
    sleep(1);

    printf("love you to baby \n");


}

else
{
printf("Fuck you witch\n");

fflush(stdout);
sleep(1);

printf("YOU GONNA DIE BABY  ]:)\n");

fflush(stdout);

sleep(1);

printf("ALLAH HU AKBAR ");

for (int i =10; i >=1; i--)
{
    printf("%d💣\n", i);

    fflush(stdout);

sleep(1);





}

printf("BOOOOOOOOOOM💥\n");
sleep(1);


printf("Cheaking if she is aline\n");

for ( int i = 0; i < 20; i++)
{
    printf("\rSearching %c",  spinner[i % 4]);
    fflush(stdout);
    sleep(1);
    usleep(200000);
}

printf("ALL CLEAR\n");


}



return 0;

}