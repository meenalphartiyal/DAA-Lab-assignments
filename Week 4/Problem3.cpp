#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,min,max;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    int s[m];
    for(i=0; i<m; i++)
        cin>>s[i];

    min = n<m ? n : m;
    max = n<m ? m : n;
    for(i=0; i<min; i++)
    {
        for(j=0; j<max; j++)
        {
            if(a[i]==s[j])
            {
                cout<<a[i]<<" ";
                s[j] = -91537;
                i++;
            }
        }
    }
    return 0;
}
/*
7
10 10 34 39 55 76 85
12
10 10 11 30 30 34 34 51 55 69 72 89
*/
