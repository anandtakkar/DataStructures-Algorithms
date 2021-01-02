#include <iostream>
#include <array>

using namespace std;

void minimum(int max,array<int,10> stack)
{
    int top=stack.size()-1;
    while(top>=0)
    {
        if(stack[top]<=max)
        {
            max=stack[top];
        }
        else
        top--;
    }
    cout<<max<<endl;
}
int main()
{
    array<int,10> stack{1,2,3,4,5,6,7,8,9,0};
    
    int max=stack[0];
    
    minimum(max,stack);
}