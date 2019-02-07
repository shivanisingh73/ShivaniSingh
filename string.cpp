#include<iostream>
#include<string>
using namespace std;
int main()
{
	string bucky("Hey this is shivani");
	string s1; 
	string s2;
	s1=bucky;
	s2.assign(bucky);
	cout<<"The string is\n"<<bucky<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
}