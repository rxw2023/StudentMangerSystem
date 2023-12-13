#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
typedef struct Node{
	int id;
	char name[50];
	char sex[10];
	int chinese,math,english;
	int sum;
	struct Node *next;
}node;
node List;
int readfile(node *L);
//���˵�����
void welcome( );
//����ѧ����Ϣ 
void addStuInfo( );
//ɾ��ѧ����Ϣ 
void deleStuInfo( );
//�޸�ѧ����Ϣ 
void fixStuInfo( );
//��ѯѧ����Ϣ 
void searchStuInfo( );
//���ѧ����Ϣ 
void printStuInfo( );
//�˳�����
void goodbye( );
 
int main( ){
	int choice=0;
	readfile(&List);
	scanf("%d",&choice);
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
	printf("�Ƿ���Ҫ����������(yes/no)(1/0):");
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
	printf("**  ѧ���ɼ�����ϵͳ  **\n");
	printf("**      ���ߣ�R       **\n");
	printf("**                    **\n");
    printf("**  ����ѧ����Ϣ ---1 **\n");
	printf("**  ɾ��ѧ����Ϣ ---2 **\n");
	printf("**  �޸�ѧ����Ϣ ---3 **\n");
	printf("**  ��ѯѧ����Ϣ ---4 **\n");
	printf("**  ���ѧ����Ϣ ---5 **\n");
	printf("**  �˳�����ϵͳ ---0 **\n");
	
    printf("�������Ӧ���ܣ����֣���\n");
}
//����ѧ����Ϣ 
void addStuInfo( )
{
	printf("����ѧ����Ϣ");
}
//ɾ��ѧ����Ϣ 
void deleStuInfo( )
{
   printf("ɾ��ѧ����Ϣ");	
}
//�޸�ѧ����Ϣ 
void fixStuInfo( )
{
	printf("�޸�ѧ����Ϣ");
}
//��ѯѧ����Ϣ 
void searchStuInfo( )
{
	printf("��ѯѧ����Ϣ");
}
//���ѧ����Ϣ 
void printStuInfo( )
{
	printf("���ѧ����Ϣ ");
}
//�˳�����
void goodbye( )
{
	printf("�˳�����");
}
int readfile(node *L)
{
	FILE *fpr=fopen("studentInfo.txt","r");
	node st;
	node *s;
	node *t=L;
	if(fpr==NULL){
		return 0;
	}else{
		while(fscanf(fpr,"%d %s %s %d %d %d %d",&st.id,st.name,st.sex,&st.chinese,&st.math,&st.english,&st.sum)!=EOF)
		{
		printf("%d %s %s %d %d %d %d\n",st.id,st.name,st.sex,st.chinese,st.math,st.english,st.sum);
		s=(node *)malloc(sizeof(node));
		*s=st;
		t->next=s;
		t=s;
		t->next=NULL;
	    }
	}
	return 1;
	
}
