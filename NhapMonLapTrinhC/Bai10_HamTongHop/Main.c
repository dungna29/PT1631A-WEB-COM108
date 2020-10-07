#include <stdio.h>
//Hàm không trả về có tham số
void inRaNam(int nam)
{
	printf("Nam ban vua nhap vao la: %d \n", nam);
}
int nam(int nam)
{
	return nam;
}
int main()
{
	// printf("Nam ban vua nhap vao la: %d", 2020);
	// printf("Nam ban vua nhap vao la: %d", 2020);
	// printf("Nam ban vua nhap vao la: %d", 2020);
	// printf("Nam ban vua nhap vao la: %d", 2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	inRaNam(2020);
	//--------------------------In ra hàm trả ve cũng là nam
	printf("Nam ban vua nhap vao la: %d", nam(2020));
}