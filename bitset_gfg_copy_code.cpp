#include <bits/stdc++.h>
using namespace std;

#define M 32

int main()
{

	bitset<M> bset1;
	bitset<M> bset2(20);

	bitset<M> bset3(string("1100"));

	cout << bset1 << endl; // 00000000000000000000000000000000
	cout << bset2 << endl; // 00000000000000000000000000010100
	cout << bset3 << endl; // 00000000000000000000000000001100
	cout << endl;

	bitset<8> set8; // 00000000

	set8[1] = 1;	   // 00000010
	set8[4] = set8[1]; // 00010010
	cout << set8 << endl;

	int numberof1 = set8.count();

	int numberof0 = set8.size() - numberof1;

	cout << set8 << " has " << numberof1 << " ones and "
		 << numberof0 << " zeros\n";

	cout << "bool representation of " << set8 << " : ";
	for (int i = 0; i < set8.size(); i++)
		cout << set8.test(i) << " ";

	cout << endl;

	if (!set8.any())
		cout << "set8 has no bit set.\n";

	if (!bset1.any())
		cout << "bset1 has no bit set.\n";

	if (!bset1.none())
		cout << "bset1 has some bit set\n";

	cout << set8.set() << endl;

	cout << set8.set(4, 0) << endl;

	cout << set8.set(4) << endl;

	cout << set8.reset(2) << endl;
	cout << set8.reset() << endl;

	cout << set8.flip(2) << endl;
	cout << set8.flip() << endl;

	int num = 100;
	cout << "\nDecimal number: " << num
		 << " Binary equivalent: " << bitset<16>(num);

	return 0;
}
