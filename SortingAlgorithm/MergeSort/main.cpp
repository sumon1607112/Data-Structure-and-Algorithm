#include <bits/stdc++.h>

using namespace std;


void Merge(vector<int>&v,int left,int mid,int right)
{
   cout<<"left:"<<left<<" "<<"mid:"<<mid<<" "<<"right:"<<right<<endl;
    int LeftArraySize=mid-left+1;
    int RightArraySize=right-mid;

    vector<int>LeftVector(LeftArraySize);
    vector<int>RightVector(RightArraySize);
    for(int i=0;i<LeftArraySize;i++)
    {
        LeftVector[i]=v[left+i];
    }


    for(int i=0;i<RightArraySize;i++)
    {
        RightVector[i]=v[mid+1+i];
    }



    int LeftIndex=0;
    int RightIndex=0;
    int GlobalIndex=left;

    while(LeftIndex<LeftArraySize && RightIndex<RightArraySize)
    {
        if(LeftVector[LeftIndex]<=RightVector[RightIndex])
        {
            v[GlobalIndex]=LeftVector[LeftIndex];
            GlobalIndex++;
            LeftIndex++;
        }
        else
        {
            v[GlobalIndex]=RightVector[RightIndex];
            GlobalIndex++;
            RightIndex++;
        }
    }
    //cout<<LeftIndex <<" "<<LeftArraySize<<" "<<RightIndex<<" "<<RightArraySize<<endl;
    while(LeftIndex<LeftArraySize)
    {
       /// cout<<"inLeft"<<endl;
        v[GlobalIndex]=LeftVector[LeftIndex];
        GlobalIndex++;
        LeftIndex++;
    }

    while(RightIndex<RightArraySize)
    {
       /// cout<<"inRight"<<endl;
        v[GlobalIndex]=RightVector[RightIndex];
        GlobalIndex++;
        RightIndex++;
    }



}


 void MergeSort(vector<int>&v,int left,int right)
 {
     if(left>=right)
        return ;
     int mid= left + (right-left)/2;

     MergeSort(v,left,mid);
     MergeSort(v,mid+1,right);
     Merge(v,left,mid,right);



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

    MergeSort(v,0,v.size()-1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;




    return 0;
}
