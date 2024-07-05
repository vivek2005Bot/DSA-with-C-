#include<bits/stdc++.h>

using namespace std;


vector<int> nextper(vector<int>& A) {
    int n = A.size();
    int k = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            k = i;
            break;
        }
    }

    if (k == -1) {
        reverse(A.begin(), A.end());
    } else {
    
        for (int i = n - 1; i > k; i--) {
            if (A[i] > A[k]) {
                l = i;
                break;
            }
        }

        swap(A[k], A[l]);
        reverse(A.begin() + k + 1, A.end());
    }
    return A;
}

int main() {
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextper(A);
    
    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]" << endl;
    
    return 0;
}