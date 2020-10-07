#include <stdio.h>
/*
 * P1. HÀM KHÔNG TRẢ VỀ LÀ VOID
 */
//1.Dưới đây là cách khai báo 1 hàm không trả về
//2. void là kiểu hàm
//3. inRaManHinh là tên của hàm và tên của hàm thông thường là động từ đứng trước sau đó các từ tiếp theo viết hoa chữ cái đầu tiên lên
//4. inRaManHinh() sau tên của hàm luôn là có ký hiệu như dưới đây
//5. { } Mở ngoặc nhọn thì sẽ phải đóng ngoặc nhọn và các bạn có thể code các chức năng bên trong theo bài toán chỉ định
void inRaManHinh()
{
	//6. Là nơi các bạn triển khai code
	printf("Day la ham Khong Tra Ve POLY");
}
//7. Cách gọi hàm không trả về như sau
//8. Đối với C các bạn khai báo hàm trước main()
// int main()
// {
// 	inRaManHinh();//Đây chính là việc gọi hàm vào trong 1 hàm khác để sử dụng tùy theo mục đích của bạn
// }


// /*
//  * Bài tính tổng 2 số và nhân 2 số nghiên cứu lại hàm menu ở đây
//  */
// void menu()
// {
// 	printf("1. Phep Cong + \n");
// 	printf("2. Phep Nhan x \n");
// 	printf("Moi ban chon chuc nang: ");
// }
// int main()
// {
// 	int input, a, b, c;
// 	printf("Chuong Trinh May Tinh POLY \n");
// 	printf("Nhap so thu 1: ");
// 	scanf_s("%d", &a);
// 	printf("Nhap so thu 2: ");
// 	scanf_s("%d", &b);
// 	printf("2 So ban vua nhap vao la: a = %d, b = %d \n", a, b);
// 	menu();
// 	scanf_s("%d", &input);
// 	switch (input)	{
// 		case 1:
// 			printf("Phep Cong: %d + %d = %d \n", a, b, a + b);
// 			break;
// 		case 2:
// 			printf("Phep Nhan: %d x %d = %d \n", a, b, a * b);
// 			break;
// 		default:
// 			printf("Chuc nang ban chon khong ton tai");
// 	}
// 	return 0;
// }
// void BaiToan2()
// {
// 	menu();
// }


