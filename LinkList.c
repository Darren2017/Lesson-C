#include<stdio.h>
#include<stdlib.h>
#define Null  0

struct Grade_Info {
    int score;
    struct Grade_Info *next;
};
typedef struct Grade_Info Node;

Node *Create_LinkList();
void Insert_LinkList(Node *head, int i);
void Delete_LinkList(Node *head, int i);
void Add_LinkList(Node *head, int i);
void DisPlay_LinkList(Node *head)

void main()
{
    Node *head, *pnew;
    head = Create_LinkList();
	DisPlay_LinkList(head);
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

void DisPlay_LinkList(Node *head, int i){
	Node *p;
	for(*p = head -> next; p != Null; p = p -> next){
		printf("%4d", p -> score);
	}
	printf("\n);
}