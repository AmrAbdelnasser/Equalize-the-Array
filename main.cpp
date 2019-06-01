#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int i=0;
    int max_num_reps = 0;
    while(i < arr.size())
    {
        auto it1 = lower_bound(arr.begin(), arr.end(), arr[i]);
        auto it2 = upper_bound(arr.begin(), arr.end(), arr[i]);
        max_num_reps=max(max_num_reps, (it2-it1));
        i+=(it2-it1);
    }
    return arr.size()-max_num_reps;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    cout<<equalizeArray(arr)<<endl;
    return 0;
}
