#include <stdio.h>
/*有序数组二分查找发*/
//int selectText(int arr[],int k,int arrSize) {
//	int left = 0;
//	int right = arrSize;
//	while (left<=right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle]<k)
//		{
//			left = middle + 1;
//		}
//		else if (arr[middle] > k) {
//			right = middle - 1;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10};
//	int k = 10;
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	//调用方法
//	int text = selectText(arr,k,arrSize);
//	if (-1 == text) {
//		printf("该值不存在");
//	}
//	else
//	{
//		printf("该值下标为%d\n", text);
//	}
//	return 0;
//}
//int selectText(int arr[],int k,int arrSize) {
//	int left = 0;
//	int right = arrSize;
//	while (left<=right)
//	{
//		int min = (left + right) / 2;
//		if (arr[min]<k) {
//			left = min + 1;
//		}
//		else if(arr[min]>k)
//		{
//			right = min - 1;
//		}
//		else
//		{
//			return min;
//		}
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int text = selectText(arr,k, arrSize);
//	if (text==-1) {
//		printf("该值不存在");
//	}
//	else
//	{
//		printf("该值下标为%d\n", text);
//	}
//	return 0;
//}

/*用递归拆分一个数,将他们分别打印出来*/
//void resolution(int num) {
//	if (num>9)
//	{
//		resolution(num/10);
//	}
//	printf("%d\n", num % 10);
//}
//void resolution(int num) {	
//	while (num>9)
//	{
//		num = num / 10;
//		printf("%d\n", num % 10);
//	}
//	printf("%d\n", num % 10);
//}
//int main() {
//	int k = 0;
//	scanf("%d",&k);
//	resolution(k);
//	return 0;
//}

/*使用递归求出字符串长度*/
//int strLength(char* arr) {
//	if (*arr != '\0') {
//		return 1 + strLength(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "yangxiongming";
//	int length = strLength(arr);
//	printf("长度为%d", length);
//}

/*字符指针*/
//int main() {
//	char ch = 'w';
//	char* pc = &ch;//pc就是字符指针
//	*pc = 'w';//*pc就是解址引用符
//	return 0;
//}
//int main() {
//	char arr[] = "abcdef";
//	char* pc = &arr;
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//}
//int main() {
//	const char*p = "abcdef";//常量字符串,*p是不能被修改的
//	char v = "abcde1";
//	//*p = 'W';//出现语法错误
//	p = &v;//但是p是可以被修改的
//	printf("%c\n", *p);
//	printf("%s\n", p); 
//	return 0;
//}
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//常量字符串在内存中没有必要存两份,所以他们的地址是一样的
//	char* p2 = "abcdef";
//	if (arr1==arr2) {
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

/*指针数组 是数组*/
//int main() {
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形的指针数组 - 指针数组
//	char* pch[5];//存放字符指针数组 - 指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };//存放整形指针的数组
//	return 0;
//}
int main() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1 ,arr2 ,arr3 };
	int i = 0;
	for ( i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d,", * (parr[i] + j));
		}		
		printf("\n");
	}
	return 0;
}