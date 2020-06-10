Question:
Find the row with maximum number of 1s?
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
Example
Input matrix
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0
*/

#include <bits/stdc++.h> 
using namespace std; 
#define R 4  
#define C 4  
  
 
int first(bool arr[], int low, int high)  
{  
    if(high >= low)  
    {  
        int mid = low + (high - low)/2;  
        if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)  
            return mid;  
        else if (arr[mid] == 0)  
            return first(arr, (mid + 1), high);  
        else
            return first(arr, low, (mid -1));  
    }  
    return -1;  
}  
  

int rowWithMax1s(bool mat[R][C])  
{  
    
    int max_row_index = 0, max = -1;  
  
    int i, index;  
    for (i = 0; i < R; i++)  
    {  
        index = first (mat[i], 0, C-1);  
        if (index != -1 && C-index > max)  
        {  
            max = C - index;  
            max_row_index = i;  
        }  
    }  
  
    return max_row_index;  
}  

int main()  
{  
    bool mat[R][C] = { {0, 0, 0, 1},  
                    {0, 1, 1, 1},  
                    {1, 1, 1, 1},  
                    {0, 0, 0, 0}};  
  
    cout << "Index of row with maximum 1s is " << rowWithMax1s(mat);  
  
    return 0;  
}