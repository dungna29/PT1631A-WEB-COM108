// #include <stdio.h>
// #include  <string.h>
// struct SinhVien
// {
// 	int maSv;
// 	char tenSv[50];
// };
//
//
// int main()
// {
// 	struct SinhVien arrSv[50];
// 	int size;
// 	printf("Moi nhap so luong Sinh Vien: ");
// 	scanf_s("%d", &size);
// 	getchar();
// 	printf("Moi ban Nhap 2 Sinh Vien Vao Mang: \n");
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		printf("Moi Ban Nhap Ma SV: \n");
// 		scanf_s("%d", &arrSv[i].maSv);
// 		getchar();//Dùng để chống trôi lệnh
// 		printf("Moi Ban Ten SinhVien: \n");
// 		gets_s(arrSv[i].tenSv, 50);
// 	}
// 	printf("Danh sach SinhVien vua nhap vao \n");
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		printf("%d + %s \n", arrSv[i].maSv, arrSv[i].tenSv);
// 	}
//
// }