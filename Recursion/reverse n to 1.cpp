#include<iostream>
using namespace std;
int fun(int n,int m)
{
    if(n>=m)
    {
        cout<<n;
        cout<<endl;
        fun(n-1,m);
    }

}
int main()
{
    int n, m;
    cin>>n>>m;
    fun(n,m);
    return 0;
}
