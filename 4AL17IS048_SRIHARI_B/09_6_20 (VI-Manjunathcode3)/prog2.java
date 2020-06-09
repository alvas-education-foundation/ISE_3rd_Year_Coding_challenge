class prog2  
{ 

    //method for checking prime number
    static int checkPrime(int num) 
    { 
	int i, flag = 0; 
	for(i = 2; i<= num / 2; i++) 
	{ 
	   if(num % i == 0) 
	   { 
	       flag = 1; 
	       break; 
	   } 
	} 

	/* If flag value is 0 then the given number num
	 * is a prime number else it is not a prime number
	 */
	if(flag == 0) 
	   return 1; 
	else
	   return 0; 
    } 

    //Method for printing alternate prime numbers
    static void printAltPrime(int n) 
    { 
	/* When the temp value is odd then we are
	 * not printing the prime number and when it is
	 * even then we are printing it, this way we are
	 * displaying alternate prime numbers
	 */
	int temp = 2; 

	for(int num = 2; num <= n-1; num++) 
	{ 
	   //checking each number whether it is prime or not
	   if (checkPrime(num) == 1) 
	   {  
		// if temp is even then only print the prime number
		if (temp % 2 == 0) 
		   System.out.print(num + " "); 

		temp ++; 
	   } 
	} 
    } 

    public static void main(String[] args)  
    { 
	int num = 20; 
	System.out.print("Alternate prime numbers upto " + num+" are: ");  
	printAltPrime(num); 
    } 
}