#include <stdio.h>
#include <string.h>
//Khi đi thi mặc định khai báo luôn string.h trên đầu
/*
 * Khai báo kiểu đối tượng hoặc kiểu dữ liệu có cấu trúc
 * Đặt vấn đề: Cần lưu trữ thông tin của nhiều sinh viên 
 * Cần phải khai báo biến của từng thông tin
 * -- Chính từ vấn đề trên mới sinh ra 1 kiểu dữ liệu mới được gọi là kiểu dữ liệu có cấu trúc
 */
//Cách khai báo bên ngoài main
// struct <Tên của đối tượng>
// {
// 	//Bên trong là các thuộc tính của đối tượng về cơ bản chính là các biến đã được học
// 	<kiểu dữ liệu> <Tên biến>; //Khai báo thuộc tính cho đối tượng
// };
struct SinhVien//Khai báo 1 đối tượng là sinh viên có 3 thuộc tính ở bên trong
{
	int maSv1;
	char tenSv1[50];
	float diemSv1;
};//Không khai báo các đối tượng


struct SinhVien1//Khai báo 1 đối tượng là sinh viên có 3 thuộc tính ở bên trong
{
	int maSv1;
	char tenSv1[50];
	float diemSv1;
}sv1,sv2,sv3;//Khai báo sẵn ra 3 đối tượng
//sv1 Mỗi một cái sv1 tương ứng là 1 biến của đối tượng và là có thể lưu trữ được 1 sinh viên

int main()
{
	// //Cách hiện nay
	// int maSv1;
	// char tenSv1[50];
	// float diemSv1;
	// //Phía trên chỉ có thể lưu được 1 sinh viên duy nhất
	// //Nếu cần lưu nhiều sinh viên thì phải khai báo nhiều biến lên
	// int maSv2;
	// char tenSv2[50];
	// float diemSv2;
	// //Giả sử nếu cần lưu 1000 sinh viên thì cần phải khai báo 3000 biến

	//----------------------------------------------------------------------
	//Cách 1: Khai báo Struct ở bên ngoài và chưa có biến lưu trữ đối tượng
	struct SinhVien sv5, sv6;//Khai báo biến có kiểu dữ liệu là đối tượng SinhVien
	//Kiểu dữ liệu là do lập trình viên định nghĩa.
	//Gán giá trị cho biến có kiểu đối tượng như sau
	//Cần phải gán giá trị cho từng thuộc tính bên TRONG đối tượng
	sv5.maSv1 = 1;//Để gán được giá trị cho đối tượng cần phải gọi đến tên biến đối tượng sau đó sử dụng dấu chấm để gọi tiếp thuộc tính bên trong đối tượng
	strcpy_s(sv5.tenSv1, 50, "Dung");//Đối với việc gán biến kiểu chuỗi thì cần dùng hàm String Copy và luôn nhớ vị trí đầu là chuỗi rỗng
	sv5.diemSv1 = 5;
	//Sau khi khai báo đủ thuộc tính của đối tượng thì có thể in ra màn hình
	printf("Ma SV: %d + TenSV: %s + Diem: %f", sv5.maSv1, sv5.tenSv1, sv5.diemSv1);//Để gọi giá của thuộc tính thì cần biết tên đối tượng và chấm ra các thuộc tính đó
	//sv5.maSv1 đại diện cho việc lấy giá trị của maSV ở đây là kiểu số nguyên.
	if (sv5.diemSv1 >=5)
	{
		printf("Chuc Mung Ban Da Qua Mon C Voi Diem So = %f", sv5.diemSv1);
	}else
	{
		printf("Chuc Mung Ban Da Mat 650k Mon C Voi Diem So = %f", sv5.diemSv1);
	}


	//----------------------------------------------------------
	//Đối với việc khái sv1,sv2,sv3 đã được khai báo ngay từ đâu không cần phải khai báo 1 lần nữa
	sv1.maSv1 = 1;//Để gán được giá trị cho đối tượng cần phải gọi đến tên biến đối tượng sau đó sử dụng dấu chấm để gọi tiếp thuộc tính bên trong đối tượng
	strcpy_s(sv1.tenSv1, 50, "Dung");//Đối với việc gán biến kiểu chuỗi thì cần dùng hàm String Copy và luôn nhớ vị trí đầu là chuỗi rỗng
	sv1.diemSv1 = 5;
	//Sau khi khai báo đủ thuộc tính của đối tượng thì có thể in ra màn hình
	printf("Ma SV: %d + TenSV: %s + Diem: %f", sv1.maSv1, sv1.tenSv1, sv1.diemSv1);//Để gọi giá của thuộc tính thì cần biết tên đối tượng và chấm ra các thuộc tính đó
	//sv5.maSv1 đại diện cho việc lấy giá trị của maSV ở đây là kiểu số nguyên.
	if (sv1.diemSv1 >= 5)
	{
		printf("Chuc Mung Ban Da Qua Mon C Voi Diem So = %f", sv1.diemSv1);
	}
	else
	{
		printf("Chuc Mung Ban Da Mat 650k Mon C Voi Diem So = %f", sv1.diemSv1);
	}

	//Có thể khai báo Struc bên trong main
	struct GiaoVien
	{
		int MaGV;
		char TenGV;
		int TuoiGV;
	};
	return 0;
}