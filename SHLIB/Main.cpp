#include "Library.h"
#include "Book.h"
#include "Admin.h"
#include "Student.h"

int main(void) {

	Library lib;

	while (lib.getCurrent_menu() != 3) { // �ý��� ���ᰡ �ƴҶ� ���� ���
		lib.startMenu();
	}

	return 0;
}



/*

Library -> ���۰� ���ÿ� ��ü library �� �����ϴ� class
Book -> å�� ���� ������ ����ִ� class
User -> Admin �� Student�� �θ� Ŭ����
Admin -> �����ڷ� ���ӵ����� �����Ǵ� Ŭ����
Student -> �л����� ���������� �����Ǵ� Ŭ����

*/