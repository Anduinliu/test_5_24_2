 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//int main()
//{
//	int day = 0;
//
//	//任何具有判定能力的语法结构，都必须具备：判定+分支
//	int quit = 0;
//	while (!quit)
//	{
//		printf("Please Enter Your Day$$\n");
//		scanf("%d", &day);
//
//		switch (day)//整形||整形表达式
//		{
//		case 1:// case 本身是用来进行判定的
//			printf("星期1\n");
//			break;// break是用来进行分支功能
//		case 2:
//			printf("星期2\n");
//			break;
//		case 3:
//			printf("星期3\n");
//			break;
//		case 4:
//			printf("星期4\n");
//			break;
//		case 5:
//			printf("星期5\n");
//			break;
//		case 6:
//			printf("星期6\n");
//			quit = 1;
//			break;
//		case 7:
//			printf("星期7\n");
//			break;
//		default:
//			printf("你输入的日期有误，请重新输入$$\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	const int a = 4;
//	switch (a)
//	{
//	case 4:
//		printf("hello world\n");
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		
//		switch (arr[i])
//		{
//		case 1:
//			break;
//		}
//	}
//}

//switch&&case&&default
//1.switch语法结构中,case完成的判定功能，break完成的是分支功能，default处理异常情况
//2.case:执行语句 == 1：n, case多条语句（不能定义变量，如果需要，{}，函数）break
//3.case:执行语句 == n：1, 多条case 后续不懈break
//4.default:可以出现在任何地方，推荐放在结尾
//5.case:不能：const，普通的变量，建议要有好的布局base的方式

//循环
//int main()
//{
//	int count = 10;//循环条件初始化
//	while (count > 0)//循环条件判定
//	{
//		printf("%d\n", count);
//		count--;//循环条件更新
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("count=%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	do 
//	{
//		printf("count =%d\n", count);
//		count--;
//	} while (count>0);
//}

//int main()
//{
//	while (1)
//	{
//		int c = getchar();//
//		if (c == '$')
//		{
//			break;//结束循环
//		}
//		printf("%c", c);
//	}
//
//}

//