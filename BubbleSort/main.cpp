#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>arr;
    for(int i=0;i<10;i++)
        arr.push_back(i);


    for(int i= ;i<arr.size()-1;i++)
    {

        for(int j=0;j<arr.size()-i-1;j++)
        {
            cout<<arr[j]<<" "<<arr[j+1]<<endl;

            if(arr[j]<arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(auto it=arr.begin();it!=arr.end();it++)
        cout<<*it<<endl;
    return 0;
}
