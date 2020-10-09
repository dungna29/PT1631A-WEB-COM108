#include <stdio.h>
/*
 * P2. Lệnh lặp Do While
 * Lặp đi lặp lại 1 công việc nào đấy
 * Đối với Do While công việc cần lặp lại sẽ được lặp ít nhất là 1 lần
 */
int main()
{
	//Cách gọi lệnh Gõ từ khóa do + Ctrl + Space + Enter
	// do
	// {
	// 	//Được chạy ít nhất là 1 lần
	// }
	// while (<Điều kiện phải luôn đúng thì sẽ chạy lặp lại lần 2);
	
	//Nếu điều kiện trong While mà sai thì vòng lặp sẽ không chạy
	while (2>3)
	{
		int a;
		printf("Moi ban nhap vao 1 nam: ");
		scanf_s("%d", &a);
		printf("Nam ban vua nhap vao: %d\n", a);
	}
	
	//Đối với do thì điều kiện While ở dưới có sai thì vẫn chạy ít nhất là 1 lần
	// do
	// {
	// 	int a;
	// 	printf("Moi ban nhap vao 1 nam: ");
	// 	scanf_s("%d", &a);
	// 	printf("Nam ban vua nhap vao: %d\n", a);
	// }
	// while (2>3);
	//Đối với do while các bạn có thể dùng điều kiện để ngắt vòng lặp như là While

	int input;
	do
	{
		
		printf("Moi ban nhap vao 1 nam: ");
		scanf_s("%d", &input);
		printf("Nam ban vua nhap vao: %d\n", input);
	}
	while (input != 89);//Tùy biến điều kiện dựa trên toán tử
}