#include <stdio.h> 
#include <stdlib.h> 

int main() {

	int year,month,day ;
	printf("請輸入你的出生年分:");
	scanf("%d",&year);
	printf("請輸入你的出生月分:");
	scanf("%d",&month);
	printf("請輸入你的出生日期:");
	scanf("%d",&day);
	printf("你的出生年月日為: %d , %d , %d\n",year,month,day);
	system("pause");
	return 0 ;
}
