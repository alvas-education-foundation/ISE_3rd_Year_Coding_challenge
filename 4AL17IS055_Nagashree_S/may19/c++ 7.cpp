//Consider an -element array, , where each index  in the array contains a reference to an array of  integers (where the value of  varies from array to array). See the Explanation section below for a diagram.
Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array  and  denotes an index in the array located at . For each query, find and print the value of element  in the array at location  on a new line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // create 2D array
    int** a = new int*[n]();

    // fill 2D array with 1D subarrays
    for (int i = 0; i < n; i++) {
        // get the length of the 1D array at a[i]
        int k;
        cin >> k;

        // create the 1D subarray with the given length
        int* i_arr = new int[k]();

        // fill the subarray with k values
        for (int j = 0; j < k; j++) {
            cin >> i_arr[j];
        }

        // store the subarray in a
        a[i] = i_arr;
    }

    // run queries on a
    for (int q_num = 0; q_num < q; q_num++) {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    // delete 2D array (each subarray must be deleted)
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
