#include <iostream>
#include <stdlib.h>
using namespace std;

class Object {
public:
	Object() {
		cout << "������ ����!" << endl;
	}
};

int main(void) {
	cout << "malloc�� ����� ��ü ����" << endl;
	Object *ptr1 = (Object *)malloc(sizeof(Object) * 1);

	cout << "new�� ����� ��ü ����" << endl;
	Object *ptr2 = new Object;

	cout << endl << "�ڵ� ���� ����" << endl;
	free(ptr1);
	delete ptr2;
	return 0;
}