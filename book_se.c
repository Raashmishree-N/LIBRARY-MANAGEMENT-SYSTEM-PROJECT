#include"lib.h"
void search_book(struct lb *ptr)
{
        int ch,id,found=0;
        char name[50],author[50];
        struct lb *temp=ptr;
	printf("----------------------\n");
        printf("     SEARCH MENU     \n");
	printf("----------------------\n");
        printf("   1.By Book ID\n");
        printf("   2.By Book Name\n");
        printf("   3.By Author Name\n");
        printf("   4.Back\n");
	printf("-----------------------\n");

        printf("Enter Choice:\n");
        scanf("%d",&ch);

        switch(ch)
        {
                case 1:
                        printf("Enter Book ID:\n");
                        scanf("%d",&id);

                        while(temp)
                        {
                                if(temp->id==id)
                                {
                                        printf("\nBOOK FOUND\n");
                                        printf("%d %s %s %d\n",temp->id,temp->book,temp->author,temp->cp);
                                        found=1;
                                        break;
                                }
                                temp=temp->next;
                        }

                        if(found==0)
                                printf("Book Not Found\n");

                        break;

                case 2:

                        printf("Enter Book Name:\n");
                        scanf("%s",name);

                        while(temp)
                        {
                                if(strcmp(temp->book,name)==0)
                                {
                                        printf("%d %s %s %d\n",temp->id,temp->book,temp->author,temp->cp);
                                        found=1;
                                }
                                temp=temp->next;
                        }

                        if(found==0)
                                printf("Book Not Found\n");
                        break;

                case 3:

                        printf("Enter Author Name:\n");
                        scanf("%s",author);

                        while(temp)
                        {
                                if(strcmp(temp->author,author)==0)
                                {
                                        printf("%d %s %s %d\n",temp->id,temp->book,temp->author,temp->cp);
                                        found=1;
                                }

                                temp=temp->next;
                        }

                        if(found==0)
                                printf("Author Not Found\n");

                        break;
        }
}
