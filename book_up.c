#include"lib.h"
#include<string.h>
void update(struct lb*);
void up_book(struct lb **ptr)
{
	struct lb *temp,*t1,*t2;
	temp=*ptr;
	t1=*ptr;
	t2=*ptr;
	int id;
	printf(" ----------------------------------------\n");
        printf("|      Enter details for update          |\n");
        printf("-----------------------------------------\n");
        printf("|       A:By Book ID                     |\n");
        printf("|       B:By Book Name                   |\n");
        printf("|       C:Back to main menu              |\n");
        printf("-----------------------------------------\n");
	char ch;
	printf("Enter your option for update\n");
	scanf(" %c",&ch);
	if(ch=='A')
	{
		printf("Enter book ID\n");
		scanf("%d",&id);
		while(temp)
		{
			if(temp->id==id)
			{
				printf("BOOKID   BOOKNAME    AUTHOR    NO.OF COPIES\n");
				printf("%d       %s          %s        %d\n",temp->id,temp->book,temp->author,temp->cp);
			}
			temp=temp->next;
		}
		while(t1)
		{
			if(t1->id==id)
			{
				update(t1);
			}
			t1=t1->next;
		}
	}
	else if(ch=='B')
        {
                char bookname[20];
                printf("Enter Bookname\n");
                scanf("%s",bookname);
                while(temp)
                {
                if(strcmp(temp->book,bookname)==0)
                {
                        printf("BOOKID    BOOKNAME       AUTHOR       NO.OF COPIES\n");
                        printf("%d        %s             %s           %d\n",temp->id,temp->book,temp->author,temp->cp);
                }
                temp=temp->next;
                }
                while(t2)
                {
                if(strcmp(t2->book,bookname)==0)
                {
                     update(t2);
                }
		t2=t2->next;
		}
	}
	else if(ch=='C')
		return;
}

void update(struct lb *temp)
{
                        char choice;
                        char author[20];
			int copies;
                        printf("----------------------------------\n");
                        printf("|    Choose choice to Update        |\n");
                        printf("-----------------------------------\n");
                        printf("|    N:To update author name        |\n");
                        printf("|    C:To update book copies        |\n");
                        printf("---------------------------------\n");
                        printf("enter your update method\n");
                        scanf(" %c",&choice);
                        if(choice=='N')
                        {
                                printf("enter new author name\n");
                                scanf("%s",temp->author);;
                        }
                        else if(choice=='C')
                        {
                                printf("enter no.of copies to change\n");
                                scanf("%d",&copies);
                                temp->cp=copies;
                        }
                        else
                                printf("invalid option\n");
}




