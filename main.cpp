#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;
int main()
	{
	BMI f;
	float H,M,a;
	string x;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	if(!outFile)
		{
		cerr<<"Failed opning"<<endl;
		exit(1);
		}
	outFile<<"BMI"<<"\t"<<"Category"<<endl<<"--------------------"<<endl;
	while(inFile>>H>>M)
		{
		if(H==0&&M==0)
			break;
		f.seth(H);
		f.setm(M);
		a=f.cul();
		x=f.com(a);
		outFile<<a<<"\t"<<x<<endl;
		}
	return 0;
	}
