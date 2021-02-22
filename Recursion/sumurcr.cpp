#include<iostream>
using namespace std;
int sumofn(int n)
{
    int res;
    if(n==1)
        return 1;
    else
        res = n+sumofn(n-1);
    return res;
}
int main()
{
    int n;
    cin >> n;
    int sum = sumofn(n);
    cout<<sum;
    return 0;
}
