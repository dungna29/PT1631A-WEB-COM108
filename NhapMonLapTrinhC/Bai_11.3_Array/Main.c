#include <stdio.h>
int main()
{
	/*
	 * Mảng trong lập trình - Array
	 * Mảng giúp lưu trữ được nhiều giá trị hơn biến.
	 * Mảng có kiểu dữ liệu và kích thước của mảng.
	 * Để truy xuất (Lấy) 1 giá trị ở trong 1 mảng thì các bạn cần phải biết vị trí (index) của nó - Và trong mảng thì luôn bắt đầu từ 0
	 */
	 //Ví dụ biến:
	int a = 9;//Khai báo biến - có thể khai báo nhiều giá trị hơn được không? 
	//Muốn chứa nhiều giá trị hơn thì cần khai báo nhiều biến hơn int a = 9,b =10,c =11;
	//1 Biến chỉ cho phép lưu trữ 1 giá trị duy nhất.

	//Vì vậy trong lập trình chúng ta sẽ học thêm 1 kiểu đó là Mảng dùng để giải quyết bài toán trên
	//Cách khai báo 1 mảng - 
	//<kiểu dữ liệu> <tên biến>[kích thước mảng] = {giá trị 1, giá trị 2, giá trị3};
	//Chú ý: Khi khai báo tên biến mảng phải đặt tên là arr + tên bạn muốn
	//Ví dụ 1 Mảng number không khởi tạo giá trị:
	int arrNumber[2];//Diễn giải: Khai báo 1 mảng số nguyên có độ dài là 2 phần tử và chưa khởi tạo giá trị
	//Ví 2 dụ 2 Mảng number có khởi tạo giá trị
	int arrNumber2[4] = { 2020,2021,2022,2023 };//Khai báo 1 mảng kiểu số nguyên có độ dài 4 phần tử
	int arrNumber3[] = { 2020,2021,2022,2023 };//Khai báo 1 mảng kiểu số nguyên tự nhận diện kích thước mảng và bên phải có 4 phần tử thì nó cũng tạo ra độ dài có thể chứa là 4

	//-----------------------------------
	//Lấy 1 phần tử trong mảng in ra màn hình cần phải biết vị trí của nó
	//Cách 1:
	int temp = arrNumber2[2];//Gán cho biến temp 1 giá trị của mảng tại vị trí số 2
	//arrNumber2[2] có kiểu số nguyên và nó đại diện cho 1 giá trị
	printf("%d \n", temp);
	//Cách 2:
	printf("%d \n", arrNumber2[3]);
	printf("---------------------------\n");
	//----------------------------------------
	//Lấy nhiều phần tử trong mảng in ra màn hình dùng vòng lặp for
	for (size_t i = 2; i < 4; i++)
	{
		printf("Vong lap dang in ra: %d \n", arrNumber2[i]);
		// i ở vòng lặp này bắt đầu từ 0 và index trong mảng cũng bắt đầu từ 0
		//Muốn in ra tự động các phần tử thì cần phải tăng index của mảng lên vì vậy chúng ta sử dụng i trong vòng lặp for
		//arrNumber2[i] Giá trị của mảng tại vị trí thứ i 
	}
	//Cách 3 dùng 1 trong 2 vòng lặp đã học là Do-While hoặc While
	int dieuKien = 0;
	while (dieuKien < 4)
	{
		printf("Vong lap While in ra: %d \n", arrNumber2[dieuKien]);
		dieuKien++;
	}
	
	//---- Các mảng có nhiều kiểu dữ liệu khác nhau như các kiểu thủy các bạn đã học.
	float arrDiem[] = { 8.6,8.7,8.9 };
	double arrDiem2[5]= { 8.6,8.7,8.9 };//Khi khai báo kiểu này 2 phần tử cuối cùng sẽ không có giá trị

	//---- Gán giá trị cho phần tử ở trong mảng sử dụng toán tử gán = và khi gán thì cần phải biết index vị trí cần gán
	//tên mảng [vị trí cần gán] = giá trị mong muốn;
	arrDiem2[0] = 1.5;//Ghi đè lên giá trị 8.6 ở index 0
	arrDiem2[3] = 9.9;//Gán giá trị tại index 3 bằng 9.9
	printf("Tai INDEX 0 trong mang la: %lf \n", arrDiem2[0]);
	printf("Tai INDEX 3 trong mang la: %lf \n", arrDiem2[3]);

	//--------------------------Bài mẫu nhập mảng động
	const int SIZE = 100;//Khai báo kích thước mảng mặc định

	int arrDong[SIZE];
}

void NhapMang(int a[], int n) {
	for (int i = 0;i < n; ++i) {
		printf("\nNhap phan tu a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}