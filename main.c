#include <stdio.h>
#include <stdlib.h>

// Viết app nho nhỏ nhập chữ cái đầu trong tên bạn - nhập chữ Hoa sau đó in ra thường

int main(int argc, char *argv[]) {
	char fL;	//first Letter
	printf("Input first letter of your first name: ");
	scanf("%c", &fL);
	
	printf("Your have just input the character: %c \n", fL);
	
	//Đổi hoa sang thường
	fL += 32;
	printf("And it is converted to lowercase as: %c \n", fL);
	printf("And it is converted to lowercase as\t\t\t: %c \n", fL);
	return 0;
}