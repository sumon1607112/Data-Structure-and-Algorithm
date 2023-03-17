#include <bits/stdc++.h>

using namespace std;

int ArrayLength=0;

int parent(int x)
{
    return x/2;
}
int LeftIndex(int parent)
{
    return parent*2;
}
int RightIndex(int parent)
{
    return parent*2+1;
}

void MaxHeap(vector<int> &v ,int Index,int ArraySize)
{
    int left=LeftIndex(Index);
    int right=RightIndex(Index);
    int Largest=Index;


       if( left>=0 && left<=ArraySize &&  v[Largest]<v[left])
       {
          Largest=left;
       }
       if( right>=0 && right<=ArraySize &&  v[Largest]<v[right])
       {
          Largest=right;
       }

       if(Largest!=Index)
       {
           swap(v[Largest],v[Index]);
           MaxHeap(v,Largest,ArraySize);
       }


}

void Build_Max_Heap(vector<int> &v ,int ArraySize)
{
    ///cout<<"arraySize:"<<ArraySize<<endl;
    for(int i=ArraySize/2;i>=1;i--)
    {
      MaxHeap(v,i,ArraySize);
    }
}

int ExtractMax(vector<int>&v)
{
    int item=v[1];
    swap(v[1],v[ArrayLength]);
    ArrayLength--;
    MaxHeap(v,1,ArrayLength);

    return item;


}
int InsertNewElement(vector<int>&v,int NewItem)
{
    v.push_back(NewItem);
    int LastIndex=v.size()-1;
    ArrayLength=LastIndex;
    int ParentIndex=parent(LastIndex);
    cout<<v[ParentIndex]<<" "<<v[LastIndex]<<endl;
    while( ParentIndex>=1 &&  v[ParentIndex]<v[LastIndex])
    {
        swap(v[ParentIndex],v[LastIndex]);
        cout<<v[ParentIndex]<<" "<<v[LastIndex]<<endl;
        LastIndex=ParentIndex;


        ParentIndex=parent(LastIndex);
        cout<<"Last:"<<LastIndex<<" "<<"Par:"<<ParentIndex<<endl;
    }
    return ArrayLength;
}

void IncreaseWeight(vector<int>&v,int Index,int ExtraWeight)
{
   v[Index]=v[Index]+ExtraWeight;
   int ParentIndex=parent(Index);
   int LastIndex=Index;
   while(ParentIndex>=1 && v[LastIndex]>v[ParentIndex] )
   {
       swap(v[ParentIndex],v[LastIndex]);
       LastIndex=ParentIndex;
       ParentIndex=parent(LastIndex);
   }

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

/**<
 for(int i=10;i>=1;i--)
    {
        v.push_back(i);
    } */
    Build_Max_Heap(v,v.size()-1);
    ArrayLength=v.size()-1;
    ///cout<<v[1]<<" "<<v[ArrayLength]<<endl;
   /* for(int i=1;i<ArrayLength;i++)
    {
      swap(v[1],v[ArrayLength-i+1]);

      Build_Max_Heap(v,ArrayLength-i);


    }

   // int MaxElement=ExtractMax(v);
    while(ArrayLength>=1)
        cout<<ExtractMax(v)<<endl;*/
    InsertNewElement(v,66);
    InsertNewElement(v,77);
    InsertNewElement(v,33);
    IncreaseWeight(v,7,200);
    for(int i=1;i<=ArrayLength;i++)
        cout<<v[i]<<" ";

     /* for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";

        }*/
    cout<<endl;




    return 0;
}
