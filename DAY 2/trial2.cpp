#include <iostream>

using namespace std;

int main()
{
    int ar[]={1,2,3,4,5};
    int k;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        int temp=ar[0];
        ar[0]=ar[4];
        int t=0;
        for(int j=0;j<5;j++)
        {
            if(j==4)
            {
                break;
            }
           t=ar[j+1];
           ar[j+1]=temp;
           temp=t;
        }
    }
for(int i=0;i<5;i++)
{
    cout<<ar[i]<<endl;
}
}
