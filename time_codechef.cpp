#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// your code goes here
	int n;
	int vid;
	int hrs = 0, min;
	int temp;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int x = 0, sum = 0;
		std::cin >> vid;

		for (int j = 1; j <= vid; j++)
		{
			std::cin >> temp;
			sum = sum + temp;
		}

		if (sum > 1440)
			std::cout << "-1" << endl;
		/* else
	     {   
	        x=1440-sum;
	        hrs=x/60;
            min=x%60;

	        
	        std::cout<<hrs<<" "<<min<<endl;
	         
	     }*/
		else
		{
			x = 1440 - sum;
			while (x >= 60)
			{
				x = x - 60;
				hrs++;
			}
			min = x;
			std::cout << hrs << " " << min << endl;
		}
	}
	return 0;
}
