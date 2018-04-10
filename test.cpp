#include<bits/stdc++.h>
#include <stack>
using namespace std;
//求一个进制数的所有位数之和，n是数字，a是进制数
int HexSum(int n,int a)
{
    int sum=0;
    while(n)
    {
        sum+=(n%a);
        n=n/a;
    }
    return sum;
}
//约分函数，求最大公约数
int Max(int x, int y)
{
    int z = y;
    while(x%y!=0)
    {
        z = x%y;
        x = y;
        y = z;
    }
    return z;
}
int main()
{
    int A;
    while(cin>>A){
        int sum=0;
        for(int i=2;i<=A-1;i++){
            sum+=HexSum(A,i);
        }
        int r=Max(sum,A-2);
        cout<<sum/r<<'/'<<(A-2)/r<<endl;
    }
    return 0;
}
