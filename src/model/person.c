#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#include "../../include/person.h"

/** @brief 创建一个联系人条目
 * 
 * @param name 姓名
 * @param phone 电话
 * @param email 电子邮箱
 * @return
 */
personPtr person_create(char *name, char * phone, char * email){
	personPtr persion = (personPtr)malloc(sizeof(_person));
	if( NULL == persion ){
		puts("persion_create分配内在失败");
		exit(0);
	}
	
	strcpy(persion->name,name);
	strcpy(persion->phone,phone);
	strcpy(persion->email,email);
	
	return persion;
}

/** @brief 输出联系人信息
 * 
 * @pre persion 不能为空
 * @param persion 要输出的联系人信息
 * @retval 0 执行成功
 * @retval 1 执行失败 
 */
int person_print( personPtr persion ){ 
	int res = 0;
	if( NULL != persion ){
		printf("%-20s%-20s%-20s\n",persion->name,persion->phone,persion->email);
	}else{
		res = 1;
	}
	
	return res;
}
