#include <stdio.h>

//主菜单界面
void welcome( );
int main( ){
	welcome( );
	return 0;
} 
void welcome( ){
	printf("************************\n");
	printf("**  学生成绩管理系统  **\n");
	printf("**      作者：R       **\n");
	printf("**                    **\n");
    printf("**  增加学生信息 ---1 **\n");
	printf("**  删除学生信息 ---2 **\n");
	printf("**  修改学生信息 ---3 **\n");
	printf("**  查询学生信息 ---4 **\n");
	printf("**  输出学生信息 ---5 **\n");
	printf("**  退出管理系统 ---6 **\n");
	
    printf("请输入对应功能（数字）：\n");
}
