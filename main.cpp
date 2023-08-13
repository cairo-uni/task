#include <iostream>
#include <vector>
using namespace std;

// Count sort in linear time.
void countSort(vector<int> &a, int n ) {

    // Get the max num to create an array with size of max
    int max = *max_element(a.begin(), a.end());

    //Initialize another array (represents indicator)
    vector<int> c(max, 0), b(n, 0);

    //Calc frequency of elements
    for (int j = 0; j < n; j++) { c[(a[j]) - 1] += 1; }

    //loop to calc the jth element
    for (int i = 1; i < max; i++) { c[i] += c[i - 1]; }

    // Order step
    for (int j = n - 1; j >= 0; j--) {
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
}

int main() {

     //Unordered list
     vector<int> arr ={ 6 , 1 , 6 , 3 , 2};
     // calling of countSort function
     countSort(arr , arr.size() );

     //            << Printing >>
     //             ------------
     //               --------

     cout<<"Ordered array --> ";
     for(int it : arr) cout<<arr.at(it)<<" "; // 1 2 3 6 6

    return 0;
}
