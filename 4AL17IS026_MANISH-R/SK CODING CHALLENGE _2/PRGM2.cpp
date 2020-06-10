Question:
You are given an array of  integers,a ,a[]= {1,2,3,4,,5,6….k} and a positive integer, k. Find and print the number of  pairs(i,j) where i<j  and  a[i]+ a[j] is divisible by k.
Function Description
Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.
divisibleSumPairs has the following parameter(s):
n: the integer length of array a
a: an array of integers
k: the integer to divide the pair sum by
Input format
The first line contains  2 space-separated integers, n  and k . 
The second line contains  n space-separated integers describing the values of array a.
Output Format
Print the number of  pairs (i,j) where I<j and a[i]+a[j] is evenly divisible by k .
Constraint:
n=[2 to 100]
k=[1 to 100]
a[i]=[ 1 to 100]

using namespace std;
int main(){
   
   int n;
   int k;
   cin >> n >> k;
   int a[n];
   int m[k];
   for(int i=0; i<k; i++)
       m[i]=0;
    for(int i = 0; i < n; i++){
       cin >> a[i];
        m[a[i]%k]++;
    }
    int sum=0;
    sum+=(m[0]*(m[0]-1))/2;
     for(int i=1; i<=k/2 && i!=k-i; i++){
         sum+=m[i]*m[k-i];
     }
    if(k%2==0)
        sum+=(m[k/2]*(m[k/2]-1))/2;
    cout<<sum;
    return 0;
}