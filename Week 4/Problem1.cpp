#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,key,comp,shift;
    cin>>t;
    while(t--)
    {
        comp = 0;
        shift= 0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
//INSERTION SORT + COUNT BEGINS
        for(i=1;i<n;i++)
        {
            key = a[i];
            j = i-1;
            while(j>=0 && key<a[j])
            {
                comp++;
                shift++;
                a[j+1] = a[j];
                j = j-1;
            }
            a[j+1] = key;
            shift++;
        }
//INSERTION SORT + COUNT ENDS
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\nComparisons: "<<comp<<"\nShifts: "<<shift<<endl<<endl;
    }
    return 0;
}
