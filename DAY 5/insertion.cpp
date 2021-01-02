#include <iostream>

using namespace std;

int main()
{
    int ar[]={2,56,4,12,11};
    int key=0;
    for(int i=1;i<5;i++)
    {
        int key=ar[i];
        int j;
        while(j>=0 && ar[j]>key)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
    }
    for(int a=0;a<5;a++)
    {
        cout<<ar[a]<<" "<<endl;
    }
}