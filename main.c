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
int add_reco()      //1st_funtion_other_than_main
{
  struct student book x;
  int a;
  char cho1;
  FILE *xyz;
  xyz=fopen("dkte1.txt","ab+");
  do
  {
    /* int ibsn,price,edition;
  char bnam[20],auth[30];*/
       printf("\n Enter Book's Name:");
   scanf("%d",&x.bnam);
   printf("\n Enter Name of author:");
   scanf("%d",&x.auth);
   printf("\n Enter Edition:");
   scanf("%d",&x.edition);    
   printf("\n Enter IBSN:");
   scanf("%d",&x.ibsn);
   printf("\n Enter Price:");
   scanf("%d",&x.price);
   printf("Do you want to Continue?\n Enter Y or N");
    cho1=getche();
   }while( cho1 =='Y' || cho1=='y')
    fclose(xyz);
}

int show_reco()  //2nd function
{
  struct student book x;
  int a;
  char cho1;
  FILE *xyz;
  xyz=fopen("dkte1.txt","ab+");
  do
  {
   
   printf("\n Enter Book's Name: %c",x.bnam);
   printf("\n Enter Name of author: %c",x.auth);
   printf("\n Enter Edition: %d",x.edition);
   printf("\n Enter IBSN: %d",x.ibsn);
   printf("\n Enter Price: %d",x.price);
   printf("Do you want to Continue?\n Enter Y or N");
    cho1=getche();
   }while( cho1 =='Y' || cho1=='y')
    fclose(xyz);
}

int file_info()
{
  int file_size, tot_reco;
  struct book x;
  FILE *xyz;
  xyz=fopen("dkte1.txt","ab+");
  printf("\n FILE INFO");
  fseek(xyz,o,SEEK_END);
  fsize=ftell(xyz);
  printf("\n File size=%d",filesize);
  totreco=filesize/sizeof(x);
  printf("Total No. of recoed = %d",totreco);
}
    
