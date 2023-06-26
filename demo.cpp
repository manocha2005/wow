#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num1{7,2,3,5,7,1,1};
    vector <int> num2{2,6,4,5};
    vector <int> result;

    int first=num1.size()-1, second= num2.size()-1,add=0,rem,pre=0;

    for(int i=0,j=0; i<=first || j<=second; i++,j++)
    {
        if(i<first || j<second)
        add = num1[first-i] + num2[second-j]+pre;
        else if(i>first)
        add = num2[second-j]+pre;
        else if(j>second)
        add = num1[first-i] +pre;
        else
        add=pre;

        rem = add%10;
        result.push_back(rem);
        pre = add/10;
        
    }
    
    for(auto i:result)
    {
        cout<<i<<" ";
    }
}