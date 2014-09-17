#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool IsPalindromicSequence(string s);

int main()
{
	string s;
	cin>>s;
	bool flag=isPs(s);
	cout<<flag<<endl;
	return 0;
} 

bool  IsPalindromicSequence(string s){
	int len=s.size();
	if (len<=1) return false;
	int i=0,j=len-1;
	while(s[i++]=s[j--]) {
	if(i>=j) return true;
	}
	return false;
}