#include<stdio.h>
#include<conio.h>
char a[3][3];// global declaration
int i,j; //global declaration
void display() //function to display current status of game
{
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
	
			printf("%6c\t",a[i][j]);
	}
	printf("\n");
	}
}
void check(void) //function to check whether a player has won or not
{
	for(i=0;i<=2;i++)
	{
	if(a[i][0]=='O'&&a[i][1]=='O'&&a[i][2]=='O')
	{
		printf("player 1 wins ...\n");
		exit(0);
	}
   }
   for(j=0;j<=2;j++)
   {
	 if(a[0][j]=='O'&&a[1][j]=='O'&&a[2][j]=='O')
	{
		printf("player 1 wins...\n");
		exit(0);
	}
   }
	 if((a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[2][0]=='O'&&a[1][1]=='O'&&a[0][2]=='O'))
	{
		printf("player 1 wins...\n");
		exit(0);
	}
	for(i=0;i<=2;i++)
	{
	if(a[i][0]=='X'&&a[i][1]=='X'&&a[i][2]=='X')
	{
		printf("player 2 wins...\n");
		exit(0);
	}
   }
   for(j=0;j<=2;j++)
   {
	 if(a[0][j]=='X'&&a[1][j]=='X'&&a[2][j]=='X')
	{
		printf("player 2 wins...\n");
		exit(0);
	}
   }
	 if((a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[2][0]=='X'&&a[1][1]=='X'&&a[0][2]=='X'))
	{
		printf("player 2 wins...\n");
		exit(0);
	}	
}
int tie () //function to check whether its a tie or not
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]=='_')
			{
				return 1;
			}
			
		}
	}
	printf("it is a tie\n");
	exit(0);
	
}
int main() //main program
{
	int k,l,c;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			a[i][j]='__';
	}
	}
	display();
printf("enter the player who wants to start first..\n1.player 1 \n2.player 2\n");
scanf("%d",&c);
for(;;)
{
	switch(c)
	{
		case 1:
			printf("player 1 turns\n");
			printf("enter the positions\n");
			scanf("%d%d",&k,&l);
			a[k][l]='O';
			display();
			check();
			tie();
			c=2;
			break;
		case 2:
				printf("player 2 turns\n");
			printf("enter the positions\n");
			scanf("%d%d",&k,&l);
			a[k][l]='X';
			display();
			check();
			tie();
			c=1;
			break;		
	}
}
	getch();
	
}
