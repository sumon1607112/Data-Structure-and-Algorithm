#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr;
    for(int i=10;i>=0;i--)
        arr.push_back(i);
  for(auto it=arr.begin();it!=arr.end();it++)
        cout<<*it<<" ";
        cout<<endl;

    for(int i=arr.size()-2;i>=0;i--)
    {

        int item=arr[i];
        int j=i+1;
        while(j<arr.size() && arr[j]<item)
        {
           arr[j-1]=arr[j];
           j++;
        }
        arr[j-1]=item;
    }

    for(int i=1;i<arr.size();i++)
    {
        int item=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>item)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=item;
    }
    for(auto it=arr.begin();it!=arr.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    return 0;
}
