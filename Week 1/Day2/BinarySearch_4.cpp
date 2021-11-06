// Floor and Ceil in a Sorted Array
#include<bits/stdc++.h>
using namespace std;
int binaryFloor(vector<int> &v,int k)
{
    int high=v.size()-1,low=0,mid;
    while(high-low>1)
    {
        mid=(low+high)/2;
        if(v[mid]==k) return mid;
        if(v[mid]<k) low=mid;
        else high=mid-1;
    }
    if(v[high]<=k)return high;
    if(v[low]<=k) return low;
    return -1;
}
int binaryCeil(vector<int> &v,int k)
{
    int high=v.size()-1,low=0,mid;
    while(high-low>1)
    {
        mid=(low+high)/2;
        if(v[mid]==k) return mid;
        if(v[mid]<k) low=mid+1;
        else high=mid;
    }
    if(v[low]>=k) return low;
    if(v[high]>=k)return high;
    return -1;
}
int main()
{
    vector<int> v;
    for(int i=1;i<=10;i+=2)
    v.push_back(i);
    for(auto &it:v) cout<<it<<" ";
    int flr=binaryFloor(v,0);
    int cel=binaryCeil(v,0);

    if(flr!=-1)
    cout<<"\nFloor is "<<v[flr]<<" At Index "<<flr<<endl;
    else cout<<"\nFloor doesn't exist"<<endl;
    if(cel!=-1)
    cout<<"Ceil is "<<v[cel]<<" At Index "<<cel<<endl;
    else cout<<"Ceil doesn't exist"<<endl;
    return 0;
}
