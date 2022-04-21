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
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1 ,arr2 ,arr3 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d,", * (parr[i] + j));
//		}		
//		printf("\n");
//	}
//	return 0;
//}

/*数组指针 是指针*/
//int main() {
//	int* p = NULL;//整形指针指向整形
//	char* pc = NULL;//pc是字符指针指向字符
//	int arr[10] = { 0 };
//	//arr首元素的地址
//	//&arr[0] -首元素的地址
//	//&arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	return 0;
//}
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//这个没有*,所以他的数组指针类型没有*
//	int(*p)[10] = &arr1;
//	//char* arr[5];//下面这个多了个*,所以它的数组指针也得加个*
//	//char*(*pa)[5] = &arr;
//	//使用数组指针访问到数组的值,但是这是个复杂的用法如果是想单独访问一维数组
//	printf("笨办法经过数组指针去访问数组元素:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	printf("\n");
//	printf("直接对数组的访问操作,不需要经过数组指针:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr1+i));
//	}
//}
//void print1(int arr[3][5],int x,int y) {
//	//参数是数组的形式
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y) {
//	//参数是指针的形式
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//下面的方法是等价的*(*(p + i)+j)==(*(p + i))[j]==p[i][j]==*(p[i] + j)
//			//总结*(p+i) = p[i]
//			//printf("%d ", *(*(p + i)+j));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int(*parr[10])[5];//该数组有10个元素,每个元素有是个指针,该数组指针指向的数组有5个元素,每个元素是int
//	//print1(arr, 3,5);//arr - 数组名 - 数组名就是首元素地址
//	print2(arr, 3, 5);//数组传参传的是首元素的地址,又因为是二维数组,它的首元素地址是一个数组,所以用数组指针来接收
//	return 0;
//}