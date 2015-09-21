#include<stdio.h>
#include"../../include/persion.h"
int main(void){
	
	persionPtr persion = persion_create("小代码","12345678910","xiaodaima2016@163.com");
	persion_print(persion);
	printf("小代码\nHello World\n");
	return 0;
}
