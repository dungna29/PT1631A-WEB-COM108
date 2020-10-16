#include <stdio.h>
int main()
{
	char str1[20], str2[30];
	printf("Nhap ten: ");
	//Cách 1
	//scanf_s("%s", &str1, 20);

	//Cách 2
	//fgets(str1, 20, stdin);

	//Cách 3
	scanf_s("%[^\n]", str1, 20);
	printf("Your name is %s\n", str1);

	//--------------------------Bài mẫu nhập mảng động
	const int SIZE = 100;//Khai báo kích thước mảng mặc định



}




