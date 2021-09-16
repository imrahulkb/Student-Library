#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
  int ibsn,price,edition;
  char bnam[20],auth[30];
};
int add_reco();   //funtion to add records
int show_reco();  //funtion to show records
int list_reco();  //function to list records
int search_reco();
int del_reco();
int modify_reco();
int file_info();

int main()
{
  int cho1;
  do{
    printf("\n 1. Add Records ");
     printf("\n2. Show Records");
     printf("\n3. List records ");
     printf("\n4. Search Records ");
     printf("\n5. Delete records ");
     printf("\n6. Modify Records ");
     printf("\n7. File Information ");
     printf("\n8. Exit ");
     printf("\n ************************************************************************************************************************");
     printf("\n\nEnter your choice ");
    scanf("%d",&cho1);
    switch(cho1)
    {
      case 1:
        add_reco();
        break ;
      case 2:
        show_reco();
        break;
         case 3:
        list_reco();
        break;
      case 4:
        search_reco();
        break;
      case 5:
        del_reco();
        break;
      case 6:
        modify_reco():
        break;
      case 7:
        file_info();
        break;
    }
  }while(cho1>=1 && cho1<=7);
  getch();
}

