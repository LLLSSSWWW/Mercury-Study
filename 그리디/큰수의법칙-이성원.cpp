#include<iostream>
#include<algorithm>

#define MAX 100
using namespace std;

bool desc(int a, int b) { //��������
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

	sort(arr, arr + 100, desc); // �������� ���ķ� �迭 ���� ū �� 0�� 2��° ū �� 1������ ����

	for (int i = 0; i < M; i++) {
		if (flag) { // ���� K�� ������ �ʾ��� �� ���� ū �� ����
			sum += arr[0];
		}
		else {// flag�� false�� �� 2��° ū �� ����
			sum += arr[1];
			flag = !flag;
		}
		if ((i + 1) % K == 0) { // K�� Ƚ�� �̻����� ���� �� �����Ƿ� K�� ������ 0�� �� false
			flag = !flag;
		}
	}
	cout << sum << "\n"; // ��ü ���� �� ���


}


