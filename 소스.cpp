#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
//������ : ������ �޸� �ּҸ� �����ϴ� ����
	int a = 10;
	int* ptr_a = &a;

	cout << "a�� ��: " << a << endl;
	cout << "a�� �޸� �ּҰ�: " << &a << endl; // �ּҿ�����(&) : reference �ּҰ�
	cout << "ptr_a�� ����� ��: " << ptr_a << endl;
	cout << "ptr_a�� �޸� �ּҰ�: "<<&ptr_a << endl; //�����͵� �ᱹ �����̹Ƿ� �ּҸ� ������.
	cout << "ptr_a�� ����Ű�� ������ ����� ��: " << *ptr_a << endl; // ������������(*) : dereference Ư���ּҿ� ����� �� (Ư���ּҰ� ����Ű�� ������� ����)

	cout << "a�� �� " << *ptr_a << endl;
	
	*ptr_a = 20;
	cout << "a�� �� " << *ptr_a << endl;
	cout << endl;

	int** ptr_ptr = &ptr_a; //�����͸� ����Ű�� ������
	cout << "a= " << a << endl;
	cout << "&a= " << &a << endl;
	cout << "ptr_a= " << ptr_a << endl;
	cout << "&ptr_a= " << &ptr_a << endl;
	cout << "ptr_ptr= " << ptr_ptr << endl;


	return 0;
}
