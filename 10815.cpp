//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<sstream>
using namespace std;
set<string> ss;
string to_standard(string a)
{
	for (int i = 0; i < a.length(); i++)
	{
		if (isalpha(a[i])) a[i] = tolower(a[i]);
		else a[i] = ' ';
	}
	return a;
}
int main()
{
	string s,buf;
	while (cin >> s)
	{
		s=to_standard(s);
		//cout << s << endl;
		stringstream sss(s);
		while(sss>>buf)
			ss.insert(buf);
	}
	for (set<string>::iterator it = ss.begin(); it != ss.end(); ++it)
		cout << *it << endl;
	//system("PAUSE");
	return 0;
}
