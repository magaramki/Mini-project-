#include<stdio.h>
#include<conio.h>
#include <string.h>
struct cricket
{
char name [100];
char team_name[100];
int batting_average;
};
void main()
{
struct cricket player[200];
int i,n;
char ch,team[100];
printf("HOW MANY PLAYERS\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\n INPUT THE NAME OF THE PLAYER %d : ",i+1);
scanf("%s",player[i].name);
printf("\n INPUT THE TEAM NAME OF THE PLAYER %d :",i+1);
scanf("%s",player[i].team_name);
printf("\n INPUT THE BATTING AVERAGE OF THE PLAYER %d:",i+1);
scanf("%d",&player[i].batting_average);
}
printf("\t=====================================================\n");
printf("\tPLAYER'S NAME \t\tCOUNTRY \tBATTING AVERAGE\n");
printf("\t=====================================================\n");
for(i=0;i<=n;i++)
printf("%20s%20s\t%d\n",player[i].name, player[i].team_name,player[i].batting_average);
for(i=0;i<n;i++)
{
printf("\n INPUT THE NAME OF THE PLAYER %d : ",i+1);
scanf("%s",player[i].name);
printf("\n INPUT THE TEAM NAME OF THE PLAYER %d :",i+1);
scanf("%s",player[i].team_name);
printf("\n INPUT THE BATTING AVERAGE OF THE PLAYER %d:",i+1);
scanf("%d",&player[i].batting_average);
}
printf("\t=====================================================\n");
printf("\tPLAYER'S NAME \t\tCOUNTRY \tBATTING AVERAGE\n");
printf("\t=====================================================\n");
for(i=0;i<=n;i++)
printf("%20s%20s\t%d\n",player[i].name, player[i].team_name,player[i].batting_average);
read:
printf("\n\n INPUT FOR WHICH TEAM YOU WANT TO LIST : ");
scanf("%s",team);
printf("\n %s \n",team);
printf("\t=====================================================\n");
printf("\tPLAYER'S NAME \t\tCOUNTRY \tBATTING AVERAGE\n");
printf("\t=====================================================\n");
for(i=0;i<=n;i++)
printf("%20s%20s\t%d\n",player[i].name, player[i].team_name,player[i].batting_average);
printf(" \n DO YOU WANT TO LIST ANY OTHER TEAM ? (Y/N) : ");
ch=getch();
if (ch == 'Y' || ch == 'y')
goto read;
getch();
}
