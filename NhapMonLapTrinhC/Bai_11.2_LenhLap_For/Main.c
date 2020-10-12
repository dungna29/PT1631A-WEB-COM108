#include <stdio.h>
/*
 * P2. Lệnh lặp for
 * Lặp đi lặp lại 1 công việc nào đấy
 * Đối với for cần phải khai báo giá trị bước nhẩy và điều kiện ngắt vòng lặp trước khi dùng
 */
int main()
{
	
	//Cách thức gọi vòng lặp for
	//for + tab + xóa 2 ngoặc kéo con trỏ về gần for + tab lần nữa
	// for (<kiểu dữ liệu> i = 0; i < length; i++)
	// {
	//		//i = 0: khai báo bước nhẩy bắt đầu từ 0
			//i < length: Điều kiện để dừng vòng lặp
			//i++ tăng bước nhẩy lên 1 (ngoài ra có thể ++ hoặc --)
	// }
	int a;
	for (int i = 0; i < 5; i++)
	{		
		printf("Moi ban nhap vao 1 nam lan thu %d :", i);
		scanf_s("%d", &a);
		printf("Nam ban vua nhap vao: %d\n", a);
	}
	
}