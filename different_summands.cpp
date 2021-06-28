#include <iostream>
#include <vector>

using std::vector;

double optimal_summands(int n)
{
  int size;
  if (n == 0)
  {
    std::cout << n << "\n";
    std::cout << n;
    return 0;
  }
  if (n <= 2 && n > 0)
  {
    size = 1;
    std::cout << size << "\n";
    std::cout << n;
    return 0;
  }
  /* if(n>=3&&n<=5)
  {size=2;
    std::cout<<size<<"\n";
    std::cout<<1<<" ";
    n--;
    std::cout<<n;
   
  }
  if(n>5)
  {size=3;
    double arr[size];
    std::cout<<size<<"\n";
    arr[0]=1;n--;
    arr[1]=n-(n-2); n= n-2;
    arr[2]=n;
    for(int i=0;i<3;i++)
    std::cout<<arr[i]<<' ';
    return 0;
  }*/
  int x=n;
  double arr[n];
  for (int i = 1; i < n; i++)
  {
    if (n == 0)
      break;
    else
    {
      n = n - (n - i);
      arr[i] = n;
    }
  }
  std::cout << 3 << "\n";
  for (int i = 1; i < x; i++)
    std::cout << arr[i] <<' ';

  return 0;
}

int main()
{
  double n;
  std::cin >> n;
  /*vector<double> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }*/
  optimal_summands(n);
  return 0;
}
