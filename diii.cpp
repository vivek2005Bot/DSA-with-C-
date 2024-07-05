#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> dii(vector<int>& arr) {
    int MaxElement = *max_element(arr.begin(), arr.end());
    int sum = 0;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == MaxElement) {
            ans.push_back(arr[i]);
            return ans; 
        }
        else if (sum < MaxElement) {
            ans.push_back(arr[i]);
        }
    }
    return ans; 
}

int main() {
    vector<int> arr = {5, 5, 11, 1};

    
    vector<int> result = dii(arr);

    // Print the result
    cout << "Output: [ ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}