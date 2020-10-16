#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <string.h>//Khai báo thêm thư viện
/*
 *Trong lập trình C kiểu chuỗi
 *Chuỗi là bao gồm nhiều ký tự mà ký tự trong lập trình là kiểu char
 */
//String string 2 kiểu dữ liệu sẽ được học ở bên JAVA và bên C#
int main()
{
	char c = 'P';
	//Trong lập trình C để lưu được nhiều ký tự cần phải đưa biến Char lên thành mảng Char thì mới có thể lưu trữ được nhiều ký tự
	char thongbao[] = { "Chuc Mung Ban Hoc Lai Mon C" };//Khai báo kiểu mảng char để chứa 1 chuỗi
	//In ra màn hình
	//"%s" dùng để in kiểu chuỗi ra màn hình
	printf("%s", thongbao);

	//Khai báo
	char name[20];
	printf("Moi ban nhap ten:");
	scanf_s("%s", name);
	printf("%s", name);

	// char name[30];
	// printf("Enter name: ");
	// fgets(name, sizeof(name), stdin);  // read string
	// printf("Name: ");
	// puts(name);    // display string
	// return 0;

	// Hàm đo độ dài của chuỗi
	// strlen(truyền 1 mảng ký tự vào) sẽ trả ra 1 giá trị là số nguyên số lượng ký tự trong mảng đó
	// char mon[] = { "JAVA1" };
	// printf("\n So phan tu co trong mang: %d", strlen(mon));

	//Ngoài ra còn 1 số hàm như các hàm so sánh,
}