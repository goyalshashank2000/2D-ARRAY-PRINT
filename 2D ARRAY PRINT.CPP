#include<iostream.h>
#include<conio.h>
void show(int a[][3],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				gotoxy((j+2)*3,i+10);
				cout<<a[i][j];
			}
			else
			{
				gotoxy((j+2)*3,i+10);
				cout<<"0";

			}
			gotoxy(15,11);
			cout<<"+";
			if(i<j)
			{
				gotoxy((j+6)*3,i+10);
				cout<<a[i][j];
			}
			else
			{
				gotoxy((j+6)*3,i+10);
				cout<<"0";

			}
			gotoxy(27,11);
			cout<<"+";
			if(i>j)
			{
				gotoxy((j+10)*3,i+10);
				cout<<a[i][j];
			}
			else
			{
				gotoxy((j+10)*3,i+10);
				cout<<"0";

			}

		}
	}
}
void main()
{
	int a[3][3],i,j;
	clrscr();
	cout<<"\n\tEnter 2-D Matrix Element's";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			gotoxy((j+3)*4,i+5);
			cin>>a[i][j];
		}
	}

	show(a,3);
	getch();
}
