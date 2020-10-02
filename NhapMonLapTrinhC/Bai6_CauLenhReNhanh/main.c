#include <stdio.h>
int main()
{
	//Nếu điểm thi lớn hơn hoặc bằng 5 thì qua môn C
	float diemC = 0;
	printf("Moi ban nhap diem C: ");
	scanf_s("%f", &diemC);//Nhập dữ liệu từ bàn phím do người dùng nhập vào.
	if (diemC >= 5)
	{
		//Thực hiện 1 công việc ở đây nếu if là true
		printf("Chuc mung ban da qua mon");
	}
	else
	{
		//Thực hiện 1 công việc ở đây nếu if là false
		printf("Chuc mung ban phai hoc lai");
	}

	//Nếu điểm C nhỏ hơn 3 thì bạn nên học lại C 2 lần 
	//Nếu điểm C nhỏ hơn 5 và lớn hơn 3 thì bạn nên học lại C 1 lần 
	//Nếu điểm C lớn hơn hoặc bằng 5 và nhỏ hơn 6 thì bạn nên luyện tập thêm 
	//Nếu điểm C lớn hơn 6 vầ nhỏ hơn 7 thì bạn đạt điểm khá
	//Nếu điểm C lớn hơn 7 và nhỏ hơn 9 thi bạn đạt giỏi 
	//Nếu điểm C lớn hơn 9 thì là xuất sắc
	printf("---------------");
	if (diemC < 3)
	{
		printf("Nen hoc lai C 2 lan");
	}
	else if (diemC < 5)
	{
		printf("Nen hoc lai C 1 lan");
	}
	else if (diemC < 6)
	{
		printf("Ban dat diem KHA");
	}
	else if (diemC < 9)
	{
		printf("Ban dat diem GIOI");
	}
	else
	{
		printf("Ban dat SIEU GIOI");
	}

	//Hoặc nếu đảo If else trong khoảng nếu như để điểm lớn nhất lên trên cùng.
}