#include <bits/stdc++.h>
using namespace std;
 
int distinctIds(int arr[], int n, int mi)
{
    unordered_map<int, int> m;
    vector<pair<int, int> > v;
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    
    for (auto it = m.begin(); it != m.end(); it++)
    {
        v.push_back(make_pair(it->second, it->first));
    }
        
    sort(v.begin(), v.end());

    for(auto itr1=v.begin();itr1<v.end();itr1++)
    {
        cout<<itr1->second<<" "<<itr1->first<<endl;
    }
 
    int size = v.size();
 
    for (int i = 0; i < size; i++) {
 
        if (v[i].first <= mi) {
            mi -= v[i].first;
            count++;
        }
 
        else
            return size - count;
    }
    return size - count;
}
 
int main()
{
    int arr[] = { 2, 3, 1, 2, 3, 3,  };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int m = 3;
 
    cout << distinctIds(arr, n, m);
    return 0;
}