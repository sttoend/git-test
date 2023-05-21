#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
//포인터 : 변수의 메모리 주소를 저장하는 변수
	int a = 10;
	int* ptr_a = &a;

	cout << "a의 값: " << a << endl;
	cout << "a의 메모리 주소값: " << &a << endl; // 주소연산자(&) : reference 주소값
	cout << "ptr_a에 저장된 값: " << ptr_a << endl;
	cout << "ptr_a의 메모리 주소값: "<<&ptr_a << endl; //포인터도 결국 변수이므로 주소를 가진다.
	cout << "ptr_a가 가리키는 변수에 저장된 값: " << *ptr_a << endl; // 역참조연산자(*) : dereference 특정주소에 저장된 값 (특정주소가 가리키는 변수라고 생각)

	cout << "a의 값 " << *ptr_a << endl;
	
	*ptr_a = 20;
	cout << "a의 값 " << *ptr_a << endl;
	cout << endl;

	int** ptr_ptr = &ptr_a; //포인터를 가리키는 포인터
	cout << "a= " << a << endl;
	cout << "&a= " << &a << endl;
	cout << "ptr_a= " << ptr_a << endl;
	cout << "&ptr_a= " << &ptr_a << endl;
	cout << "ptr_ptr= " << ptr_ptr << endl;


	return 0;
}
