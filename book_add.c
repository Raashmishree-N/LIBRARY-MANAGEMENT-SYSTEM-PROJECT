#include"lib.h"
int idnum();
void book_add(struct lb **ptr)
{
	struct lb *temp=(struct lb*)malloc(sizeof(struct lb));
	printf("enter book details\n");
        int i=idnum();
        temp->id=i;	
	scanf("%s %s %d",temp->book,temp->author,&temp->cp);
	printf("BOOK DEATAILS\n");
	printf("BOOK ID:%d  BOOK NAME:%s  AUTHOR:%s  NO.OF.COPIES:%d\n",temp->id,temp->book,temp->author,temp->cp);
	if(*ptr==0)
	{
		temp->next=0;
		*ptr=temp;
	}
	else
	{
		struct lb *last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->next=0;
		last->next=temp;
	}
}
int idnum()
{
	static int i=0;
	i++;
	return i;
}
