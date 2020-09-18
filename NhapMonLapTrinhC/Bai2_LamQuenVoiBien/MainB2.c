#include <stdio.h>

//Tạo hàm main
int main()
{
	// printf đây được gọi là từ khóa
	printf("Bai so2");

	//Khái niệm biến
	// Biến dùng để lưu trữ 1 giá trị nào đó và phải có kiểu dữ liệu
	// Cấu trúc của biến là <Kiểu dữ liệu> <tên của biến> <toán tử bằng> <giá trị cần lưu trữ>
	//Khai báo 1 biến a kiểu số nguyên được gán giá trị bằng 5
	int a = 5;

	//Cách khai báo biến
	int b;//Khai báo 1 biến có tên là b và kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	int a1, a2, a3, a4, a5;//Khai báo các biến từ a1 đến a5 có cùng kiểu dữ liệu và không khởi tạo giá trị ban đầu
	int c1, c2, c3, c4 = 5, c5 = 6;//Khai báo các biến từ c1 đến c5 nhưng biến c4 và c5 đã được khởi tạo giá trị
	
	//Không nên khai báo các biến kiểu như dưới đây nếu chúng có cùng kiểu dữ liệu
	int d1;
	int d2;
	int d3;
	int d4;

	//Đặc điểm của biến
	//Phải khai báo biến thì mới sử dụng được
	//Biến có phân biệt chữ hoa và chữ thường

	//Ví dụ: Khai báo 1 biến có thể chứa điểm học sinh - double là kiểu số thực
	double diemHs = 9.5;//Khai báo 1 biến có tên là diemHs và có kiểu dữ liệu là số thực và có khởi tạo giá trị ban đầu
	double DiemHs = 1.3;//Có phân biệt chữ hoa và thường
	//double DiemHs = 1.3;//Không khai báo tên biến giống nhau sẽ gây lỗi

	//Cách đặt tên biến
	// Tên biến phải có ý nghĩa để người lập trình dễ đọc
	// Nên đặt tên biến bằng Tiếng Anh 
	char dIemHs = 'a';//Không nên đặt tên biến gây hiểu lầm

	//Khi học lập trình học cách gọi từ khóa hay tên biến phải dùng phím Ctrl + Space
	//Tên biến không được trùng với từ khóa như int int = 5; hoặc double double =9.6;
	
	//3 Kiểu đặt tên biến đối với 2 từ trở lên
	//  1. Normal: diemhhs, diemmonc.......
	//  2. Under_Score: diem_hs, diem_mon_c
	//  3. CamelCase: diem_Hs, diemMonC


	//Hằng số
	double pi = 3.14;//Khai báo như này là không sai nhưng PI ở đây là bất biến
	const double PI = 3.14;//const biến PI sẽ là hằng số//Không có 1 cách nào có thể thay đổi giá trị của biến mà có const đứng trước
	
	//Xuất ra màn hình sử dụng câu lệnh printf("Điền chuỗi bạn muốn in ra màn hình");
	printf("Dungna29");

	//Nhập dữ liệu từ bàn phím vào scanf
	printf("Moi ban nhap tuoi :");//In 1 chuỗi ra màn hình
	int tuoiNguoiDung = 0;//Khởi tạo 1 biến để chứa tuổi
	scanf_s("%d", &tuoiNguoiDung);// Đọc dữ liệu từ bàn phím do người dùng nhập vào
	printf("Tuoi ban vua nhap la : %d", tuoiNguoiDung);//In ra màn hình biến đã được gán ở trên
	return 0;
}