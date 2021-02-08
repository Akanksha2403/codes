#include <bits/stdc++.h>

using namespace std;

// vector <int> triplet;

int sieve(bool primesieve[])
{
	int n, counter = 0;
	cin >> n;
	int start = clock();
	vector<int> prime;
	for (auto i = 2; i <= n; i++)
	{
		if (primesieve[i] == 0)
			continue;
		prime.push_back(i);
	}
	int prime_size = prime.size();

	for (int i = 1; i < prime_size; i++)
	{
		if (primesieve[(prime[i] + 2)] && prime[i] + 2 <= n)
		{
			counter += 1;
		}
	}
	cout << counter << endl;
	return 0;
}

int main()
{
	//write your code from here
	int test_case;
	bool primesieve[1000000];
	cin >> test_case;
	//primesieve<start>

	for (int i = 0; i <= 1000000; i++)
	{
		primesieve[i] = true;
	}

	for (int i = 2; i * i <= 1000000; i++)
	{
		if (primesieve[i] == true)
		{
			for (int j = i * i; j <= 1000000; j += i)
			{
				primesieve[j] = false;
			}
		}
	}
	//prime sieve<end>
	while (test_case)
	{
		sieve(primesieve);
		test_case = test_case - 1;
	}

	return 0;
}