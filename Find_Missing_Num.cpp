#include <iostream>
using namespace std;
int main()
{
// declare array,array size ,and 
    int a[]={1,2,3,4,5,6,7,8,10};
    int f=sizeof(a)/sizeof(a[0]);
    int n= f +1;
    int sum=0;
// sum of array element
    for(int i=0;i<f;i++)
    {
        sum += a[i];
    }
// sum of nature number
   int T_sum=n*(n+1)/2;
// cheking
    if(sum == T_sum)
    {
        cout<<"No any missing number"<<endl;
    }
    else
    {
        cout<<"Missing number is:"<< T_sum-sum;
        
    }
}
