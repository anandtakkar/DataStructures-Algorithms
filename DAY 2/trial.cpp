#include <iostream>

using namespace std;

int main()
{
    int ar1[5]={1,2,3,4,5};
    int ar2[5]={6,7,8,9,0};
    
    for(int i=0;i<5;i++)
    {
        ar1[i]=ar1[i+1];
    }
    for(int a=0;a<4;a++)
    {
        cout<<ar1[a]<<" ";
    }
    cout<<"enter a index to delete"<<endl;
    int x;
    cin>>x;
    for(int j=x;j<5;j++)
    {
        ar2[j]=ar2[j+1];
    }
    for(int b=0;b<4;b++)
    {
        cout<<ar2[b]<<" ";
    }
}
