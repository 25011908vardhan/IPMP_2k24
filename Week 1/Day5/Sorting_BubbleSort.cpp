#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++) //This shows the number of times we compare array elements which should be at most N-1 
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)//The n-i-1 is to leave out the correctly placed element at the end each time
        {
            if(v[j]>v[j+1])
            {
                flag=1;
                int t=v[j+1];
                v[j+1]=v[j];
                v[j]=t;
            }
        }
        if(flag==0)
        break;
    }
}
/*  Now let's analyze the TC->
    n-1 + n-2 + ... + 1= (n-1)*(n)/2=O(n^2) 
    The tc for best case before is same, but after using flag is-> O(n)         
*/
int main()
{
    vector<int> v{9,8,7,1,2,3,4};
    bubbleSort(v);
    for(auto &it: v)
    cout<<it<<" ";
    return 0;
}
