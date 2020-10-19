 #include <stdio.h>
 #include  <string.h>
struct GiaoVien
{
	int MaGV;
	char TenGV[50];
	int TuoiGV;
};
int main()
{
	char name[50];
	//Khai báo 1 mảng đối tượng 
	struct GiaoVien arrGV[50];//50 đối tượng
	//Khai báo 1 mảng đối tượng Giáo viên và có thể lưu trữ được 50 đối tượng
	int sizeInput = 0;
	printf("Moi ban nhap so luong Giao Vien Muon Them: \n");
	scanf_s("%d", &sizeInput);//Nhập số lượng giáo viên muốn thêm
	getchar();//Dùng để chống trôi lệnh
	//Sử dụng vòng lặp for để them nhiều đối tượng vào mảng đối tượng đã khai báo ở trên
	
	for (int i = 0; i < sizeInput; ++i)
	{
		printf("Moi ban nhap MaGV \n");
		scanf_s("%d", &arrGV[i].MaGV);//arrGV[i].MaGV Mảng tại vị trí thứ i và nó là 1 đối tượng và cần phải chấm thì mới ra thuộc tính
		getchar();
		printf("Moi ban nhap TenGV \n");
		gets_s(name, 50);//Lấy tên từ bàn phím cho do người dùng nhập vào gán cho biến name
		strcpy_s(arrGV[i].TenGV, 50, name);//Copy biến name sang cho thuộc tính tên của đối tượng
		printf("Moi ban nhap TuoiGV \n");
		scanf_s("%d", &arrGV[i].TuoiGV);
		
	}

	//In ra các đối tượng bên trong mảng ra màn hình
	//In ra mảng đối tượng sử dụng vòng lặp
	for (int i = 0; i < sizeInput; ++i)
	{
		printf("Ma GV: %d + TenGV: %s + Tuoi: %d \n", arrGV[i].MaGV,arrGV[i].TenGV,arrGV[i].TuoiGV);
		if (arrGV[i].TuoiGV >=40)
		{
			printf("Day it thoi \n");
		}else if(arrGV[i].TuoiGV >= 30){
			printf("Day nhieu len \n");
		}else
		{
			printf("Khong nen di day \n");
		}
	}


}