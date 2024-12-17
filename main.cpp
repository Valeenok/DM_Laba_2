#include <iostream>
#include <cmath>
using namespace std;

void printSubset(const int* set, int n) {
    int totalSubsets = pow(2, n);

    for (int i = 0; i < totalSubsets; i++) {
        cout << "{";
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                if (count > 0) {
                    cout << ", ";
                }
                cout << set[j];
                count++;
            }
        }
        cout << "}" << endl;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "All subsets of the set A = {1, 2, 3, 4}:" << endl;
    printSubset(A, n);

    return 0;
}