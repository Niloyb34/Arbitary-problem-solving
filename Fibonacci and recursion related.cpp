#include<bits/stdc++.h>
using namespace std;
void fun(int i)
{
    if(i==1)
    {
        cout<<i<<endl;;
        return ;///aikane return na lekle wrong answer dibe
    }
    fun(i-1);
    cout<<i<<endl;
///self call or recursive call thakbe mane nijeke nije call korbe and arekti base case thakbe
    ///Fibonacci series er code 1 1 2 3 5 8 13
    //                                       i= 1 2 3 4 5  6  7
//i=1 , ans=1
//i=2 ,ans=1
//i=3, ans=2
//i=4, ans=3
//i=5, ans=5
//i=6, ans=8
}
int fib(int i)
{
    if(i==1||i==2)
    {
        return 1;
    }
    int x=fib(i-1)+fib (i-2);
    return x;
}
int main()
{
    fun(5);
    cout<<"The 5 th fibonacci number is :"<<fib(5)<<endl;
    return 0;
}
