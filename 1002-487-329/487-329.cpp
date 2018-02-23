#include<iostream>
#include<string>
#include<map>
using namespace std;

void strStd(string& str);
void leaveSampleTel();
void printBook();

map<string, int> telBook;

int main()
{
	map<string, int>::iterator it;
	string str;
	int num = 0;
	cin >> num;
	while(num--) {
		cin >> str;
		strStd(str);

		it = telBook.find(str);
		if (it != telBook.end()) {
			(it->second)++;
		} else {
			telBook.insert(make_pair<string, int>(str, 1));
		}
	}
	leaveSampleTel();
	printBook();
	return 0;
}

//格式化输入
void strStd(string& str)
{
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '-') {
			str.erase(i, 1);
			i--;
			continue;
		}
		if (str[i] >= 'A' && str[i] <= 'C')
			str[i] = '2';
		if (str[i] >= 'D' && str[i] <= 'F')
			str[i] = '3';
		if (str[i] >= 'G' && str[i] <= 'I')
			str[i] = '4';
		if (str[i] >= 'J' && str[i] <= 'L')
			str[i] = '5';
		if (str[i] >= 'M' && str[i] <= 'O')
			str[i] = '6';
		if (str[i] >= 'P' && str[i] <= 'S')
			str[i] = '7';
		if (str[i] >= 'T' && str[i] <= 'V')
			str[i] = '8';
		if (str[i] >= 'W' && str[i] <= 'Y')
			str[i] = '9';
	}
	str.insert(3, "-");
}

//留下相同的电话记录并排序
void leaveSampleTel()
{
	map<string, int>::iterator it = telBook.begin();
	while (it != telBook.end()) {
		if (it->second == 1) {
			telBook.erase(it++);	//map中erase的用法
			continue;
		}
		it++;
	}
}

//格式输出
void printBook()
{
	map<string, int>::iterator it = telBook.begin();
	if (it == telBook.end())
		cout << "No duplicates." << endl;
	for ( ; it != telBook.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
}
