#include<iostream>
#include<algorithm>

#define MAX 100
using namespace std;

bool desc(int a, int b) { //내림차순
	return a > b;
}

int main(void) {
	int N = 0, K = 0, M= 0, sum = 0;
	bool flag = true;
	int arr[MAX] = { 0, };

	cin >> N >> M >> K;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 100, desc); // 내림차순 정렬로 배열 제일 큰 수 0번 2번째 큰 수 1번으로 정렬

	for (int i = 0; i < M; i++) {
		if (flag) { // 아직 K번 더하지 않았을 시 제일 큰 값 더함
			sum += arr[0];
		}
		else {// flag가 false일 시 2번째 큰 값 더함
			sum += arr[1];
			flag = !flag;
		}
		if ((i + 1) % K == 0) { // K번 횟수 이상으로 더할 수 없으므로 K번 나머지 0일 시 false
			flag = !flag;
		}
	}
	cout << sum << "\n"; // 전체 더한 값 출력


}


