#include <stdio.h>
#include <string.h>
/// <summary>
/// Bài tập tổng hợp
/// Các hàm xử lý chuỗi trong lập trình C
/// </summary>
/// <returns></returns>
int main() {
	while (5>0)
	{
		char tempInput[100];
		char inputNguoiDung[100];
		char tempnoichuoi[100];
		printf("Moi Ban Nhap Chuoi: \n");
		gets_s(inputNguoiDung, 100);
		printf("Chuoi ban vua nhap vao: %s \n", inputNguoiDung);
		printf("---------------------------------------------\n");

		printf("Chuong Trinh Xu Ly Chuoi Trong C \n");
		printf("1. Do dai Chuoi Vua Nhap \n");
		printf("Do dai chuoi [%s]  =  [%d] \n", inputNguoiDung, strlen(inputNguoiDung));//strlen(inputNguoiDung) tìm ra độ dài của chuỗi
		printf("---------------------------------------------\n");

		printf("2. Copy Chuoi \n");
		strcpy_s(tempInput, 100, inputNguoiDung);//strcpy_s dùng để copy từ chuỗi này sang chuỗi khác
		printf("In chuoi tempInput sau khi copy [%s]\n", tempInput);
		printf("---------------------------------------------\n");

		printf("3. Noi 2 Chuoi \n");
		printf("Moi Ban Nhap Chuoi Noi: \n");
		gets_s(tempnoichuoi, 100);
		strcat_s(inputNguoiDung, 100, tempnoichuoi);//strcat_s dùng để nối 2 chuỗi lại với nhau
		printf("In chuoi sau khi noi chuoi [%s]\n", inputNguoiDung);
		printf("---------------------------------------------\n");

		printf("4. So sanh 2 chuoi \n");
		printf("Moi Ban Nhap Chuoi So Sanh: \n");
		gets_s(tempnoichuoi, 100);
		printf("So sanh 2 chuoi [%s] va [%s] = %d\n", inputNguoiDung, tempnoichuoi, strcmp(inputNguoiDung, tempnoichuoi));//strcmp dùng để so sánh chuỗi
		printf("---------------------------------------------\n");

		printf("5. Dao nguoc chuoi \n");
		printf("Chuoi Goc: [%s] Sau Khi Dao Nguoc:  [%s]\n", inputNguoiDung, _strrev(inputNguoiDung));//_strrev dùng để đảo ngược ký tự trong chuỗi
		_strrev(inputNguoiDung);
		printf("---------------------------------------------\n");

		printf("6. Viet thuong chuoi \n");
		_strlwr_s(inputNguoiDung, 100);//_strlwr_s dùng để viết thường toàn bộ ký tự
		printf("Chuoi Viet Thuong: [%s] \n", inputNguoiDung);
		printf("---------------------------------------------\n");

		printf("7. Viet hoa chuoi \n");
		_strupr_s(inputNguoiDung, 100);//_strlwr_s dùng để viết hoa toàn bộ ký tự
		printf("Sau Khi Viet Hoa: [%s]\n", inputNguoiDung);
		printf("---------------------------------------------\n");

		printf("8. Tim chuoi trong \n");
		char inputtim[100];//
		printf("Nhap chuoi muon tim: \n");
		gets_s(inputtim, 100);
		if (strstr(inputtim, inputNguoiDung) != NULL)//strstr dùng để tìm ký tự trong chuỗi chỉ định
		{
			printf("%s duoc tim thay trong %s", inputtim, inputNguoiDung);
		}
		else
		{
			printf("%s Khong duoc tim thay trong %s", inputtim, inputNguoiDung);
		}
		printf("---------------------------------------------\n");

		printf("Ban co muon tiep khong? Hay Chon (y/n) :");
		char input[10];
		gets_s(input, 10);
		if (_stricmp(input,"n") == 0)// Nếu chọn n thì sẽ break
		{
			break;
		}
	}


}



