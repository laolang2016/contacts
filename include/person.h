/** @file persion.h
 * 联系人结构体定义
 * 
 */

#ifndef INCLUDE_PERSON_H_
#define INCLUDE_PERSON_H_

struct __person {
	char name[20];
	char phone[20];
	char email[30];
};

typedef struct __person _person;
typedef struct __person * personPtr;

/** @brief 创建一个联系人条目
 * 
 * @param name 姓名
 * @param phone 电话
 * @param email 电子邮箱
 * @return
 */
personPtr person_create(char *name, char * phone, char * email);

/** @brief 输出联系人信息
 * 
 * @pre persion 不能为空
 * @param persion 要输出的联系人信息
 * @retval 0 执行成功
 * @retval 1 执行失败 
 */
int person_print( personPtr persion );
#endif /* INCLUDE_PERSON_H_ */
