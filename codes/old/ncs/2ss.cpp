#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int lmt,l2;
    cin>>lmt;
    long long a[lmt],inn;
    for(int i=0;i<lmt;i++)
   	    cin>>a[i];
    cin>>l2;
    sort(a,a+lmt);
    while(l2--)
    {
        cin>>inn;
        for (int i=0;i<lmt;i++) 
        {
            if (a[i] == inn)
                cout << i+1 << endl;
        }
    }
    return 0;
}
