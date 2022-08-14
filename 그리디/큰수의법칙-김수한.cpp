#include <iostream>

using namespace std;

int main()
{
	int N, M, K, result = 0, first = 0, second = 0;

	cin >> N >> M >> K;
	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > second)
		{
			if (arr[i] > first)
			{
				second = first;
				first = arr[i];
				continue;
			}
			second = arr[i];
		}
	}

	for(int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
		{
			result += first;
			i++;
			if (i == M) break;
		}
		if (i == M) break;
		result += second;
	}

	cout << result << "\n";
}