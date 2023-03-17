#include <bits/stdc++.h>

using namespace std;


int PartitionFunction(vector<int>&v,int low ,int high)
{
    int pivot=v[high];
    int Left=low-1;
  // cout<<"low:"<<low<<" "<<"high:"<<high<<endl;
    for(int i=low;i<high;i++)
    {
        if(v[i]<pivot)
        {
            Left++;
            swap(v[Left],v[i]);
        }


    }

    Left++;
    swap(v[Left],v[high]);

    return Left;
}


void QuickSort(vector<int>&v,int low,int high)
{
     //cout<<"low:"<<low<<" "<<"high:"<<high<<endl;
    if(low>=high)
    {
        return;
    }

    int PartitionIndex=PartitionFunction(v,low,high);
   // cout<<"pivot:"<<PartitionIndex<<endl;
    QuickSort(v,low,PartitionIndex-1);
    QuickSort(v,PartitionIndex+1,high);
}







int main()
{

    vector<int>v;
    v.push_back(0);
    v.push_back(12);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    v.push_back(10);
    v.push_back(17);
    v.push_back(19);
    v.push_back(2);
    v.push_back(5);

    QuickSort(v,0,v.size()-1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;




    return 0;
}
