#include<stdio.h>
#include<stdlib.h>
char layout[5][5];

int main()
{
	char p1,p2,P1='X',P2='O';
	int c;
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{			
			if( j%2 != 0 && layout[i][j] != '_')
				layout[i][j] = '|';
			if( i%2 != 0 && layout[i][j] != '|')
				layout[i][j] = '_';	
		}
	}
	layout[0][0]='a';layout[0][2]='b'; layout[0][4]='c'; 
	layout[2][0]='d'; layout[2][2]='e'; layout[2][4]='f';
	layout[4][0]='g'; layout[4][2]='h'; layout[4][4]='i';
		
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c",layout[i][j]);
		}
		printf("\n");
	}
	for(k=1;k<=9;k++)
	{
		if( k%2 != 0)
		{
			P1='X';
			printf("\n");
			printf("Player 1 input your position: ");
			scanf(" %c",&p1);
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(layout[i][j] == p1)
						layout[i][j] = P1;
				}
			}
			system("clear");
			printf("\n");
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					printf("%c",layout[i][j]);
				}
				printf("\n");
			}
			for(int y=0;y<5;y += 2)
			{
				if( ( layout[y][0] == layout[y][2] && layout[y][2] == layout[y][4] ) || 
				    ( layout[0][y] == layout[2][y] && layout[4][y] == layout[2][y] ) ||
				    ( layout[0][0] == layout[2][2] && layout[4][4] == layout[2][2] ) ||
				    ( layout[0][4] == layout[2][2] && layout[4][0] == layout[2][2] ) )
				{
					c=1;
				}
			}
			if(c == 1 )
			{
				printf("Player 1 is winner\n");
				break;
			}
		}
		c=0;
		if(k%2 == 0)
		{
			P2 = 'O';
			int y;
			printf("\n");
			printf("Player 2 input your position: ");
			scanf(" %c",&p2);
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(layout[i][j] == p2)
					{
						layout[i][j] = P2;
					}
				}
			}
			system("clear");
			printf("\n");
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					printf("%c",layout[i][j]);
				}
				printf("\n");
			}
			for(int y=0;y<5;y += 2)
			{
				if( ( layout[y][0] == layout[y][2] && layout[y][2] == layout[y][4] ) || 
				    ( layout[0][y] == layout[2][y] && layout[4][y] == layout[2][y] ) ||
				    ( layout[0][0] == layout[2][2] && layout[4][4] == layout[2][2] ) ||
				    ( layout[0][4] == layout[2][2] && layout[4][0] == layout[2][2] ) )
				{
					c=1;
				}
			}
			if(c == 1 )
			{
				printf("Player 2 is winner\n");
				break;
			}
		}
		
	}
	if(c == 0)
	printf("\n\nMatch Draw \n");
	printf("\n");
	return 0;	
}
