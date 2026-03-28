#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,1,0,1,1,1};
    int n = sizeof(a)/sizeof(a[0]);

    int count = 0, maxCount = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            count++;
            if(count > maxCount)
                maxCount = count;
        }
        else
        {
            count = 0;
        }
    }

    cout << "Max consecutive ones: " << maxCount;

    return 0;
}