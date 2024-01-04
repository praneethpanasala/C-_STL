#include <bit/stdc++.h>
/*
 *   * * * 
 *   * * *
 *   * * *
 * */
void nForest(int n) 
{
   for (int i = 0; i < n; i++) 
   {
       for (int j = 0; j < n; j++) 
       {
          cout << "*" << " ";
       } 
       cout <<endl;
   }
}
#if 0
1
12
123
1234
12345
#endif
void nTriangle(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j < i+1; j++) 
        {
            cout << j ;
        }
        cout <<endl;
    }
}

#if 0
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
#endif 
void triangle(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
#if 0
* * * * * 
* * * * * 
* * * * 
* * * 
* *
*
#endif
void seeding(int n) 
{
    for (int i=n; i > 0; i--) 
    {
        for (int j=i; j > 0; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
#if 0
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
#endif
void nNumberTriangle(int n) 
{
    for (int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout << j << " ";
            
        }
        cout << endl;
    }
}
#if 0
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
#endif
void nNumberTriangle1(int n) 
{
    for (int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j << " "; 
            
        }
        cout << endl;
    }
}
#if 0
    *
   **
  ***
 ****
*****
#endif
void nStarTriangle(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            cout << " ";
            
        }
        for (int l = 0; l < i + 1; l++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
#if 0
    *
   ***
  *****
 *******
*********
#endif
void nStarTriangle1(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            cout << " ";
            
        }
        for (int k = 0; k < 2 * i + 1; k++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
#if 0
***********
 ********
  ******
   ***
    *
#endif
void nStarTriangle2(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            cout << " ";
            
        }
        for (int k = 0; k < 2 * (n-i) - 1; k++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    nStarTriangle2(5);
    return 0;
}
