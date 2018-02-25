#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string maya[20] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", 
						"zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet", ""};
string holly[20] = {"ahau", "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", 
						"muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac"};
string strmonth;
string dot;
int days = 0;
int month = 0;
int years = 0;

void stdInput();
void stdOut(int args);
int main()
{
	int num = 0;
	cin >> num;
	cout << num << endl;

	//用dot接收"."
	while ((num--) && (cin >> days >> dot >> strmonth >> years)) {
		stdInput();
		int total = years*365 + month*20 + days + 1;;
		stdOut(total);
	}
	return 0;
}

void stdInput()
{
	for (int i = 0; i < 20; i++) {
		if (strmonth == maya[i]){
			month = i;
			break;
		}
	}
}

void stdOut(int args)
{
	//Holly天数从1开始
	int hYears = args / 260;
	int num = args % 260;
	if (num == 0) {
		hYears -= 1;
		cout << "13 " << "ahau " << hYears << endl;
	} else {
		int hDaysNum =  num % 13;
		if (hDaysNum == 0) {
			hDaysNum = 13;
		}
		cout << hDaysNum << " " << holly[num%20] << " " << hYears << endl;
	}
}
