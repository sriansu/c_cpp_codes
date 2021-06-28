#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here

    Difference(vector<int> a)
    {
        elements = a;
    }

    void computeDifference()
    {
        // int n=elements.size();
        int min = INT8_MAX;
        int max = INT8_MIN;

        for (int i = 0; i < elements.size(); ++i)
        {
            if (elements[i] < min)
            {
                min = elements[i];
            }
            if (elements[i] > max)
            {
                max = elements[i];
            }
        }
        maximumDifference = abs(max - min);
    }

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}