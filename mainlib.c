#include"lib.h"
void book_add(struct lb **);
void up_book(struct lb **);
void id_rm(struct lb **);
void name_rm(struct lb **);
void search_book(struct lb *);
void show(struct lb*);
void issue_book(struct lb **,struct issue **);
void return_book(struct lb **,struct issue **);
void save(struct lb *,struct issue *);
void list_books(struct issue *);
int main()
{
	char ch,n;
	struct lb *hptr=0;
	struct issue *iptr=0;
	do
	{
		printf("     BOOK MANAGEMENT MENU STRUCTURE    \n");
		printf("---------------------------------------\n");
		printf("     1.ADD NEW BOOK                    \n");
		printf("     2.UPDATE BOOK DETAILS             \n");
		printf("     3.REMOVE BOOK                     \n");
		printf("     4.SEARCHH BOOK                    \n");
		printf("     5.VIEW ALL BOOKS                  \n");
		printf("     6.ISSUE BOOK                      \n");
		printf("     7.RETURN BOOK                     \n");
		printf("     8.LIST ISSUED BOOKS               \n");
		printf("     9.SAVE                            \n");
		printf("     E.EXIT 	                       \n");
		printf("\n");
		printf("For Menu Operation Enter Y\n");
		scanf(" %c",&ch);
		if(ch=='Y')
		{
			printf("choose your menu\n");
			scanf(" %c",&n);
			if(n=='1')
			{
				char op;
				do
				{
					book_add(&hptr);
					printf("for adding more books enter y\n");
					scanf(" %c",&op);
				}while(op=='y');
			}
			else if(n=='2')
			{
				up_book(&hptr);
			}
			else if(n=='3')
			{
                                char ch;
                                printf("-------------------------------\n");
                                printf("|        REMOVE MENU           |\n");
                                printf(" -------------------------------\n");
                                printf("|      I:based on BookID       |\n");
                                printf("|      N:based on Name         |\n");
                                printf("-------------------------------\n");
                                scanf(" %c",&ch);
                                 if(ch=='I')
                                 {
                                         id_rm(&hptr);
                                         printf("Successfully removed\n");
                                 }
                                 else if(ch=='N')
                                 {
                                        name_rm(&hptr);
                                        printf("Successfully removed\n");
                                 }
			}
			else if(n=='4')
			{
				search_book(hptr);
			}
			else if(n=='5')
			{
				 show(hptr);
			}

			else if(n=='6')
                        { 
                                issue_book(&hptr,&iptr);
                        }
                        else if(n=='7')
                        {
                                return_book(&hptr,&iptr);
                        }
                        else if(n=='8')
                        {
                                list_books(iptr);
                        }
                       else if(n=='9')
                        {
                                save(hptr,iptr);
                        }
                         else if(n=='E')
                        {
                               exit(0);
                         }
		}
	}while(ch=='Y');
}
