#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int i,k,count=0;
	string ch;
	getline(cin, ch);
	//for(i=0;ch[i]!='\0';i++)
	//k=i;
	
	for(i=0;i<ch.size();i++)
	{
	    if(ch[i]==32)
	    count++;
	}
	cout<<ch.size()<<"\n";
	cout<<count<<"\n";
	return 0;
}
