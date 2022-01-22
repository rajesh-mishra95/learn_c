#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    vector<int> array;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        array.push_back(el);
    }

    int search;
    cout << "Enter number to be searched: ";
    cin >> search;

    vector<int> A;
    vector<int> B;
    vector<int> C;
    A.reserve(n/2);
    B.reserve(n/2);
    C.reserve(n);

    copy(array.begin(), array.begin() + n/2, back_inserter(A));
    copy(array.begin() + n/2,array.end(), back_inserter(B));

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < n/2; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n/2; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "merge start\n";
    merge(A.begin(), A.end(), B.begin(), B.end(), C.begin());
    cout << "sort start\n";
    sort(C.begin(), C.end());

    cout << "disp start\n";
    for (int i = 0; i < n; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it1, it2, it3;
    it1 = find(A.begin(), A.end(), search);
    it2 = find(B.begin(), B.end(), search);
    it3 = find(C.begin(), C.end(), search);

    if (it1 != A.end()) {
        cout << search << " found in A at pos "
             << it1 - A.begin() << " and in C at pos " << it3 - C.begin();
    }
    else if (it2 != B.end()) {
        cout << search << " found in B at pos "
             << it2 - B.begin() << " and in C at pos " << it3 - C.begin();
    }
    else {
        cout << -1;
    }
    cout << endl;
    return 0;
}