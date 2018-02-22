#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
string s, a, b;//输入字符串，乘数，被乘数
int n, l;//幂，小数点位置
void init(){
	l = s.find('.');
	if (l >= 0) {
		s.erase(l, 1);
		l = (s.length() - l)*n;
	}
	reverse(s.begin(), s.end());
}
void multiply(){
	for (int i = 0; i < a.length(); ++i)
	for (int j = 0; j < b.length(); ++j){
		s[i + j] += (a[i] - 48)*(b[j] - 48);
		s[i + j + 1] += s[i + j] / 10;
		s[i + j] %= 10;
	}
	for (int i = 0; i < s.length(); ++i)s[i] += '0';
}
void calculate(){
	a.assign(s);
	while (--n){
		b.assign(s);
		s = string(a.length() + b.length(), 0);
		multiply();
	}
	reverse(s.begin(), s.end());
}
void printout(){
	if (l >= 0)
		s.insert(s.length() - l, ".");
	int start = 0, end = s.length() - 1;
	while (s[start] == '0')++start;
	while (s[end] == '0')--end;
	s = s.substr(start, end - start + 1 - (s[end]=='.'));
	cout << s << endl;
}
int main(){
	while (cin >> s >> n) {
		init();
		calculate();
		printout();
	}
	return 0;
}
