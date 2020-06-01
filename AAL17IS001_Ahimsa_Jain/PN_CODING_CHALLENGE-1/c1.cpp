
4.	Solve the challenge where,
You are given a  2D array. An hourglass in an array is a portion shaped like this:
a b c
d
e f g
For example, if we create an hourglass using the number 1 within an array full of zeros, it may look like this:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
Actually, there are many hourglasses in the array above. The three leftmost hourglasses are the following:
1 1 1     1 1 0     1 0 0
  1         0         0
1 1 1     1 1 0     1 0 0
The sum of an hourglass is the sum of all the numbers within it. The sum for the hourglasses above are 7, 4, and 2, respectively.
In this problem you have to print the largest sum among all the hourglasses in the array.
Input Format
There will be exactly  lines, each containing  integers separated by spaces. Each integer will be between  and  inclusive.
Output Format
Print the answer to this problem on a single line

#include<bits/stdc++.h>
using namespace std;
int main(){

    int ar[10][10],maxSum = -36985247;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)cin >> ar[i][j];
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(j+2 < 6 && i+2 < 6 ){
                int sum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                if(sum > maxSum)maxSum = sum;
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
© 2020 GitHub, Inc.