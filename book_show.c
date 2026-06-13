#include"lib.h"
void show(struct lb *ptr)
{
                printf("----------------------------------------------\n");
                printf("BOOKID     BOOKNAME     AUTHOR       COPIES     \n");
                printf("----------------------------------------------\n");
        while(ptr!=0)
        {
                printf("%d          %s          %s           %.d\n",ptr->id,ptr->book,ptr->author,ptr->cp);
                ptr=ptr->next;
        }
}

