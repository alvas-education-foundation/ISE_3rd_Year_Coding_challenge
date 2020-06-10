1.Some problems appear hard though they are very easy. Today Aakash is stuck in a range query problem. He has been given an array with only numbers 0 and 1. There are two types of queries -

0 L R : Check whether the number formed from the array elements L to R is even or odd and print EVEN or ODD respectively. Number formation is the binary number from the bits status in the array L to R

1 X : Flip the Xth bit in the array

Indexing is 1 based

Input
First line contains a number N and Q as input. Next line contains N space separated 0 or 1. Next Q lines contain description of each query

Output
Output for only query type 0 L R whether the number in range L to R is "EVEN" or "ODD" (without quotes).

Constraints
1≤ N ≤ 10^6
1≤ L ≤ R ≤ 10^6
1≤ Q ≤ 10^6

1≤ X ≤ N

SAMPLE INPUT 
5 2
1 0 1 1 0
1 2
0 1 4
SAMPLE OUTPUT 
ODD

#include<iostream>

using namespace std;

int main()

{

    int n,q=0,l=0,r=0,x=0,pos;

    cin>>n>>q;

     int arr[n];

    

    for(int i=0;i<n;i++)

    {

        cin>>arr[i];

    }

    while(q)

    {

        cin>>x;

        if(x==0)

        {

            cin>>l>>r;

            if(arr[r-1]==0)

            {

                cout<<"EVEN\n";

                

            }

            else{

                cout<<"ODD\n";

                

            }

        }

        else

        {

            cin>>pos;

            if(arr[pos-1]==1)

            {

                arr[pos-1]=0;

            }

            else{

                arr[pos-1]=1;

            }

        }

        q--;

    }

}