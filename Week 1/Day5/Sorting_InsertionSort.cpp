#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
        for(int j=i-1;j>=0;j--)
            if(v[j]>v[j+1])
            {
                int t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
            }
}
/*  Now let's analyze the TC->
        1 + 2 + 3 + ... + n-1 = (n-1)*(n)/2 = O(n^2)  
*/
int main()
{
    vector<int> v{9,8,7,1,2,3,4};
    insertionSort(v);
    for(auto &it: v)
    cout<<it<<" ";
    return 0;
}
