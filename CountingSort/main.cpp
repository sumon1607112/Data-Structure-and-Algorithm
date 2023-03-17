#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);

    v.push_back(4);

    v.push_back(3);

    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(7);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(0);
    int MaxElement=-1;
    for(int i=0;i<v.size();i++)
    {
        MaxElement=max(v[i],MaxElement);
    }
    vector<int> FrequencyArray(MaxElement+1);
    for(int i=0;i<v.size();i++)
    {

        FrequencyArray[v[i]]++;
    }
    for(int i=1;i<=MaxElement;i++)
    {

        FrequencyArray[i]=FrequencyArray[i]+FrequencyArray[i-1];
    }

    for(int i=0;i<=MaxElement;i++)
        cout<<FrequencyArray[i]<<" ";
        cout<<endl;
    vector<int>OutPut(v.size());
    for(int i=v.size()-1;i>=0;i--)
    {
        FrequencyArray[v[i]]--;
        OutPut[FrequencyArray[v[i]]]=v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<OutPut[i]<<" ";
    }
    cout<<endl;


    /// For negative number
    vector<int> arr = { -5, -10, 0, -3, 8, 5, -1, 1000 };
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;
    vector<int>Count(range);
    vector<int>OutPurArray(arr.size());

    for(int i=0;i<arr.size();i++)
    {
        Count[arr[i]-min]++;
    }
    for(int i=1;i<Count.size();i++)
    {
        Count[i]=Count[i]+Count[i-1];
    }
    for(int i=0;i<Count.size();i++)
    {
        cout<<Count[i]<<" ";
    }
    cout<<endl;
    for(int i=arr.size()-1;i>=0;i--)
    {
        Count[arr[i]-min]--;
       // cout<<Count[arr[i]-min]<<endl;
        OutPurArray[Count[arr[i]-min]]=arr[i];
    }

    for(int i=0;i<OutPurArray.size();i++)
        cout<<OutPurArray[i]<<" ";

    return 0;
}
