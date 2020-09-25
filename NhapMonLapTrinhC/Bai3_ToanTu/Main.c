#include <stdio.h>
//Để chương trình chạy được cần có hàm main()
int main()
{
	//P1: Toán tử số học +-*/ (Cộng trừ nhân chia)  ++ -- (Toán tử tăng lên hoặc giảm 1 đơn vị)
	//Ví dụ 1: Viết 1 chương trình cộng 2 số cơ bản
	int a = 5, b = 5;
	//Kết quả mong muốn: 5 + 5 = 10
	printf("Ket qua: 5 + 5 = %d", a + b);//Đặt %d ở đâu thì giá trị bên phải sẽ được đổ vào đấy
	printf("Ket %d qua: 5 + 5 = ", a + b);// Ví dụ 2
	printf("\n");
	//Ví dụ 2: Viết 1 chương trình trừ 2 số cơ bản
	int c1 = 20, c2, c3;//Khai báo biến có cùng kiểu dữ liệu cả khởi tạo giá trị bao đầu lẫn không khởi tạo giá trị ban đầu
	c2 = 5;//Gán giá trị cho biến c2 bằng 5 thông qua toán tử bằng
	c3 = c1 - c2;// Gán giá trị cho biến c3 thông qua phép tính trừ giữa 2 biến c1 và c2
	printf("Ket qua: 20 - 5 = %d", c3);

	//Các toán tử còn lại các bạn về nhà tự thực hành với Nhân chia
	/*Bài tập 1: Viết 1 chương trình cộng 3 số nguyên, cho người dùng nhập vào 3 số
	và cộng 3 số đó lại In kết quả như sau: giá trị 1 + giá trị 2 + giá trị 3 = Kết quả */
	//Bước 1: Khai báo các biến mà bài toán cần có
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
	printf("Chuong trinh cong 3 so \n");//Tên chương trình
	printf("Nhap so thu 1: ");//In Mời người dùng nhập vào số thứ nhất
	scanf_s("%d", &d1);//Gán giá trị cho biến đầu tiên với câu lệnh scanf
	printf("Nhap so thu 2: ");
	scanf_s("%d", &d2);//Tương tự
	printf("Nhap so thu 3: ");
	scanf_s("%d", &d3);
	d4 = d1 + d2 + d3;//Thực hiện phép toán
	//in kết quả ra màn hình với 4 giá trị
	//"Ket qua: %d + %d + %d = %d" được gọi là 1 biểu thức chuỗi nhưng không tính được ra kết quả
	printf("Ket qua: %d + %d + %d = %d", d1, d2, d3, d4);

	// Phần 2: Toán tử ++ --
	printf("Phan 2 toán tu ++ --");
	
	return 0;


}