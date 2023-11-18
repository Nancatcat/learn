#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//void func(const string& s)
//{
//	//string::const_reverse_iterator rs1 = s.rbegin();
//	auto rs1 = s.rbegin();
//	while (rs1 != s.rend())
//	{
//		cout << *rs1 << " ";
//		++rs1;
//	}
//	cout << endl;
//}
//int main()
//{
//	string s1("hello,Linux");
//	cout << s1 << endl;
//	string::iterator ps1 = s1.begin();
//	while (ps1 != s1.end())
//	{
//		cout << *ps1 << " ";
//		++ps1;
//	}
//	cout << endl;
//	for (auto e : s1)
//	{
//		cout << e << " ";
//		e++;
//	}
//	cout << endl;
//	func(s1);
//	string::reverse_iterator rs1 = s1.rbegin();
//	while (rs1 != s1.rend())
//	{
//		cout << *rs1 << " ";
//		++rs1;
//	}
//	cout << endl;
//	cout << s1.size() << endl;
//	cout << s1.length() << endl;
//	cout << s1.empty() << endl;
//	string s2;
//	string s3("Hello,C++");
//	cout << s2.max_size() << endl;
//	cout << s3.max_size() << endl;
//	//reverse  ÄæÖÃ
//	//reserve  À©ÈÝ
//	//s1.reserve(s1.max_size()); 
//	return 0;
//}
//int main()
//{
//	try
//	{
//		string s2;
//		string s3("Hello,C++");
//		cout << s2.max_size() << endl;
//		cout << s3.max_size() << endl;
//		//reverse  ÄæÖÃ
//		//reserve  À©ÈÝ
//		s2.reserve(s2.max_size()); 
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}
//int main()
//{
//	try
//	{
//		string s2;
//		string s3("Hello,C++++++++++++++++++++++++++++");
//		cout << s2.capacity() << endl;
//		//²»¼ÆËã"\0";
//		cout << s3.capacity() << endl;
//		s2.reserve(500);
//		//reverse  ÄæÖÃ
//		//reserve  À©ÈÝ 
//		size_t old = s2.capacity();
//		for (size_t i = 0; i < 111; i++)
//		{
//			s2.push_back('x');
//			if (old != s2.capacity())
//			{
//				cout << s2.capacity() << endl;
//				old = s2.capacity();
//			}
//		}
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}

//i



int main()
{
	string s1("abcdeabcd");
	int count[26] = { 0 };
	for (auto ch : s1)
	{
		count[ch - 'a']++;
	}
	for (size_t i = 0; i < s1.size(); ++i)
	{
		if (count[s1[i] - 'a'] == 1)
		{
			cout << s1[i] << endl;
			break;
		}
	}

	return 0;
}




