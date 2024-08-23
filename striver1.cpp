#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n-i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <=n; i++) 
    {
        for(int j = 1; j<=n-i; j++) //space
        {
            cout << " ";
        }

        for(int j = 0; j<(2*i)-1; j++) //stars
        {
            cout << "*";
        }

        for(int j = 1; j<n-i; j++) //space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n) //reverse stars
{
    for (int i = n; i >0; i--) 
    {
        for(int j = 1; j<=n-i; j++) //space
        {
            cout << " ";
        }

        for(int j = 0; j<(2*i)-1; j++) //stars
        {
            cout << "*";
        }

        for(int j = 1; j<n-i; j++) //space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; j >i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern91(int n)
{
    for (int i = 1; i <=(2*n)-1; i++)
    {
        int stars = i;
        if (i>n) stars = 2*n-i;
        for (int j = 1; j <=stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void patternn(int n)
{
    int stars = 1;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            if (stars % 2 == 0) cout << "0 ";
            else cout << "1 ";
            stars++;
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    int start = 1;
    for (int i = 1; i <=n; i++)
    {   
        if (i % 2 == 0) start = 0;
        else  start = 1;
        for (int j = 1; j <=i; j++)
        {
            cout << start;
            start = 1 - start;    
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i <=n; i++)
    {   
        for (int j = 1; j <=i; j++)//num
        {
            cout << j;
        }
        for (int j = 1; j <=2*(n-i); j++)//space
        {
            cout << " ";
        }
        for (int j = 1; j <=i; j++)//num
        {
            cout << j;
        }

        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <=n; i++)
    {   
        for (int j = 1; j <=i; j++)//num
        {
            cout << j;
        }
        for (int j = 1; j <=2*(n-i); j++)//space
        {
            cout << " ";
        }
        for (int j = 1; j <=i; j++)//num
        {
            cout << j;
        }

        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <=n; i++) 
    {
        for(int j = 1; j<=n-i; j++) //space
        {
            cout << " ";
        }
        char ch = 'A';
        // int breakpoint = 0;
        // if (n%2 == 0) breakpoint = n/2;
        // else breakpoint = n/2+1;
        for(int j = 1; j<=(2*i)-1; j++) //stars
        {
            int num = ((2*i-1)/2)+1;
            cout << ch;
            if (j >=num) ch--;
            else ch++;
        }

        for(int j = 1; j<n-i; j++) //space
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 1; i<=n; i++)
    {
        
        for (int j = 1; j<=n; j++)
        {
            if (i==1 || i==n || j==1 || j == n){
                cout << "*";
            } 
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i<2*n-1; i++)
    {
        for (int j = 0; j<2*n-1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;

            cout << n-min(min(top,bottom), min(left,right));
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern22(n);
    }
    return 0;
}