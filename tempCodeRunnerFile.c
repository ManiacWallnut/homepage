#include <iostream>
#include <cstdio>
using namespace std;
int n,m,q;
const int N = 1010;
int a[N][N];
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};
int k = 0;
void ShiftLeft(int x, int **a)
{
    int t = a[x][0];
    for (int i = 0; i < n-1; ++i)
    {
        a[x][i] = a[x][i+1];
    }
    a[x][n-1] = t;
}
void ShiftRight(int x, int **a)
{
    int t = a[x][n-1];
    for (int i = n-1; i > 0; --i)
    {
        a[x][i] = a[x][i-1];
    }
    a[x][0] = t;
}
void ShiftUp(int y, int **a)
{
    int t = a[0][y];
    for (int i = 0; i < n-1; ++i)
    {
        a[i][y] = a[i+1][y];
    }
    a[n-1][y] = t;
}
void ShiftDown(int y, int **a)
{
    int t = a[n-1][y];
    for (int i = n-1; i > 0; --i)
    {
        a[i][y] = a[i-1][y];
    }
    a[0][y] = t;
}
int main()
{
    scanf("%d%d",&n,&q);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int h = 0; h < q; ++h)
    {
        int opt;
        scanf("%d",&opt);
        if (opt == 1)
        {
            if (k == 0)
            {
                int l;
                scanf("%d",&l); l--;
                ShiftRight(l, a);
            }
            else if (k == 1)
            {
                int l;
                scanf("%d",&l); l--;
                ShiftDown(n-1-l, a);
            }
            else if (k == 2)
            {
                int l;
                scanf("%d",&l); l--;
                ShiftLeft(n-1-l, a);
            }
            else if (k == 3)
            {
                int l;
                scanf("%d",&l); l--;
                ShiftUp(l,a);
            }
        }
        else if (opt == 2) 
        {
            k=(k+1)%4;
        }
        else 
        {
            k=(k+3)%4;
        }
            
    }
	if (k % 4 == 0)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				printf("%d%c",a[i][j],j==n-1?10:32);
			}
		}
	}
	if (k % 4 == 1)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int i = n-1; i >= 0; --i)
			{
				printf("%d%c",a[i][j],i==0?10:32);
			}
		}		
    }
	if (k % 4 == 2)
	{
		for (int i = n-1; i >= 0; --i)
		{
			for (int j = n-1; j >= 0; --j)
			{
				printf("%d%c",a[i][j],j==0?10:32);
			}
		}
	}
	if (k % 4 == 3)
	{
		for (int j = n-1; j >= 0; --j)
		{
			for (int i = 0; i < n; ++i)
			{
				printf("%d%c",a[i][j],i==n-1?10:32);
			}
		}
	}  
    

}