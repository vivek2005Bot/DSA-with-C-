#include <iostream>
using namespace std;

void printNumbers(int i,int n) {
    if (i<=n) {
        
        printNumbers(i+1,n); // Recursive call to print numbers from n-1 to 1
        cout << i << " ";  // Print the current number
    }
}

int main() {
    int limit = 5;
    int start=1;
    cout << "First " << limit << " numbers: ";
    printNumbers(start,limit);
    cout << endl;
    return 0;
}
