
#include <iostream>
using namespace std;

int main()
{
	string cardNum;
	string prefix = "4";
	cout << "Write your card number: ";
	cin >> cardNum;
	cout <<endl;
	x:
	if (cardNum[0] == '4') {
		if (cardNum.size()==12)
		{
			cout << "your card correct";

		}
		else
		{
			cout << "You write card incorrect,try again :";
			cin >> cardNum;
			cout << endl;
			goto x;
		}
	}
	else
	{
		cout << "Card number must start from number 4,try again:";
		cin >> cardNum;
		cout << endl;
		goto x;
	}
}
