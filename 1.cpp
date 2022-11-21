#include<bits/stdc++.h>
using namespace std;
int k=0;
int f(int n)
{
    
     if (n == 0)
        return 0;
     int x = n %3;
     n /= 3;
     if (x < 0)
        n += 1; 
     f(n);
     k=k*10+(x < 0 ? x + (3 * -1) : x);
     return k;
}
int main()
{
    int dec;
    cin>>dec;
    cout<<f(dec);
    return 0;
}