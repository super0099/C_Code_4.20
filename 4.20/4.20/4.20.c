#include <stdio.h>
/*����������ֲ��ҷ�*/
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
//	//���÷���
//	int text = selectText(arr,k,arrSize);
//	if (-1 == text) {
//		printf("��ֵ������");
//	}
//	else
//	{
//		printf("��ֵ�±�Ϊ%d\n", text);
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
//		printf("��ֵ������");
//	}
//	else
//	{
//		printf("��ֵ�±�Ϊ%d\n", text);
//	}
//	return 0;
//}

/*�õݹ���һ����,�����Ƿֱ��ӡ����*/
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

/*ʹ�õݹ�����ַ�������*/
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
//	printf("����Ϊ%d", length);
//}

/*�ַ�ָ��*/
//int main() {
//	char ch = 'w';
//	char* pc = &ch;//pc�����ַ�ָ��
//	*pc = 'w';//*pc���ǽ�ַ���÷�
//	return 0;
//}
//int main() {
//	char arr[] = "abcdef";
//	char* pc = &arr;
//	printf("%s\n", pc);
//	printf("%s\n", arr);
//}
//int main() {
//	const char*p = "abcdef";//�����ַ���,*p�ǲ��ܱ��޸ĵ�
//	char v = "abcde1";
//	//*p = 'W';//�����﷨����
//	p = &v;//����p�ǿ��Ա��޸ĵ�
//	printf("%c\n", *p);
//	printf("%s\n", p); 
//	return 0;
//}
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//�����ַ������ڴ���û�б�Ҫ������,�������ǵĵ�ַ��һ����
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

/*ָ������ ������*/
//int main() {
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//������ε�ָ������ - ָ������
//	char* pch[5];//����ַ�ָ������ - ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };//�������ָ�������
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

/*����ָ�� ��ָ��*/
//int main() {
//	int* p = NULL;//����ָ��ָ������
//	char* pc = NULL;//pc���ַ�ָ��ָ���ַ�
//	int arr[10] = { 0 };
//	//arr��Ԫ�صĵ�ַ
//	//&arr[0] -��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//���û��*,������������ָ������û��*
//	int(*p)[10] = &arr1;
//	//char* arr[5];//����������˸�*,������������ָ��Ҳ�üӸ�*
//	//char*(*pa)[5] = &arr;
//	//ʹ������ָ����ʵ������ֵ,�������Ǹ����ӵ��÷�������뵥������һά����
//	printf("���취��������ָ��ȥ��������Ԫ��:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	printf("\n");
//	printf("ֱ�Ӷ�����ķ��ʲ���,����Ҫ��������ָ��:\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr1+i));
//	}
//}
//void print1(int arr[3][5],int x,int y) {
//	//�������������ʽ
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
//	//������ָ�����ʽ
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//����ķ����ǵȼ۵�*(*(p + i)+j)==(*(p + i))[j]==p[i][j]==*(p[i] + j)
//			//�ܽ�*(p+i) = p[i]
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
//	int(*parr[10])[5];//��������10��Ԫ��,ÿ��Ԫ�����Ǹ�ָ��,������ָ��ָ���������5��Ԫ��,ÿ��Ԫ����int
//	//print1(arr, 3,5);//arr - ������ - ������������Ԫ�ص�ַ
//	print2(arr, 3, 5);//���鴫�δ�������Ԫ�صĵ�ַ,����Ϊ�Ƕ�ά����,������Ԫ�ص�ַ��һ������,����������ָ��������
//	return 0;
//}