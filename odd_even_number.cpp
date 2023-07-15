#include<iostream>
using namespace std;
int main()
{
    int ary[10],num,odd_sum=0,even_sum=0;
    cout<<"enter value:";
    cin>>num;

    for(int i=0; i<=10; i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+i;
        }
        else
        {
            odd_sum=odd_sum+i;
        }
    }
}