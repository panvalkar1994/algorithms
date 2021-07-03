/*
Dutch National Flag Algorithm: In this problem we are given an array of size n and the values inside the array will be 0, 1 or 2. We need to sort this array with the following conditions:
    1. All 0's , 1's and 2's should be together, i.e. 0,0,0,1,1,2,2
    2. This sort should be of O(n)
    3. Extra memory O(1)
*/



#include<bits/stdc++.h>
using namespace std;

void printDnf(vector<int>& v)
{
    int low=0, mid=0, high=v.size()-1;
    while(mid<high){
        switch (v[mid])
        {
        case 0:
            swap(v[mid], v[low]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(v[mid], v[high]);
            high--;
            break;
        
        default:
            break;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    
    printDnf(v);
    
}