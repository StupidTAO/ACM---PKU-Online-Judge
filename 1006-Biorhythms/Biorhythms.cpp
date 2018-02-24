#include<iostream>
#include<vector>
using namespace std;

int p = 0, e = 0, i = 0, d = 0;
int calculate();
void stdOut(int num, int days);

int main()
{
	int days = 0, num = 1;
	while (cin >> p >> e >> i >> d) {
		if ((p == -1) && (e == -1) && (i == -1) && (d == -1)) {
			break;
		}
		days = calculate();
		stdOut(num, days-d);
		num++;
	}
	return 0;
}

int calculate()
{
	int num = 0;
	for (num = d+1; num < 21252-d; num++) {
		if (((num-p)%23 == 0) && ((num-e)%28 == 0) && ((num-i)%33 == 0) ) {
			break;
		}
	}
	return num ;
}

void stdOut(int num, int days)
{
	cout << "Case " << num << ": the next triple peak occurs in " << days << " days." << endl;
}
