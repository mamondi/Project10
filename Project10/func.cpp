#include "lib.h"


void task1(){
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int *arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	int min = arr[0], max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	delete[] arr;
	
}
void task2() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int *arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n / 2; i++) {
		int tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
}
void task3() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int *arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	int count = 0;
	for (int i = 0; i < n; i++) {
		bool isPrime = true;
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) count++;
	}
	cout << "Count of prime numbers: " << count << endl;
	delete[] arr;
}

void task4() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int *arr = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) max = arr[i];
	}
	cout << "Max: " << max << endl;
	delete[] arr;
}
void task5() {
	int n, m;
	cout << "Enter the number of rows: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int max = arr[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	cout << "Max: " << max << endl;
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
void task6() {
	int n, m, k;
	cout << "Enter the number of rows: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;
	cout << "Enter the number of layers: ";
	cin >> k;
	int ***arr = new int**[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int*[m];
		for (int j = 0; j < m; j++) {
			arr[i][j] = new int[k];
		}
	}
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		cout << "Layer " << i + 1 << endl;
		for (int j = 0; j < m; j++) {
			for (int l = 0; l < k; l++) {
				arr[i][j][l] = rand() % 100;
				cout << arr[i][j][l] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	int max = arr[0][0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int l = 0; l < k; l++) {
				if (arr[i][j][l] > max) max = arr[i][j][l];
			}
		}
	}
	cout << "Max: " << max << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			delete[] arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
}
