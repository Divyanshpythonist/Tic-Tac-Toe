#include<stdio.h>
#include<stdlib.h>
char layout[5][5];
void main()
{
	int c=0;
	char P1='X',P2='O',p2,p1;
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			if(((j%2)!= 0 )&&(layout[i][j] != '_'))
			layout[i][j]='|';
			if(((i%2) != 0 )&&(layout[i][j] != '|'))
			layout[i][j]='_';
		}
	}

		
	layout[0][0]='a';layout[0][2]='b';layout[0][4]='c';layout[2][0]='d';layout[2][2]='e';
	layout[2][4]='f';layout[4][0]='g';layout[4][2]='h';layout[4][4]='i';
		
	for(int i=0 ; i<5 ; i++)
	{
		for(int j=0 ; j<5 ; j++)
		{
			printf("%c ",layout[i][j]);
		}
	printf(" \n");
	}

	for(int i=1 ; i<=9 ; i++)
	{		
		if(i%2!=0)
		{
			P1='X';
			int x;
			printf(" \n");
			printf("Player 1 input your position ");
			scanf(" %c",&p1);
			for(int i=0 ; i<5 ; i++)
			{
				for(int j=0 ; j<5 ; j++)
				{
					if(layout[i][j]==p1)
					{
						layout[i][j]=P1;
						
					}
				}
			}
			system("clear");
			printf(" \n");
			for(int i=0 ; i<5 ; i++)
			{
				for(int j=0 ; j<5 ; j++)
				{
					printf("%c ",layout[i][j]);
				}
				printf(" \n");
			}
			for(int k=0; k<5; k=k+2)
			{
				if(((layout[k][0]==layout[k][2]) && (layout[k][4]==layout[k][2])) || ((layout[0][k]==layout[2][k]) && (layout[4][k]==layout[2][k])) 					||((layout[0][0]==layout[2][2]) && (layout[4][4]==layout[2][2])) || ((layout[0][4]==layout[2][2]) && (layout[4][0]==layout[2][2])))
				{
					c=1;
				}
			}
			if(c==1)
			{
				printf("Player 1 is WINNER");
				break;
			}
		}
		c=0;
		if(i%2==0)
		{
			P2='O';
			int y;
			printf(" \n");
			printf("Player 2 input your position ");			
			scanf(" %c",&p2);
			for(int i=0 ; i<5 ; i++)
			{
				for(int j=0 ; j<5 ; j++)
				{
					if(layout[i][j]==p2)
					{
						layout[i][j]=P2;
						
					}
				}
			}
			system("clear");
			printf(" \n");
			for(int i=0 ; i<5 ; i++)
			{
				for(int j=0 ; j<5 ; j++)
				{
					printf("%c ",layout[i][j]);
				}
				printf(" \n");
			}
			for(int k=0; k<5; k=k+2)
			{
				if(((layout[k][0]==layout[k][2]) && (layout[k][4]==layout[k][2])) || ((layout[0][k]==layout[2][k]) && (layout[4][k]==layout[2][k])) 					||((layout[0][0]==layout[2][2]) && (layout[4][4]==layout[2][2])) || ((layout[0][4]==layout[2][2]) && (layout[4][0]==layout[2][2])))
				{
					c=1;
				}
			}
			if(c==1)
			{
				printf("Player 2 is WINNER");
				break;
			}
		}
		
	}
	if(c==0)
	{
		printf("Match Draw \n");
	}
	printf("\n");
}


