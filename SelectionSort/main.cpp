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

    for(int i=0;i<arr.size()-1;i++)
    {
          int Smallest=i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[Smallest]>arr[j])
            {
                Smallest=j;
            }
        }
        if(Smallest!=i)
        {
            swap(arr[Smallest],arr[i]);
        }
    }
    for(auto it=arr.begin();it!=arr.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    return 0;
}
