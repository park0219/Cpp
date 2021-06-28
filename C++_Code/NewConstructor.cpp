#include <iostream>
#include <stdlib.h>
using namespace std;

class Object {
public:
	Object() {
		cout << "생성자 실행!" << endl;
	}
};

int main(void) {
	cout << "malloc을 사용한 객체 생성" << endl;
	Object *ptr1 = (Object *)malloc(sizeof(Object) * 1);

	cout << "new를 사용한 객체 생성" << endl;
	Object *ptr2 = new Object;

	cout << endl << "코드 실행 종료" << endl;
	free(ptr1);
	delete ptr2;
	return 0;
}