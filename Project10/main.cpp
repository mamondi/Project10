#include "lib.h"

int main(){
	int task;
	cout << "Enter task number: ";
	cin >> task;
	switch (task) {
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	case 5:
		task5();
		break;
	case 6:
		task6();
		break;

	}
}