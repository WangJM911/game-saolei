


//int main()
//{
	//char arr1[] = "abcdef";
	//int i = 0;
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	//int len = strlen(arr1);
	//printf("%d %d", sz,len);

	//int arr2[] = { 1, 2, 3, 4, 5 };
	//int sz = sizeof(arr2) / sizeof(arr2[0]);
	//int len = strlen(arr2);
	//printf("%d %d", sz, len);
	//char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr1));
	//printf("%d\n", sizeof(arr2));
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));//���ֵ ��ΪҪһֱ�ҵ�\0
	//for (i = 0; i < 6; i++)
	//{
	//	printf("%c", arr1[i]);
	//}
//	char arr3[3][4] = ""a,s,d", "a,s,c"";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 1; i < sz;i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {9,1,5,3,7,8,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdlib.h>
//#include <windows.h>
//
////ˮƽ����Ϊx����ֱ����Ϊy
//
//int main()
//{
//	int i, j;
//	int x = 15;
//	int y = 1;
//	int velocity_x = 1;
//	int velocity_y = 1;
//
//	//�������ұ߽�
//	int left = 0;
//	int right = 25;
//	int top = 0;
//	int bottom = 25;
//
//	while (1)
//	{
//		x = x + velocity_x;
//		y = y + velocity_y;
//
//		system("cls");//����
//
//		//���С��ǰ�Ŀ���
//		for (i = 0; i < y; ++i)
//		{
//			printf("\n");
//		}
//		for (j = 0; j < x; j++)
//		{
//			printf(" ");
//		}
//		printf("o\n");//���С��o
//		Sleep(50);
//
//		//��������
//		if (x == left || x == right || y == top || y == bottom)
//		{
//			printf("\a");
//		}
//
//		//Խ���ж�
//		if (y <= top || y >= bottom)
//		{
//			velocity_y = -velocity_y;
//		}
//		if (x <= left || x >= right)
//		{
//			velocity_x = -velocity_x;
//		}
//	}
//
//	// 	system("pause");
//	return 0;
//}
#include"game.h"
#include<stdio.h>
void menu()
{
	printf("#####################\n");
	printf("###1.play 0.exit#####\n");
	printf("#####################\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

}
int main()
{
	int input = 0;
	do
	{
		menu();
			printf("��ѡ��");
			scanf_s("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	return 0;
}
