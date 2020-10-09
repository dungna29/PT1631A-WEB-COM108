#include <stdio.h>
/*
 * P1. Vòng lặp
 * Lặp đi lặp lại 1 công việc nào đấy
 */
int main()
{
	/*
	 * 1. Vòng lặp While(true)
	 */
	// while (<Điều kiệu phải đúng thì mới chạy>)
	// {
	// 	Thực hiện lặp lại 1 công việc nào đấy mà lập trình viên muốn
	// }
	//Nếu vòng lặp không có điểm dừng lại thì nó được gọi là vòng lặp vô hạn
	// while (5>3)//(5>3) luôn đúng 
	// {
	// 	int a;
	// 	printf("Moi ban nhap vao 1 nam: ");
	// 	scanf_s("%d", &a);
	// 	printf("Nam ban vua nhap vao: %d\n", a);
	// }
	// Thiết kế điểm ngắt vòng lặp bằng câu lệnh break
	int dk = 0;//Khai báo 1 biến tạm bắt đầu giá trị bằng 0
	//Cách 1: Dùng break
	while (9 > 5)//Điều kiện 9 > 5 thì luôn đúng
	{
		int a;
		printf("Moi ban nhap vao 1 nam lan thu %d", dk);
		scanf_s("%d", &a);
		printf("Nam ban vua nhap vao: %d\n", a);
		dk++;//Tăng biến dk lên 1 đơn vị
		if (dk>5)//Nếu biến dk mà lớn hơn 5 thì
		{
			break;//Dùng để ngắt vòng lặp
		}
	}
	//Cách 2: không cần break
	// while (dk < 5)
	// {
	// 	int a;
	// 	printf("Moi ban nhap vao 1 nam lan thu %d", dk);
	// 	scanf_s("%d", &a);
	// 	printf("Nam ban vua nhap vao: %d\n", a);
	// 	dk++;//Tăng biến dk lên 1 đơn vị
	// }
}