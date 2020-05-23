01. Write a C++ program to check Amstrong number


#include <iostream>  
using namespace std;  
int main()  
{  
	int n,r,sum=0,temp;    
	cout<<"Enter the Number=  ";    
	cin>>n;    
	temp=n;    
	while(n>0)    
	{    
		r=n%10;    
		sum=sum+(r*r*r);    
		n=n/10;    
	}    
	if(temp==sum)    
		cout<<"Armstrong Number."<<endl;    
	else    
		cout<<"Not Armstrong Number."<<endl;   
	return 0;  
}





02. Write a program to matrix multiplication



#include <iostream>  
using namespace std;  
int main()  
{  
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
	cout<<"enter the number of row=";    
	cin>>r;    
	cout<<"enter the number of column=";    
	cin>>c;    
	cout<<"enter the first matrix element=\n";    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			cin>>a[i][j];  
		}    
	}    
	cout<<"enter the second matrix element=\n";    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			cin>>b[i][j];    
		}    
	}    
	cout<<"multiply of the matrix=\n";    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			mul[i][j]=0;    
			for(k=0;k<c;k++)    
			{    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}    
    	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			cout<<mul[i][j]<<" ";    
		}    
		cout<<"\n";    
	}    
	return 0;  
}    






03. Write a C++ program to generate a Fibonacci series



#include <iostream>  
using namespace std;  
int main()  
{  
  	int a=0,b=1,i,c,n,j;    
    	cout<<"Enter the limit: ";    
    	cin>>n;    
    	for(i=1; i<=n; i++)    
    	{    
       		a=0;    
        	b=1;    
        	cout<<b<<"\t";   
        	for(j=1; j<i; j++)    
        	{    
            		c=a+b;    
          		cout<<c<<"\t";    
            		a=b;    
            		b=c;  
        	}    
        	cout<<"\n";    
    	}    
	return 0;  
}






04. Write a C++ program to calculate the number of vowels, consonants, digits and white spaces



#include <iostream>
using namespace std;
int main()
{
    	char line[150];
    	int vowels, consonants, digits, spaces;
	vowels =  consonants = digits = spaces = 0;
	cout << "Enter a line of string: ";
   	cin.getline(line, 150);
    	for(int i = 0; line[i]!='\0'; ++i)
    	{
        	if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           	line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           	line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           	line[i]=='U')
        	{
            		++vowels;
        	}
       		else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        	{
            		++consonants;
        	}
        	else if(line[i]>='0' && line[i]<='9')
        	{
            		++digits;
        	}
        	else if (line[i]==' ')
        	{
            		++spaces;
        	}
    	}
	cout << "Vowels: " << vowels << endl;
   	cout << "Consonants: " << consonants << endl;
    	cout << "Digits: " << digits << endl;
    	cout << "White spaces: " << spaces << endl;
	return 0;
}






05. Write C++ program to print a Floyd's triangle



#include <iostream>
using namespace std; 
int main()
{
    	int rows, num = 1;
 	cout << "Enter number of rows: ";
    	cin >> rows;
    	for(int i = 1; i <= rows; i++)
    	{
        	for(int j = 1; j <= i; j++)
        	{ 
            		cout << num << " ";
            		num++;
        	}
        	cout << endl;
    	}
 	return 0;
}