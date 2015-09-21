#include<stdio.h>

#include "../../include/person.h"
int main(void){
	
	personPtr person = person_create("小代码","12345678910","xiaodaima2016@163.com");
	person_print(person);
	printf("小代码\nHello World\n");
	return 0;
}
