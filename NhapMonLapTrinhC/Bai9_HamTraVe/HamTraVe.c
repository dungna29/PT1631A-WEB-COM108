#include <stdio.h>
/*
 * P2. Hàm trả về trong C
 * Tạo hàm trước hàm main()
 */
 //P2.1 Hàm trả về không tham số truyền vào
 //Hàm trả về là hàm trả lại 1 giá trị hoặc 1 tập giá trị nào đó
 //1. Kiểu dữ liệu của hàm mà bạn muốn
 //2. Đặt tên hàm
 // int getYear()
 // {
 // 	//3. Hàm trả về bắt buộc phải return 1 giá trị
 // 	//4. Giá trị trả về phải tương ứng với kiểu dữ liệu của hàm
 // 	return 2020;//Phải trả về số nguyên vì hàm ở đây là kiểu số nguyên
 // 	
 // }
 // //Cả hàm getYear() ở trên tương ứng với 1 giá trị
 // int main(){
 // 	// Vì hàm getYear() là 1 giá trị kiểu số nguyên vì vậy phải sử dụng hàm để in ra màn hình
 // 	printf("Nam hien tai la: %d", getYear());
 // 	//Đối với hàm không trả về các bạn hãy coi nó như là 1 biến có kiểu dữ liệu và có thể tương tác được với nó
 // 	int a = 1, c;
 // 	c = getYear() + 1;//Các bạn có thể thực hiện phép toán với trường hợp này
 // 	printf("Nam hien tai sau khi bi cong la: %d", c);
 // }
 //--------------------------------
 //P2.2 Hàm trả về có tham số truyền vào
 //1. chọn kiểu dữ liệu mà hàm bạn muốn trả về
 //2. đặt tên hàm
 //3. chọn tham số và kiểu dữ liệu tham số bạn muốn
 //(int a,int b) được gọi là tham số truyền vào 1 hàm sẽ nằm trong dấu ()
double tinhDiemTrungBinh(int diemC, int diemHtml)
{
	//Tính điểm trung bình của 2 đầu điểm C và HTML
	double diemTB = (diemC + diemHtml) / 2;
	return diemTB;
	//Cách viết ngắn gọn hơn
	//return (diemC + diemHtml) / 2;;
}
int tinhTong3So(int so1, int so2, int so3)
{
	return so1 + so2 + so3;
}
int main()
{
	//Hàm tính tổng 3 số:
	int a = 1, b = 2, c = 3, d;
	d= a + b + c;
	printf("Ket Qua Tong 3 so la: %d", tinhTong3So(a, b, c));
	int a1, b1, c1,d1;
	d1 = a1 + b1 + c1;
	printf("Ket Qua Tong 3 so la: %d", tinhTong3So(a1, b1, c1));



	//Viết 1 chương trình tính điểm trung bình POLY
	double a, b;
	printf("Moi ban nhap vao diem mon C: \n");
	scanf_s("%lf", &a);
	printf("Moi ban nhap vao diem mon HTML: \n");
	scanf_s("%lf", &b);
	//tinhDiemTrungBinh(a, b) vì đây là hàm trả về có tham số truyền vào nên bắt buộc phải truyền đủ và đúng vị trị của tham số
	printf("Diem TB 2 mon C & HTML la: %lf", tinhDiemTrungBinh(a, b));
}