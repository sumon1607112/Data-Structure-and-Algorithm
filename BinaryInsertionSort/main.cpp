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



    for(int i=1;i<arr.size();i++)
    {
        int item=arr[i];
        int j=i-1;

          ///Binary Search Implementation

         int low=0;
         int high=i;
         int mid;
         while(low<high)
         {
              mid= low+(high-low)/2;
             if(item>=arr[mid])
             {
                 low=mid+1;
             }
             else
             {
                 high=mid;
             }
         }
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
