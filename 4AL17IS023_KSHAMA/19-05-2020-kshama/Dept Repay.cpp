/* question:
Dept Repay
Alice wanted to start a business and she was looking for a venture capitalist. Through her friend Bob, she met the owner of a construction company who is interested to invest in an emerging business. Looking at the business proposal, the owner was very much impressed with Alice's work. So he decided to invest in Alice's business and hence gave a green signal to go ahead with the project. Alice bought Rs.X for a period of Y years from the owner at R% interest per annum. Find the rate of interest and the total amount to be given by Alice to the owner. The owner impressed by proper repayment of the financed amount decides to give a special offer of 2% discount on the total interest at the end of the settlement. Find the amount given back by Alice and also find the total amount. (Note: All rupee values should be in two decimal points).*/
#include<iostream>
using namespace std;
int main()
{
int x,y,r;
double inter,amount,disc,finall;
cin>>x>>y>>r;
inter=(x*y*r)/100;
amount=x+inter;
disc=inter*2/100;
finall=x+inter-disc;
std::cout<<inter<<endl;
std::cout<<amount<<endl;
std::cout<<disc<<endl;
std::cout<<finall;
}