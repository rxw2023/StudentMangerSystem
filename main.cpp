#include <stdio.h>
#include <windows.h>
//主菜单界面
void welcome( );
//增加学生信息 
void addStuInfo( );
//删除学生信息 
void deleStuInfo( );
//修改学生信息 
void fixStuInfo( );
//查询学生信息 
void searchStuInfo( );
//输出学生信息 
void printStuInfo( );
//退出程序
void goodbye( );
 
int main( ){
	int choice=0;
	while(true){
	welcome( );
	scanf("%d",&choice);
	switch(choice){
		case 1:
			addStuInfo( );
			break;
		case 2:
			deleStuInfo( );
			break;
		case 3:
			fixStuInfo( );
			break;
		case 4:
			searchStuInfo( );
			break;
		case 5:
			printStuInfo( );
			break;
		case 0: 
		    goodbye( );
		    break; 
	}
	printf("是否需要继续操作？(yes/no)(1/0):");
	scanf("%d",&choice);
	if(choice==0){
		break;
	}
    }
    return 0;
} 
void welcome( ){
	system("cls");
	printf("************************\n");
	printf("**  学生成绩管理系统  **\n");
	printf("**      作者：R       **\n");
	printf("**                    **\n");
    printf("**  增加学生信息 ---1 **\n");
	printf("**  删除学生信息 ---2 **\n");
	printf("**  修改学生信息 ---3 **\n");
	printf("**  查询学生信息 ---4 **\n");
	printf("**  输出学生信息 ---5 **\n");
	printf("**  退出管理系统 ---0 **\n");
	
    printf("请输入对应功能（数字）：\n");
}
//增加学生信息 
void addStuInfo( )
{
	printf("增加学生信息");
}
//删除学生信息 
void deleStuInfo( )
{
   printf("删除学生信息");	
}
//修改学生信息 
void fixStuInfo( )
{
	printf("修改学生信息");
}
//查询学生信息 
void searchStuInfo( )
{
	printf("查询学生信息");
}
//输出学生信息 
void printStuInfo( )
{
	printf("输出学生信息 ");
}
//退出程序
void goodbye( )
{
	printf("退出程序");
}
