#include<stdio.h>
#include<stdlib.h>
#define Null  0

struct Grade_Info {
    int score;
    struct Grade_Info *next;
};
typedef struct Grade_Info Node;

Node *Create_LinkList();
void Insert_LinkList(Node *head);
void Delete_LinkList(Node *head);
void Free_LinkList(Node *head);
void DisPlay_LinkList(Node *head);

int main()
{
    Node *head;
	int choice;
	while(1){
		printf("\n\n");
		printf("==============线性链表处理功能菜单==============\n");
		printf("               1、创建一个链表\n");
		printf("               2、在链表中插入新的值\n");
		printf("               3、删除链表中某一个值\n");
		printf("               4、显示链表内容\n");
		printf("               5、删除链表并退出程序\n");
		printf("===============================================\n");
		printf("         功能选择（1、2、3、4、5）：");
		scanf("%d", &choice);
		printf("\n\n");

		switch(choice){
			case 1:	
					head = Create_LinkList();
					break;
			case 2: 
					Insert_LinkList(head);
					break;
			case 3:	
					Delete_LinkList(head);
					break;
			case 4:
					DisPlay_LinkList(head);
					break;
			case 5:
					Free_LinkList(head);
					exit(0);
		}
	}
	return 0;
}

Node *Create_LinkList(){
    Node *head, *pnew, *tail;
    int score;
    head = (Node *)malloc(sizeof(Node));
    if(head == NULL){
        printf("no enough memoery\n");
        return Null;
    }else{
        head -> next = Null;
        tail = head;
        printf("input the score of students:\n");
        
        while(1){
            scanf("%d", &score);
			if(score < 0){
				break;
			}else{
				pnew = (Node *)malloc(sizeof(Node));
				if(pnew == Null){
					printf("no enough memoery\n");
					return Null;
				}else{
					pnew -> score = score;
					pnew -> next = NULL;
					tail -> next = pnew;
					tail = pnew;
				}
			}
        }
    }

    return head;
}

void Insert_LinkList(Node *head){
	printf("please input the location of the score you want to insert\n");
	int i, j;
	scanf("%d", &i);
	Node *p = head;
	for(j = 0; j < i - 1&& p != Null; j++){
		p = p -> next;
	}
	if(p == Null){
		printf("the %d node not foundt!\n", i);
		return;
	}
	Node *pnew = (Node *)malloc(sizeof(Node));
	if(pnew == Null){
		printf("no enough memoery\n");
		return;
	}
	printf("please input the score of new student to insert\n");
	scanf("%d", &pnew -> score);
	pnew -> next = p -> next;
	p -> next = pnew;
}

void Delete_LinkList(Node *head){
	printf("please input the location of the score you want to delete\n");
	int i;
	scanf("%d", &i);
	if(i ==0){
		return;
	}
	int j;
	Node *p = head;
	for(j = 0; j < i - 1 && p != Null; j++){
		p = p -> next;
	}
	if(p == Null){
		printf("the %d node not foundt!\n", i);
		return;
	}else{
		Node *tem = p -> next;
		p -> next = tem -> next;
		free(tem);
	}
}

void Free_LinkList(Node *head){
	Node *p = head, *q;
	while(p -> next != Null){
		q = p -> next;
		p -> next = q -> next;
		free(q);
	}
	free(head);
}

void DisPlay_LinkList(Node *head){
	Node *p;
	for(p = head -> next; p != Null; p = p -> next){
		printf("%-4d ", p -> score);
	}
	printf("\n");
}