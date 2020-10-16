#include <stdio.h>
int main()
{
	/*
	 * Mảng trong bài trước được học gọi là mảng 1 chiều
	 * Trong lập trình sẽ có 1 loại mảng nữa gọi là mảng 2 chiều tương tự như trong Exce;
	 *
	 */
	 /*
	  * Thuật toán Bubble Sort dùng để sắp xếp
	  */
	int arrNumber[] = { 9,8,7,6 };
	//Để in tất cả các phần tử trong mảng ra màn hình
	for (size_t i = 0; i < 4; i++)
	{
		printf("%d", arrNumber[i]);
	}
	//Sử dụng thuật toán để sắp xếp lại
	for (size_t i = 0; i < 4; i++)
	{
		printf("Lan Chay Thu %d \n", i);
		for (size_t j = i+1; j < 4; j++)
		{
			int temp = arrNumber[i];
			printf("Kiem Tra Xem %d > %d \n", arrNumber[i], arrNumber[j]);
			if (arrNumber[i] > arrNumber[j])//Nếu muốn đảo ngược sắp xếp thì chỉ cần đảo dấu lớn hơn thành nhỏ hơn
			{
				printf("Kiem Tra Xem %d > %d thi dao vi tri cho nhau \n", arrNumber[i], arrNumber[j]);
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
			for (size_t i = 0; i < 4; i++)
			{
				printf("%d ", arrNumber[i]);
			}
			printf("\n");
		}
	}

	//Thuật toán không có giải thích bên trong code
	// for (size_t i = 0; i < 4; i++)
	// {		
	// 	for (size_t j = i + 1; j < 4; j++)
	// 	{
	// 		int temp = arrNumber[i];
	// 	
	// 		if (arrNumber[i] > arrNumber[j])//Nếu muốn đảo ngược sắp xếp thì chỉ cần đảo dấu lớn hơn thành nhỏ hơn
	// 		{			
	// 			arrNumber[i] = arrNumber[j];
	// 			arrNumber[j] = temp;
	// 		}			
	// 	}
	// }
	printf("\n");
	printf("Sau khi sap xep \n");
	for (size_t i = 0; i < 4; i++)
	{
		printf("%d", arrNumber[i]);
	}
	return 0;
}