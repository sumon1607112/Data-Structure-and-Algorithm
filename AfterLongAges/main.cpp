#include <bits/stdc++.h>

using namespace std;

int main()
{
     vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(9);
    v.push_back(12);
    v.push_back(21);
    v.push_back(23);
    v.push_back(29);
    cout<<v.size()<<endl;
    int high=v.size()-1;
    int low=0;
    int key=7;
    int mid;
    while(low<high)
    {
       mid=low+(high-low)/2;
       if(key>=v[mid])
       {

          low=mid+1;
       }
       else
       {
           high=mid;
       }

    }
    cout<<"low:"<<low<<endl;
    return 0;
}
