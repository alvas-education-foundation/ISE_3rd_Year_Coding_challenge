
/*Given a set of arrays of size N and an integer K, 
you have to find the maximum integer for each and every contiguous subarray of size K for each of the given arrays.*/

//STL Dequeue
#include <iostream>
#include <deque> 
using namespace std;

int max(deque<int> myDeque){
    
    int maximo = myDeque[0];
    for (int i=0; i<myDeque.size(); i++){
        if(maximo<myDeque[i]){
            maximo = myDeque[i];
        }
    }
    return maximo;
}

void printKMax(int arr[], int n, int k)
{
    deque<int> myDeque;
    int maxactual;
    for (int i=0; i < k; i++)
    {
        myDeque.push_back(arr[i]);        
    }
    maxactual=max(myDeque);
    cout << maxactual<< " ";
    for(int i=0; i<n-k; i++)
    {
        if(maxactual!= myDeque.front() && maxactual > arr[i+k]){
            cout << maxactual << " ";
            myDeque.pop_front();
            myDeque.push_back(arr[i+k]);
        }
        else if(maxactual!= myDeque.front() && maxactual < arr[i+k]){
            maxactual = arr[i+k];
            cout << maxactual << " ";
            myDeque.pop_front();
            myDeque.push_back(arr[i+k]);
        }
        else{
            myDeque.pop_front();
            myDeque.push_back(arr[i+k]);
            maxactual =  max(myDeque);
            cout << maxactual << " ";
        }
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}