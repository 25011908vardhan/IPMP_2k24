#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(v[ind]>v[j])
                ind=j;
        }
        int t=v[i];
        v[i]=v[ind];
        v[ind]=t;
    }
}
/*  Now let's analyze the TC->
   n-1 + n-2 + ... + 1 = (n-1)(n)/2 = O(n^2)
*/
int main()
{
    vector<int> v{9,8,7,1,2,3,4};
    selectionSort(v);
    for(auto &it: v)
    cout<<it<<" ";
    return 0;
}
