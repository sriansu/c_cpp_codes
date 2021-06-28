#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using std::string;
using std::vector;

bool is_greater_or_equal(string digit, string max_digit)
{
	char first = digit.at(0);
	char second = max_digit.at(0);

	if (first == second && digit.length() > max_digit.length())
		return false;

	if (first >= second)
		return true;
	else
		return false;
}

string largest_number(vector<string> digits)
{
	string ans = "";
	while (!digits.empty())
	{
		string max_digit = "0";
		auto it = digits.begin();
		vector<string>::iterator remove;
		while (it != digits.end())
		{
			if (is_greater_or_equal(*it, max_digit))
			{
				max_digit = *it;
				remove = it;
			}
			it++;
		}
		ans = ans + max_digit;
		digits.erase(remove);
	}
	return ans;
}

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	int n;
	std::cin >> n;
	vector<string> a(n);
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cin >> a[i];
	}
	std::cout << largest_number(a);
}
