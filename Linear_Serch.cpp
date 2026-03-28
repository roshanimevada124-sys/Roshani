#include <iostream>
using namespace std;
int main()
{
// array ,array size
int a[5]={10,20,30,40,50};
int n=sizeof(a)/sizeof(a[0]);

//tarversal in array
for(int i=0; i<n; i++){
cout<<a[i]<<endl;
}
bool found=false;

// entering element number to find
int f;
cout<<"Enter the element you want to find:";
cin>>f;

//linear serch to find element
for(int i=0; i<n; i++)
{
    if(f==a[i])
    {
        cout<<"Find found in index:"<< i<<endl;
        found=true;
        break;
    }
}
   if(!found)
    {
        cout<<"Element not found"<<endl;
    }

 return 0;
}

