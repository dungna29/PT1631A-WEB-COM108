#include <stdio.h>
int main()
{
	//Viết 1 chương trình máy tính đơn giản như  + - * /
	//Cách 1: Sử dụng if else
	int input = 0, a, b, c;
	printf("Chuong Trinh May Tinh POLY 2 So\n");
	printf("Moi ban nhap vao so a: ");
	scanf_s("%d", &a);
	printf("Moi ban nhap vao so b: ");
	scanf_s("%d", &b);
	printf("Hay Chon Chuc Nang\n");
	printf("1. Phep Cong\n");
	printf("2. Phep Tru\n");
	printf("3. Phep Nhan\n");
	printf("4. Phep Chia\n");
	scanf_s("%d", &input);
	//Cách số 1 sử dụng ifelse để giải bài toán
	// if (input == 1)
	// {
	// 	c = a + b;
	// 	printf("Ket qua %d + %d = %d",a,b,c);
	// }else if(input == 2)
	// {
	// 	c = a - b;
	// 	printf("Ket qua %d - %d = %d", a, b, c);
	// }else
	// {
	// 	printf("Chuc nang ban chon khong ton tai");
	// }

	//Cách số 2: Switch case
	switch (input)//truyền giá trị kiểu số nguyên ở bà toán này
	{
	case 1:
		c = a + b;
		printf("Ket qua %d + %d = %d", a, b, c);
		break;
	case 2:
		c = a - b;
		printf("Ket qua %d - %d = %d", a, b, c);
		break;
	default:
		printf("Chuc nang ban chon khong ton tai");
		break;
	}

	//Ví dụ thêm Switch Case
	char inputChar= 'a';
	switch (inputChar)
	{
	case 'a': //Thực hiện 1 hành động bên trong
		break;
	case 'b': //Thực hiện 1 hành động bên trong
		break;
	default:
		break;
	}
	//Bài tập
	//Viết 1 chương trình cây ATM
	//Bước 1: Nhập mã PIN nếu mã PIN đúng thì cho vào nếu sai thì thông báo
	//Bước 2: Nếu nhập PIN đúng thì hiển thị menu
	//1. Rút tiền
	//2. Xem số dư
	//3. Thoát chương trình
	//Gợi ý: Các bạn sẽ phải tên biến cố định mã PIN để so sánh

}