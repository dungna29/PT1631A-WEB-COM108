#include <stdio.h>
int main()
{
	//1. TOÁN TỬ LOGIC	
	float diemThiHetMonC, diemThanhPhanC;
	//Toán tử so sánh gồm: == != >= <= > <
	//Toán tử Logic: && (và và) ||(Hoặc) !(Phủ định)
	//Điều kiện để qua một môn học là điểm thành phần lớn hơn >= 5 và điểm thi >=5
	//Viết 1 chương trình nhập điểm thi hết môn của C
	printf("Moi ban nhap diem thi mon C: ");
	scanf_s("%f", &diemThiHetMonC);
	printf("Moi ban nhap diem thanh phan mon C: ");
	scanf_s("%f", &diemThanhPhanC);
	printf(" KQ 1 thi ban PASS va 0 thi HOC LAI : %d \n", diemThiHetMonC >= 5);
	//Kết hợp cả 2 điều kiện của POLY là điểm thi và thành phần phải lớn hơn 5 thì sử dụng toán tử LOGIC
	// Toán tử && yêu cầu cả 2 vế của biết thức đúng thì sẽ trả ra kết quả là TRUE hoặc 1
	printf(" Ket Qua MON C toan tu &&: %d \n", ((diemThiHetMonC >= 5) && (diemThanhPhanC >= 5)));
	//Toán tử || yêu cầu 1 trong 2 về của biết thức là TRUE hoặc 1 thì sẽ trả ra 1
	printf(" Ket Qua MON C toan tu ||: %d \n", ((diemThiHetMonC >= 5) || (diemThanhPhanC >= 5)));
	//Toán tử phủ định thì nếu bên trong kết quả là TRUE hoặc 1 thì sẽ đảo ngược lại thành FALSE hoặc 0
	printf(" Ket Qua MON C toan tu !: %d \n", !((diemThiHetMonC >= 5) && (diemThanhPhanC >= 5)));
	
	//2. TOÁN TỬ GÁN 
	//Toán tử bằng: = có nghĩa dùng để gán 1 giá trị cho biến
	int a,b,c,d;//Khai báo 4 biến không khởi tạo giá trị và có kiểu dữ liệu là số nguyên
	//Gán giá trị cho a thì sẽ dùng toán tử =
	a = 10;//Đây là hành động gán giá trị cho và sử dụng toán tử =
	//2. Toán tử += cộng bằng
	a += 10;//Thay cho cách viết a + 10 thì sẽ viết là a +=10 suy ra a = 20 vì ở trên bằng 10

	//Đề số 1: 
	//Viết 1 chương trình cho phép:
	//1. Nhập số buổi nghỉ từ bàn phím:
	//2. Nhập điểm thành phần môn C:
	//3. Nhập điểm thi môn C:
	//4. In ra kết quả với điều kiện sau: 
	// Nếu số buổi <= 4 và điểm TP >= 5 điểm thi >=5 thì qua môn
	//Đề số 2:
	//Viết 1 chương trình khám sức khỏe đi nghĩa vụ:
	//1. Cho phép người dùng nhập cân nặng 
	//2. Cho phép người dùng nhập chiều cao
	//3. Cho phép nhập tuổi
	// Nếu Cân Nặng >= 50kg và Chiều cao >= 140cm và tuổi <= 27 thì in ra đi nghĩa vụ
	return 0;
}