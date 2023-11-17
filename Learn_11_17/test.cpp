#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
//int main()
//{
//	string s1;
//	string s2("Hello,Linux");
//	string s3(s2, 1, 6);
//	string s4 = s2;
//	string s5(s2);
//	string s6(10, '0');
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3<<  endl; 
//	cout << s4 << endl;  
//	cout << s5 << endl;
//	cout << s6 << endl;
//	s1 = 'x';
//	cout << s1 << endl;
//	return 0;             
//}
//int main()
//{
//	string s1("Hello,Linux");
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << " ";
//		//cout << s1.operator[](i) << " ";
//	}
//	cout << endl;
//	int begin = 0;
//	int end = s1.size()-1;
//	//while (begin < end) 
//	/*{
//		char tmp = s1[begin];
//		s1[begin] = s1[end];
//		s1[end] = tmp;
//		++begin;
//		--end;
//	}*/
//	while (begin < end)
//	{
//		swap(s1[begin], s1[end]);
//		++begin;
//		--end;
//	}
//	cout << s1 << endl;
//	//iterator 迭代器 就像是用指针的方式遍历访问
//	//  类似指针
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout  << endl;
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	
//	vector<int>::iterator vit = v.begin();
//	
//	
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	cout << endl;
//	list<double> lt;
//	lt.push_back(1.1);
//	lt.push_back(1.1);
//	lt.push_back(1.1);
//	lt.push_back(1.1);
//	lt.push_back(1.1);
//	lt.push_back(1.1);
//
//	list<double>::iterator lit = lt.begin();
//	while (lit != lt.end())
//	{
//		cout << *lit << " ";
//		++lit;
//	}
//	cout << endl;
//	reverse(s1.begin(), s1.end());
//	cout << s1 << endl;
//	reverse(v.begin(), v.end());
//
//	vit = v.begin();
//	while (vit != v.end())
//	{
//		cout << *vit << " ";
//		++vit;
//	}
//	return 0;
//}
int main()
{
	string s1 = "Hello,Linxu";
	const string s2 = "Hello,Linxu";
	s1[0] = 'x';
	//s2[0] = 'x';
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	string:: const_iterator it2 = s2.begin();
	while (it2 != s2.end())
	{
		cout << *it2 << " ";
		++it2;
	}

	cout << endl;
	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;
	for (auto e : s2)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;

}