//header files
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>



//main prototypes
void snake_game();
void scientific_calculator();
void tourism();
void hotel();
void bus();
void train();
void flight();
void atm();
void library();
void evm();
int front_page();
void menu();

//prototype-graphics
int circles_full(int maxx,int maxy);
int corners(int maxx,int maxy);
int eraser(int maxx,int maxy);
int text_float(int maxx,int maxy);
int text_float1(int maxx,int maxy);
int text_float2(int maxx,int maxy);
int flower_circles(int maxx,int maxy);
int circles_sides(int maxx,int maxy);
int circles_half(int maxx,int maxy);
int rect(int maxx,int maxy);
int circ(int maxx,int maxy);


//prototype-snake game
void setup();
void draw();
void input();
void logic();

//prototype-tourism
void search_tour();
void add_tour();
void update_tour();
void del_tour();
void delete_all_tour();


//prototype-hotel
void add_hotels();
void room_details();
void room_booking(char *);
void room_checkout();
void feedback();
void delete_all_hotel();
void room_deallocate(int,char*);
void guest_information();


//prototype-bus
void add_bus();
void search_bus();
void seat_booking_bus(char *);
void bus_depart();
void seat_deallocate_bus(int ,char * );
void traveller_information_bus();
void delete_all_bus();
void bye_bus();


//prototype-train
void add_train();
void search_train();
void seat_booking_train(char *);
void train_depart();
void seat_deallocate_train(int ,char * );
void traveller_information_train();
void delete_all_train();
void bye_train();


//prototype-flight
void add_flight();
void search_flight();
void seat_booking_flight();
void flight_depart();
void seat_deallocate_flight(int ,char * );
void traveller_information_flight();
void delete_all_flight();
void bye_flight();


//prototype-atm
void read_user();
void print_user();
void search_user();
void update_user();
void del_user();
void deposit_amount();
void withdraw_amount();
void del_all_atm();

//prototype-library
void admin();
void student();
void book_entry();
void book_detail();
void book_delete();
void issue_book();
void submit_book();
void delete_all();
void student_entry();
void student_update();
void student_delete();
void student_detail();
int book_issue();


//prototype-EVM
void search_cand();
void add_cand();
void update_cand();
void del_cand();
void delete_all_cand();
void vote();
void vote_it(char *);
void result();

//global variables
int flag=0;
int choice,choice1,choice2;
char hotel_name[10];
char bus_name[10];
char train_name[10];
char flight_name[10];
int maxx,maxy;
int i,j;
//calculator
int choice,mode,a,b,c,p,n,r,k,maxx,maxy;
float d,e;
int i=0,j=0,s=0,m=1;
long int decimalnum,remainder,quotient;
int octalnumber[100];
long decimalnum,quotient,remainder;
char hexadecimal[100];
void list();
void box();
void calculator(int);

//structure-snake game
int gameover;
int _kbhit(void);
const int width=20;
const int height=20;
int x,y,fruitx,fruity,score;
int tailx[100],taily[100];
int ntail=0;
enum eDirection{STOP=0,LEFT,RIGHT,UP,DOWN};
enum eDirection dir;

//structure-tourism
struct tour
{
  char city[10];
  char place[10];
  char agency[10];
}t;


//structure-hotel
struct hotel
{
	char hotel_name[20];
	char hotel_city[20];
	int hotel_rooms;
	int amount;
	int hotel_room[1000];
	int rooms_filled;
	struct guest
	{
		char guest_name[20];
		int guest_mob_no[10];
		char guest_address[100];
		char guest_mode[10];
		int guest_no_rooms;
		int room_no;
	}go;
}ho;


//structure-bus
struct bus
{
 char bus_name[10];
 char bus_no[15];
 char bus_start[10];
 char bus_stop[10];
 int bus_seats;
 int bus_seat[100];
 int bus_ticket;
 int seats_filled;
 int seats_empty;

      struct traveller_bus
      {
	char traveller_name[10];
	int seat_no;
      }to;
}bo;


//structure-train
struct train
{
 char train_name[10];
 char train_no[15];
 char train_start[10];
 char train_stop[10];
 int train_seats;
 int train_seat[100];
 int train_ticket;
 int seats_filled;
 int seats_empty;

      struct traveller_train
      {
	char traveller_name[10];
	int seat_no;
      }to;
}tto;


//structure-flight
struct flight
{
 char flight_name[10];
 char flight_no[15];
 char flight_start[10];
 char flight_stop[10];
 int flight_seats;
 int flight_seat[100];
 int flight_ticket;
 int seats_filled;
 int seats_empty;

      struct traveller_flight
      {
	char traveller_name[10];
	int seat_no;
      }to;
}fo;


//structure-atm
struct ATM
{
	int ano;
	char name[20];
	float bal;
}A;

//structure-library
struct book
{
 char book_name[15];
 char book_subject[15];
 char book_stream[15];
 char book_code[15];
 char book_issue;
}bk;

struct student
{
 char stud_name[20];
 char stud_reg_no[20];
 char stud_email[20];
 char stud_mobile[20];
 int no_book;
 char book_code[10];
}st;


//structure-EVM
struct cand
{
 char cand_name[10];
 char cand_party[10];
 char cand_symbol[10];
 char cand_ward[10];
 int cand_vote;
}co;




void main()
{
    int i,j,k;
    int gd=DETECT,gm,maxx,maxy,errorcode;
    initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
    errorcode=graphresult();
    if(errorcode!=grOk)
    {
      printf("graphics error: %s \n",grapherrormsg(errorcode));
      printf("press any key to halt");
      getch();
    }
    maxx=getmaxx();
    maxy=getmaxy();

    while(1)
    {
	clrscr();
	cleardevice();
	i=front_page();
	if(i==0)
	   {
	    cleardevice();
	    setbkcolor(0);
	    setcolor(5);
	    settextstyle(7,0,7);
	    outtextxy(30,maxy/2,"Wrong password");
	    getch();
	    exit(0);
	   }
	else
	{
	menu();
	}
    }
}
void menu()
{
	cleardevice();
	setbkcolor(3);
	corners(maxx,maxy);
	setcolor(BLUE);
	settextstyle(4,0,4);
	outtextxy(100,50,"Welcome to Wonder of selection");
	gotoxy(10,10);
	printf("\n 1: Time for Entertainment");
	printf("\n 2: Time for study(calculation)");
	printf("\n 3: Time for Vacations");
	printf("\n 4: Time for books");
	printf("\n 5: Time for election");
	printf("\n 6: Exit");
	printf("\n Please Enter your choice :-  ");
	scanf("%d",&choice);
     //	eraser(maxx,maxy);
	switch(choice)
	{
	  case 1:
		  setcolor(5);
		  outtextxy(200,350," Let's play the snake game");
		  rect(maxx,maxy);
		  snake_game();
		  getch();
		  break;
	  case 2:
		  printf("\n You need scientific calculator");
		  printf("\n Let's open it");
		  scientific_calculator();
		  getch();
		  break;
	  case 3:
		  cleardevice();
		  setbkcolor(6);
		  corners(maxx,maxy);
		//  circles_sides(maxx,maxy);
		  choice1=text_float(maxx,maxy);
		  delay(5);
		  cleardevice();
		  setbkcolor(0);
		  switch(choice1)
		  {
		     case 1:
			     cleardevice();
			     setbkcolor(4);
			     tourism();
			     getch();
			     break;
		     case 2:
			     cleardevice();
			     setbkcolor(5);
			     hotel();
			     getch();
			     break;
		     case 3:
			     cleardevice();
			     setbkcolor(6);
			     choice2=text_float1(maxx,maxy);
			     switch(choice2)
			     {
				case 1:
				       cleardevice();
				       setbkcolor(8);
				       bus();
				       getch();
				       break;
				case 2:
				       cleardevice();
				       setbkcolor(9);
				       train();
				       getch();
				       break;
				case 3:
				       cleardevice();
				       setbkcolor(10);
				       flight();
				       getch();
				       break;
				case 4:
				       cleardevice();
				       menu();
				       getch();
				       break;
				default:
					printf("\n Wrong choice");
			     }
			     getch();
		     case 4:
			  //   cleardevice();
			  //   setbkcolor(7);
			     atm();
			     getch();
			     break;
		     case 5:
			      menu();
		     default:
			     printf("Wrong choice");
		  }
	  case 4:
		    delay(10);
		    cleardevice();
		    for(j=maxy;j>=0;j--)
		    {
			    setcolor(4);
			    settextstyle(5,0,7);
			    outtextxy(i+20,j,"Lets take off to library");
			    delay(5);
			    setcolor(0);
			    outtextxy(i+20,j,"Lets take off to library");

		    }
		    setcolor(4);
		    outtextxy(i+20,j,"Lets take off to library");
		    cleardevice();
	       //	    setbkcolor(0);
	       //	    circles_half(maxx,maxy);
		    setbkcolor(9);
		    settextstyle(7,0,7);
		    gotoxy(10,10);
		    library();
		    getch();
		    break;
	  case 5:
		    cleardevice();
		     for(j=0;j<=maxy;j++)
		    {
			    setcolor(4);
			    settextstyle(5,0,6);
			    outtextxy(i+20,j,"Let's go to voting machine");
			    delay(5);
			    setcolor(0);
			    settextstyle(5,0,6);
			    outtextxy(i+20,j,"Let's go to voting machine");

		    }
		    setcolor(4);
		    settextstyle(5,0,6);
		    outtextxy(i+20,j,"Let's go to voting machine");
		    cleardevice();
		    setbkcolor(7);
		    corners(maxx,maxy);
		//    text_float2(maxx,maxy);
		    circ(maxx,maxy);
		    getch();
		    evm();
		    getch();
		    break;
	  case 6:
		  exit(1);
	  default:
		  printf("\n Wrong choice");
	}//switch close
}

//bus
void bus()
{
  while(1)
     {
	 cleardevice();
	 setbkcolor(BLUE);
	 gotoxy(10,10);
	 printf("Welcome To booking");
	 printf("\n 1:Want to add bus");
	 printf("\n 2:want to search bus");
	 printf("\n 3:Want to book seat");
	 printf("\n 4:Want to depart from bus");
	 printf("\n 5:Want traveller information");
	 printf("\n 6:Want to delete all ");
	 printf("\n 7:Go to home page ");
	 printf("\n Enter your choice \n \t \t");
	 scanf("%d",&choice);
	 gotoxy(10,10);
	 switch(choice)
	 {
	  case 1:
		 add_bus();
		 getch();
		 break;
	  case 2:
		 search_bus();
		 getch();
		 break;
	  case 3:
		 clrscr();
		 printf("Enter the name of bus for booking");
		 flushall();
		 gets(bus_name);
		 seat_booking_bus(bus_name);
		 getch();
		 break;
	  case 4:
		 bus_depart();
		 getch();
		 break;
	  case 5:
		 traveller_information_bus();
		 getch();
		 break;
	  case 6:
		 delete_all_bus();
		 getch();
		 break;
	  case 7:
		 menu();
		 break;
	  default:
		 printf("\n Wrong choice");
		 menu();
	 }
	 printf("\n Thank you sir");
      }
}

//bus-sub- definitions
void add_bus()
{
	  int i,j;
	  FILE *fp;
	  fp=fopen("bus.txt","ab");
	  if(fp==NULL)
	     {
	      printf("\n can't open file");
	      exit(1);
	     }
	  clrscr();
	  printf("\n Enter the name of bus  ");
	  flushall();
	  gets(bo.bus_name);
	  printf("\n Enter the bus number  ");
	  flushall();
	  gets(bo.bus_no);
	  printf("\n Enter the starting point  ");
	  flushall();
	  gets(bo.bus_start);
	  printf("\n Enter the ending point  ");
	  flushall();
	  gets(bo.bus_stop);
	  printf("\n Enter the number of seats  ");
	  flushall();
	  scanf("%d",&bo.bus_seats);
    for(i=0;i<bo.bus_seats;i++)
      {
       bo.bus_seat[i]=0;
      }
	  printf("\n Enter the fare for journey  ");
	  flushall();
	  scanf("%d",&bo.bus_ticket);
	  bo.seats_filled=0;
	  printf("\n Details has been added successfully");
	  fwrite(&bo,sizeof(bo),1,fp);  /* 1 is written for infinite loop*/
	  fclose(fp);
}

void search_bus()
{
	  char city[10],bus_name[10];
	  int i;
	  FILE *fp;
	  int book_it,flag;
	  clrscr();
	  flag=0;
	  fp=fopen("bus.txt","rb");
	  if(fp==NULL)
	     {
	       printf("\n can't open file");
	       exit(1);
	     }
	  clrscr();
	  printf("\n Enter the starting city:-  ");
	  flushall();
	  gets(city);
	  while(fread(&bo,sizeof(bo),1,fp)==1)
	  {

		  if(strcmp(bo.bus_start,city)==0)
		  {
		    flag=1;
		    printf("\n Name of bus : %s", bo.bus_name);
		    printf("\n Bus number : %s",bo.bus_no);
		    printf("\n Total number of seats are %d",bo.bus_seats);
		    printf("\n Total number of booked seats are %d",bo.seats_filled);
		    printf("\n Total number of empty seats are %d",bo.bus_seats-bo.seats_filled);
		    printf("\n The fare of seats are %d",bo.bus_ticket);
		    printf(" \n next match is \n");
		  }
	  }
	  if(flag==1)
	  {
		  printf("\n Want to book the seat ,press \n \t 1 for yes \n \t 0 for no  ");
		  flushall();
		  scanf("%d",&book_it);
		  if(book_it==1)
		     {
			printf("\n Enter the name of bus \t");
			flushall();
			gets(bus_name);
			seat_booking_bus(bus_name);
		     }
	  }
	  else
	  {
		   printf(" sorry! No bus found");
	  }
	  fclose(fp);
}

void seat_booking_bus(char *bus_name1)
{
	  int i,book_it,flag=0;
	  FILE *fp,*fq;
	  fp=fopen("bus.txt","rb");
	  fq=fopen("temp.txt","wb");
	  if(fp==NULL)
	    {
	      printf("can't open the file");
	      exit(1);
	    }
	  while(fread(&bo,sizeof(bo),1,fp)==1)
	   {
	      if(strcmp(bo.bus_name,bus_name1)==0)
	     {
		    i=0;
		    hellob:
		    if(bo.bus_seat[i]==0)
		    {
		      if(bo.seats_filled<bo.bus_seats)
		      {
			 flag=1;
			 bo.to.seat_no=1+i;
			 bo.bus_seat[i]=1;
			 bo.seats_filled++;
			 printf("\n Enter your full name \t");
			 flushall();
			 gets(bo.to.traveller_name);
			 printf("\n your seat number in %s bus is: %d",bo.bus_name,bo.to.seat_no);
			 fwrite(&bo,sizeof(bo),1,fq);
			}
			else
			{
			 printf("No seats left");
			}
		      }
		      else
		      {
			 i++;
			 goto hellob;
		      }
	      }
	      else
	      {
		fwrite(&bo,sizeof(bo),1,fq);
	      }
	   }
	 fcloseall();
	 remove("bus.txt");
	 rename("temp.txt","bus.txt");
}
void bus_depart()
{
	int seat_no;
	char bus_name[10];
	printf("\n plz can you tell the  name of bus \t");
	flushall();
	gets(bus_name);
	printf("\n Plz can you tell your seat number \t");
	scanf("%d",&seat_no);
	seat_deallocate_bus(seat_no,bus_name);
}
void seat_deallocate_bus(int seat_no,char * bus_name1)
{
	    int i;
	    FILE *fp,*fq;
	    fp=fopen("bus.txt","rb");
	    fq=fopen("temp.txt","wb");
	    clrscr();
	    flag=0;
	    if(fp==NULL || fq==NULL)
	    {
	      printf("\n can't open the file");
	      exit(1);
	    }
	    while(fread(&bo,sizeof(bo),1,fp)==1)
	    {
		 if(strcmp(bo.bus_name,bus_name1)!=0)
		  {
		    fwrite(&bo,sizeof(bo),1,fq);
		  }
		 else
		  {
			flag=1;
			bo.bus_seat[seat_no]=0;
			bo.seats_filled--;
			fwrite(&bo,sizeof(bo),1,fq);
		  }
	    }
	    if(flag==0)
		printf("\n Sorry! Bus not found");
	    else
		printf("\n Thank you sir for travelling in bus");
	fcloseall();
	remove("bus.txt");
	rename("temp.txt","bus.txt");
}

void traveller_information_bus()
{
	 int i,j;
	 char bus_name1[15];
	 FILE *fp;
	 fp=fopen("bus.txt","rb");
	 clrscr();
	 flag=0;
	 if(fp==NULL)
	 {
	   printf("\n can't open the file");
	   exit(1);
	 }
	 printf("Enter the name of bus");
	 flushall();
	 gets(bus_name1);
	 while(fread(&bo,sizeof(bo),1,fp)==1)
	 {
		   if(strcmp(bo.bus_name,bus_name1)==0)
		    {
			  printf("\n Entry is:");
			  flag=1;
			  printf("\n Name of customer is:\t");
			  puts(bo.to.traveller_name);
			  printf("Seat number of customer is \t:%d",bo.to.seat_no);
			  printf("\n");

		    }

	  }
	  if(flag==0)
		printf("\n Sorry no entries are present");
	  else
	      printf("Press any key to continue");
	  fclose(fp);
}

void delete_all_bus()
{
 clrscr();
 remove("bus.txt");
 printf("\n All data have been removed");
 printf("\n Thank You");
}

void bye_bus()
{
 printf("Thank you to join us");
 printf("Hope! you have enjoyed it");
 exit(0);
}

//train
void train()
{
  while(1)
	{
	 cleardevice();
	 setbkcolor(BLUE);
	 gotoxy(10,10);
	 printf("Welcome To Train booking");
	 printf("\n 1:Want to add train");
	 printf("\n 2:want to search train");
	 printf("\n 3:Want to book seat");
	 printf("\n 4:Want to depart from train");
	 printf("\n 5: Want traveller information");
	 printf("\n 6:Want to delete all ");
	 printf("\n 7:Goto Home page ");
	 printf("\n Enter your choice \n \t \t");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:
		 add_train();
		 getch();
		 break;
	  case 2:
		 search_train();
		 getch();
		 break;
	  case 3:
		 clrscr();
		 printf("Enter the name of train for booking");
		 flushall();
		 gets(train_name);
		 seat_booking_train(train_name);
		 getch();
		 break;
	  case 4:
		 train_depart();
		 getch();
		 break;
	  case 5:
		 traveller_information_train();
		 getch();
		 break;
	  case 6:
		 delete_all_train();
		 getch();
		 break;
	  case 7:
		 menu();
		 getch();
		 break;
	 }
      }
}

//train-sub-definitions
void add_train()
{
	  int i,j;
	  FILE *fp;
	  fp=fopen("train.txt","ab");
	  if(fp==NULL)
	     {
	      printf("\n can't open file");
	      exit(1);
	     }
		  clrscr();
		  printf("\n Enter the name of train:-  ");
		  flushall();
		  gets(tto.train_name);
		  printf("\n Enter the train number:-  ");
		  flushall();
		  gets(tto.train_no);
		  printf("\n Enter the starting point:-  ");
		  flushall();
		  gets(tto.train_start);
		  printf("\n Enter the ending point:-  ");
		  flushall();
		  gets(tto.train_stop);
		  printf("\n Enter the number of seats:-  ");
		  flushall();
		  scanf("%d",&tto.train_seats);
		  for(i=0;i<tto.train_seats;i++)
		  {
		    tto.train_seat[i]=0;
		  }
		  printf("\n Enter the fare for journey:- ");
		  flushall();
		  scanf("%d",&tto.train_ticket);
		  tto.seats_filled=0;
		  printf("\n Details are added successfully");
		  fwrite(&tto,sizeof(tto),1,fp);  /* 1 is written for infinite loop*/
		  fclose(fp);
}

void search_train()
{
	  char city[10],train_name[10];
	  int i,book_it;
	  FILE *fp;
	  clrscr();
	  flag=0;
	  fp=fopen("train.txt","rb");
	  if(fp==NULL)
	     {
	       printf("\n can't open file");
	       exit(1);
	     }
	  clrscr();
	  printf("\n Enter the starting city:-  ");
	  flushall();
	  gets(city);
	  while(fread(&tto,sizeof(tto),1,fp)==1)
	  {
		  if(strcmp(tto.train_start,city)==0)
		  {
		    flag=1;
		    printf("\n Name of train :- %s", tto.train_name);
		    printf("\n Train number :- %s",tto.train_no);
		    printf("\n Total number of seats are:- %d",tto.train_seats);
		    printf("\n Total number of ttooked seats are:- %d",tto.seats_filled);
		    printf("\n Total number of empty seats are:- %d",tto.train_seats-tto.seats_filled);
		    printf("\n The fare of seats are :-%d",tto.train_ticket);
		    printf(" \n next match is \n");
		  }
	  }
	  if(flag==1)
	  {
		  printf("\n Want to book the seat ,press \n \t 1 for yes \n \t 0 for no  ");
		  flushall();
		  scanf("%d",&book_it);
		  if(book_it==1)
		     {
			printf("\n Enter the name of train:-  ");
			flushall();
			gets(train_name);
			seat_booking_train(train_name);
		     }
	  }
	  else
	  {
		   printf("\n Sorry! No train found");
	  }
	 fclose(fp);
}

void seat_booking_train(char *train_name1)
{
	  int i,book_it;
	  FILE *fp,*fq;
	  clrscr();
	  flag=0;
	  fp=fopen("train.txt","rb");
	  fq=fopen("temp.txt","wb");
	  if(fp==NULL)
	    {
	      printf("\n can't open the file");
	      exit(1);
	    }
	  while(fread(&tto,sizeof(tto),1,fp)==1)
	   {
	      if(strcmp(tto.train_name,train_name1)==0)
	     {
		   i=0;
		   hellot:
		   if(tto.train_seat[i]==0)
		   {
		     if(tto.seats_filled<tto.train_seat)
		      {
			 flag=1;
			 tto.to.seat_no=1+i;
			 tto.train_seat[i]=1;
			 tto.seats_filled++;
			 printf("\n Enter your full name:-  ");
			  flushall();
			  gets(tto.to.traveller_name);
			  printf("\n your seat number in %s train is:-  %d",tto.train_name,tto.to.seat_no);
			  fwrite(&tto,sizeof(tto),1,fq);
			}
			else
			{
			 printf("\n No seats left");
			}
		     }
		     else
		     {
			i++;
			goto hellot;
		     }
	      }
	      else
	      {
		fwrite(&tto,sizeof(tto),1,fq);
	      }
	   }
	 fcloseall();
	 remove("train.txt");
	 rename("temp.txt","train.txt");
}
void train_depart()
{
	int seat_no;
	char train_name[10];
	clrscr();
	printf("\n plz can you tell the  name of train:-  ");
	flushall();
	gets(train_name);
	printf("\n Plz can you tell your seat number:-  ");
	scanf("%d",&seat_no);
	seat_deallocate_train(seat_no,train_name);
}
void seat_deallocate_train(int seat_no,char * train_name1)
{
	    int i;
	    FILE *fp,*fq;
	    flag=0;
	    fp=fopen("train.txt","rb");
	    fq=fopen("temp.txt","wb");
	    clrscr();
	    if(fp==NULL || fq==NULL)
	    {
	      printf("\n can't open the file");
	      exit(1);
	    }
	    while(fread(&tto,sizeof(tto),1,fp)==1)
	    {
		 if(strcmp(tto.train_name,train_name1)!=0)
		  {
		    fwrite(&tto,sizeof(tto),1,fq);
		  }
		 else
		  {
			flag=1;
			tto.train_seat[seat_no]=0;
			tto.seats_filled--;
			fwrite(&tto,sizeof(tto),1,fq);
		  }
	    }
	   if(flag==0)
		printf("\n Sorry! train not found");
	    else
		printf("\n Thank you sir for travelling in train");
	fcloseall();
	remove("train.txt");
	rename("temp.txt","train.txt");
}

void traveller_information_train()
{
	 int i,j;
	 char train_name1[15];
	 FILE *fp;
	 flag=0;
	 clrscr();
	 fp=fopen("train.txt","rb");
	 if(fp==NULL)
	 {
	   printf("\n can't open the file");
	   exit(1);
	 }
	 printf("\n Enter the name of train:-  ");
	 flushall();
	 gets(train_name1);
	 while(fread(&tto,sizeof(tto),1,fp)==1)
	 {
	   if(strcmp(tto.train_name,train_name1)==0)
	    {
		  printf("\n Entry is:");
		  flag=1;
		  printf("\n Name of customer is:-  ");
		  puts(tto.to.traveller_name);
		  printf("Seat number of customer is \t:-  %d",tto.to.seat_no);
		  printf("\n");
	    }
	  }
	  if(flag==0)
	      printf("\n Sorry! No train found");
	  else
	      printf("\n Press any key to continue");
	  fclose(fp);
}

void delete_all_train()
{
	 clrscr();
	 remove("train.txt");
	 printf("\n All data have been removed");
	 printf("\n Thank You");
}

void bye_train()
{
	 printf("Thank you to join us");
	 printf("Hope! you have enjoyed it");
	 exit(0);
}

//flight
void flight()
{
  while(1)
	{
	 cleardevice();
	 setbkcolor(BLUE);
	 gotoxy(10,10);
	 printf("Welcome To booking");
	 printf("\n 1:Want to add flight");
	 printf("\n 2:want to search flight");
	 printf("\n 3:Want to book seat");
	 printf("\n 4:Want to depart from flight");
	 printf("\n 5:Want traveller information");
	 printf("\n 6:Want to delete all ");
	 printf("\n 7:Goto Home page ");
	 printf("\n Enter your choice:-  ");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:
		 add_flight();
		 getch();
		 break;
	  case 2:
		 search_flight();
		 getch();
		 break;
	  case 3:
		 seat_booking_flight(flight_name);
		 getch();
		 break;
	  case 4:
		 flight_depart();
		 getch();
		 break;
	  case 5:
		 traveller_information_flight();
		 getch();
		 break;
	  case 6:
		 delete_all_flight();
		 getch();
		 break;
	  case 7:
		 menu();
		 getch();
		 break;
	 }
	 getch();
	}
}
//flight-sub-definitions
void add_flight()
{
	  int i,j;
	  FILE *fp;
	  fp=fopen("flight.txt","ab");
	  if(fp==NULL)
	     {
	      printf("\n can't open file");
	      exit(1);
	     }
		  clrscr();
		  printf("\n Enter the name of flight:-  ");
		  flushall();
		  gets(fo.flight_name);
		  printf("\n Enter the flight number:-  ");
		  flushall();
		  gets(fo.flight_no);
		  printf("\n Enter the starting point:-  ");
		  flushall();
		  gets(fo.flight_start);
		  printf("\n Enter the ending point:-  ");
		  flushall();
		  gets(fo.flight_stop);
		  printf("\n Enter the number of seats:-  ");
		  flushall();
		  scanf("%d",&fo.flight_seats);
	    for(i=0;i<fo.flight_seats;i++)
	      {
	       fo.flight_seat[i]=0;
	      }
		  printf("\n Enter the fare for journey:-  ");
		  flushall();
		  scanf("%d",&fo.flight_ticket);
		  fo.seats_filled=0;
		  printf("\n Details has been added successfully");
		  fwrite(&fo,sizeof(fo),1,fp);  /* 1 is written for infinite loop*/
		  fclose(fp);
}

void search_flight()
{
	  char city[10],flight_name[10];
	  int i,book_it;
	  FILE *fp;
	  clrscr();
	  flag=0;
	  fp=fopen("flight.txt","rb");
	  if(fp==NULL)
	     {
	       printf("\n can't open file");
	       exit(1);
	     }
	  printf("\n Enter the starting city:-  ");
	  flushall();
	  gets(city);
	  while(fread(&fo,sizeof(fo),1,fp)==1)
	  {
		  if(strcmp(fo.flight_start,city)==0)
		  {
		    flag=1;
		    printf("\n Name of flight : %s", fo.flight_name);
		    printf("\n Flight number : %s",fo.flight_no);
		    printf("\n Total number of seats are %d",fo.flight_seats);
		    printf("\n Total number of booked seats are %d",fo.seats_filled);
		    printf("\n Total number of empty seats are %d",fo.flight_seats-fo.seats_filled);
		    printf("\n The fare of seats are %d",fo.flight_ticket);
		    printf(" \n next match is \n");
		  }
	  }
	  if(flag==0)
		printf("\n Sorry! No flight found");
	  else
		printf("\n Press any key to continue");
	  fclose(fp);
}

void seat_booking_flight()
{
	  int i,book_it,flag=0;
	  FILE *fp,*fq;
	  char flight_name1[20];
	  clrscr();
	  flag=0;
	  fp=fopen("flight.txt","rb");
	  fq=fopen("temp.txt","wb");
	  if(fp==NULL)
	    {
	      printf("can't open the file");
	      exit(1);
	    }
	  printf(" \n Enter the name of flight for booking:-  ");
	  flushall();
	  gets(flight_name1);
	  while(fread(&fo,sizeof(fo),1,fp)==1)
	   {
	      if(strcmp(fo.flight_name,flight_name1)==0)
	     {
		i=0;
		hellof:
		  if(fo.flight_seat[i]==0)
		   {
		       if(fo.seats_filled<fo.flight_seats)
			{
			 flag=1;
			 fo.to.seat_no=1+i;
			 fo.flight_seat[i]=1;
			 fo.seats_filled++;
			 printf("\n Enter your full name:-  ");
			 flushall();
			 gets(fo.to.traveller_name);
			 printf("\n your seat number in %s flight is:- %d",fo.flight_name,fo.to.seat_no);
			 fwrite(&fo,sizeof(fo),1,fq);
		       }
		       else
			  {
				 printf("No seats left");
			  }
		     }
		     else
		     {
			i++;
			goto hellof;
		     }
	      }
	      else
	      {
		 fwrite(&fo,sizeof(fo),1,fq);
	      }
	   }
	   fcloseall();
	   remove("flight.txt");
	   rename("temp.txt","flight.txt");
}
void flight_depart()
{
	int seat_no;
	char flight_name[10];
	clrscr();
	printf("\n Enter the name of flight:-   ");
	flushall();
	gets(flight_name);
	printf("\n Enter your seat number:-   ");
	scanf("%d",&seat_no);
	seat_deallocate_flight(seat_no,flight_name);
}
void seat_deallocate_flight(int seat_no,char * flight_name1)
{
	    int i;
	    FILE *fp,*fq;
	    fp=fopen("flight.txt","rb");
	    fq=fopen("temp.txt","wb");
	    flag=0;
	    clrscr();
	    if(fp==NULL || fq==NULL)
	    {
	      printf("\n can't open the file");
	      exit(1);
	    }
	    while(fread(&fo,sizeof(fo),1,fp)==1)
	    {
		 if(strcmp(fo.flight_name,flight_name1)!=0)
		  {

			fwrite(&fo,sizeof(fo),1,fq);
		  }
		 else
		  {
			flag=1;
			fo.flight_seat[seat_no]=0;
			fo.seats_filled--;
			fwrite(&fo,sizeof(fo),1,fq);
		  }
	    }
	    if(flag==0)
		printf("\n Sorry! Flight not found");
	    else
		printf("\n Thank you sir for Travelling in flight");

	fcloseall();
	remove("flight.txt");
	rename("temp.txt","flight.txt");
}

void traveller_information_flight()
{
	 int i,j;
	 char flight_name1[15];
	 FILE *fp;
	 clrscr();
	 flag=0;
	 fp=fopen("flight.txt","rb");
	 if(fp==NULL)
	 {
	   printf("\n can't open the file");
	   exit(1);
	 }
	 printf("\n Enter the name of flight:-  ");
	 flushall();
	 gets(flight_name1);
	 while(fread(&fo,sizeof(fo),1,fp)==1)
	 {
	   if(strcmp(fo.flight_name,flight_name1)==0)
	    {
		  flag=1;
		  printf("\n Entry is:-  ");
		  printf("\n Name of customer is:-  \t");
		  puts(fo.to.traveller_name);
		  printf("\n Seat number of customer is :-  %d",fo.to.seat_no);
		  printf("\n");

	    }
	  }
	  if(flag==0)
	      printf("\n Sorry no traveller found");
	  else
	      printf("Press any key to continue");
	  fclose(fp);
}

void delete_all_flight()
{
	 clrscr();
	 remove("flight.txt");
	 printf("\n All data have been removed");
	 printf("\n Thank You");
}

void bye_flight()
{
	 printf("\n Thank you to join us");
	 printf("\n Hope! you have enjoyed it");
	 exit(0);
}
//atm
void atm()
{
      while(1)
      {
	cleardevice();
	setbkcolor(BLUE);
	gotoxy(10,10);
	printf("\nATM");
	printf("\n1.Read information of user");
	printf("\n2.Print information of user");
	printf("\n3.Search information");
	printf("\n4.Update information");
	printf("\n5.Delete information");
	printf("\n6.Deposit amount");
	printf("\n7.Withdraw amount");
	printf("\n8.Delete all data");
	printf("\n9.Goto Homepage");
	printf("\n Enter your choice:-  ");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:
			read_user();
			getch();
			break;
		case 2:
			print_user();
			getch();
			break;
		case 3:
			search_user();
			getch();
			break;
		case 4:
			update_user();
			getch();
			break;
		case 5:
			del_user();
			getch();
			break;
		case 6:
			deposit_amount();
			getch();
			break;
		case 7:
			withdraw_amount();
			getch();
			break;
		case 8:
			del_all_atm();
			getch();
			break;
		case 9:
			menu();
		}

     }
}

//atm-sub-definitions
void read_user()
{
	FILE *fp;
	fp=fopen("Bank1.txt","ab");
	if(fp==NULL)
	{
		printf("\n can't open file");
		exit(1);
	}
	clrscr();
	printf("\n Enter Acc No:-  ");
	flushall();
	scanf("%d",&A.ano);
	printf("\n Enter name:-  ");
	flushall();
	gets(A.name);
	printf("\n Enter balance:-  ");
	flushall();
	scanf("%f",&A.bal);
	printf("\n ");
	fwrite(&A,sizeof(A),1,fp); /* 1 is written for infinite loop*/
	printf("\n Data has been added successfully");
	fclose(fp);
}
void print_user()
{
	FILE *fp;
	fp=fopen("Bank1.txt","rb");
	if(fp==NULL)
	{
		printf("\ncan't open file");
		exit(1);
	}
	clrscr();
	printf("\n All users data are mentioned below");
	while(fread(&A,sizeof(A),1,fp)==1)   /*sizeof(A)=16*/
	{
		printf("\n Acc no=%d",A.ano);
		printf("\n Name=%s",A.name);
		printf("\n Balance=%f",A.bal);
		printf("\n");
	}
	printf("\n press any key to continue");
	fclose(fp);
}
void search_user()
{
	int acc_no;
	FILE *fp;
	flag=0;
	clrscr();
	fp=fopen("Bank1.txt","rb");
	if(fp==NULL)
	{
		printf("\ncan't open file");
		exit(1);
	}
	printf(" Enter acc no you want to search:-  ");
	flushall();
	scanf("%d",&acc_no);
	while(fread(&A,sizeof(A),1,fp)==1)   /*sizeof(A)=16*/
	{
		if(A.ano==acc_no)
		{
		  flag=1;
		  printf("\n Acc no=%d",A.ano);
		  printf("\n Name=%s",A.name);
		  printf("\n Balance=%f",A.bal);
		}
	}
	if(flag==0)
	   printf("\n Sorry! account number not found");
	else
	   printf("\n Thank you for searching");
	fclose(fp);
}
void update_user()
{
	int acc_no;
	FILE *f1,*f2;
	flag=0;
	clrscr();
	f1=fopen("Bank1.txt","r");
	f2=fopen("temp.txt","wb");
	if(f1==NULL||f2==NULL)
	{
		printf("\ncan't open file");
		exit(1);
	}
	printf("\n Enter acc no you want to update:-  ");
	scanf("%d",&acc_no);
	while(fread(&A,sizeof(A),1,f1)==1)   /*sizeof(A)=16*/
	{
		if(A.ano!=acc_no)
		{
			fwrite(&A,sizeof(A),1,f2);
		}
		else
		{
			flag=1;
			printf("\n Enter new name:-  ");
			flushall();
			gets(A.name);
			printf("\n Enter new balance:-  ");
			flushall();
			scanf("%f",&A.bal);
			fwrite(&A,sizeof(A),1,f2);
		}
	}
	if(flag==0)
	   printf("\n Sorry! account number not found");
	else
	   printf("\n Thank you for updation");
	fcloseall();
	remove("Bank1.txt");
	rename("temp.txt","Bank1.txt");
}
void del_user()
{
	int acc_no;
	FILE *f1,*f2;
	clrscr();
	flag=0;
	f1=fopen("Bank1.txt","r");
	f2=fopen("temp.txt","wb");
	if(f1==NULL||f2==NULL)
	{
		printf("\ncan't open file");
		exit(1);
	}
	printf("\n Enter acc no you want to delete:-  ");
	scanf("%d",&acc_no);
	while(fread(&A,sizeof(A),1,f1)==1)   /*sizeof(A)=16*/
	{
		if(A.ano!=acc_no)
		{
			fwrite(&A,sizeof(A),1,f2);
		}
		else
		{
		  flag=1;
		}
	}
	fcloseall();
	if(flag==0)
	  printf("\n Sorry! account number not found");
	else
	  printf("\n Data has been deleted successfully");
	remove("Bank1.txt");
	rename("temp.txt","Bank1.txt");
}
void deposit_amount()
{
	int acc_no;
	FILE *f1,*f2;
	float amt;
	clrscr();
	flag=0;
	f1=fopen("Bank1.txt","rb");
	f2=fopen("temp.txt","wb");
	if(f1==NULL||f2==NULL)
	{
		printf("\ncan't open file");
		exit(1);
	}
	printf(" Enter your acc no:-  ");
	scanf("%d",&acc_no);
	printf("\n Enter amount you want to enter:-  ");
	scanf("%f",&amt);
	while(fread(&A,sizeof(A),1,f1)==1)   /*sizeof(A)=16*/
	{
		if(A.ano!=acc_no)
		{
			fwrite(&A,sizeof(A),1,f2);
		}
		else
		{
			flag=1;
			A.bal=A.bal+amt;
			fwrite(&A,sizeof(A),1,f2);
		}
	}
	fcloseall();
	if(flag==0)
	   printf("\n Sorry! account number not found");
	else
	   printf("\n Amount has been deposited successfully");
	remove("Bank1.txt");
	rename("temp.txt","Bank1.txt");
}
void withdraw_amount()
{
	int acc_no;
	FILE *f1,*f2;
	float amt;
	clrscr();
	flag=0;
	f1=fopen("Bank1.txt","rb");
	f2=fopen("temp.txt","wb");
	if(f1==NULL||f2==NULL)
	{
		printf("\ncan't open file");
		exit(1);
	}
	printf(" Enter your acc no:-  ");
	scanf("%d",&acc_no);
	printf("\n Enter amount you want to withdraw:-  ");
	scanf("%f",&amt);
	while(fread(&A,sizeof(A),1,f1)==1)   /*sizeof(A)=16*/
	{
		if(A.ano!=acc_no)
		{
			fwrite(&A,sizeof(A),1,f2);
		}
		else
		{

		   if(A.bal>=amt)
		   {
			flag=1;
			A.bal=A.bal-amt;
			fwrite(&A,sizeof(A),1,f2);
		   }
		   else
		   {
		      printf("\n your balance is less");
		      fwrite(&A,sizeof(A),1,f2);
		   }
		}
	}
	fcloseall();
	if(flag==0)
	   printf("\n Sorry! account number not found ");
	remove("Bank1.txt");
	rename("temp.txt","Bank1.txt");
}
void del_all_atm()
{
	remove("Bank1.txt");
	printf("\n All data has been removed successfully");
}

//library
void library()
{
      cleardevice();
      flower_circles(maxx,maxy);
      while(1)
      {
	gotoxy(10,10);
	printf("\n Welcome to library");
	printf("\n How can i help you sir");
	printf("\n 1:open admin portal");
	printf("\n 2:open student portal");
	printf("\n 3:delete all data");
	printf("\n 4:Goto Home page");
	circles_sides(maxx,maxy);
	printf("\n Enter your choice:-  ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			admin();
			break;
		case 2:
			student();
			break;
		case 3:
			delete_all();
			break;
		case 4:
			menu();
		default:
			printf("\n Wrong choice");
	}
	getch();
     }
}

//library-sub-definitions
//admin portal
void admin()
{
     while(1)
     {
	  clrscr();
	  printf("\n Welcome to admin portal");
	  printf("\n How can i help you sir");
	  printf("\n 1:New entry of book");
	  printf("\n 2:Detail of book");
	  printf("\n 3:Delete any book");
	  printf("\n 4:Add student details");
	  printf("\n 5:Search student details");
	  printf("\n 6:Update student details");
	  printf("\n 7:Delete student details");
	  printf("\n 8:Back to home page");
	  printf("\n Enter your choice   ");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case 1:
		  book_entry();
		  break;
	   case 2:
		  book_detail();
		  getch();
		  break;
	   case 3:
		  book_delete();
		  break;
	   case 4:
		  student_entry();
		  break;
	   case 5:
		  student_detail();
		  break;
	   case 6:
		  student_update();
		  break;
	   case 7:
		  student_delete();
		  break;
	   case 8:
		   library();
		   break;
	   default:
		  printf("\n Wrong choice");
	  }
	  getch();
     }
}


//student portal
void student()
{
     while(1)
     {
	  cleardevice();
	  setbkcolor(BLUE);
	  gotoxy(10,10);
	  printf("\n Welcome to student portal");
	  printf("\n How can i help you, friend");
	  printf("\n 1: Issue book");
	  printf("\n 2: Submit book");
	  printf("\n 3: Go to homepage");
	  printf("\n Enter your choice:-   ");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case 1:
		  issue_book();
		  break;
	   case 2:
		  submit_book();
		  break;
	   case 3:
		  library();
		  break;
	   default:
		  printf("\n Wrong choice");
	  }
	  getch();
     }
}

void book_entry()
{
	 FILE *fp;
	 clrscr();
	 fp=fopen("library.txt","ab");
	 if(fp==NULL)
	 {
	   printf("\n can't open file");
	   exit(1);
	 }
	 printf("Enter the stream:-  ");
	 flushall();
	 gets(bk.book_stream);
	 printf("Enter the subject:-  ");
	 flushall();
	 gets(bk.book_subject);
	 printf("Enter the book name:-  ");
	 flushall();
	 gets(bk.book_name);
	 printf("Enter the book code:-  ");
	 flushall();
	 gets(bk.book_code);
	 bk.book_issue='n';
	 printf("\n Data has been added successfully");
	 fwrite(&bk,sizeof(bk),1,fp);
	 fclose(fp);
}

void delete_all()
{
 remove("library.txt");
 remove("student.txt");
 printf("\n All data has been removed");
}

void book_detail()
{
	 char code[20];
	 FILE *fp;
	 clrscr();
	 flag=0;
	 fp=fopen("library.txt","rb");
	 if(fp==NULL)
	 {
	   printf("\n can't open file");
	   exit(1);
	 }
	 printf("\n Enter the code:-  ");
	 flushall();
	 gets(code);
	 while(fread(&bk,sizeof(bk),1,fp)==1)
	 {
		if(strcmp(bk.book_code,code)==0)
		  {
		    flag=1;
		    printf("\n Stream of book is:-%s  ",bk.book_stream);
		    printf("\n Subject of book is:-%s  ",bk.book_subject);
		    printf("\n Name of book is:-%s  ",bk.book_name);
		    break;
		  }
	 }
	 if(flag==0)
	     printf("\n  Sorry! code is not found");
	 else
	     printf("\n press any key to continue");
	 fclose(fp);
}

void book_delete()
{
	 FILE *fp,*fq;
	 char code[10];
	 clrscr();
	 flag=0;
	 fp=fopen("library.txt","rb");
	 fq=fopen("temp.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
		  printf("File can't be opened");
	 }
	 printf("Enter the book code:-  ");
	 flushall();
	 gets(code);
	 while(fread(&bk,sizeof(bk),1,fp)==1)
	 {
		   if(strcmp(bk.book_code,code)!=0)
		   {
		      fwrite(&bk,sizeof(bk),1,fq);
		   }
		   else
		   {
		     flag=1;
		   }
	 }
	 if(flag==0)
	     printf("\n  Sorry! code is not found");
	 else
	     printf("\n Book has been deleted");
	 fcloseall();
	 remove("library.txt");
	 rename("temp.txt","library.txt");
}
void student_entry()
{
	 FILE *fp;
	 fp=fopen("student.txt","ab");
	 if(fp==NULL)
	 {
	   printf("\n can't open file");
	   exit(1);
	 }
	 clrscr();
	 printf("\n Enter the name of student:-  ");
	 flushall();
	 gets(st.stud_name);
	 printf("\n Enter the registration number:-  ");
	 flushall();
	 gets(st.stud_reg_no);
	 printf("\n Enter the e-mail id:-  ");
	 flushall();
	 gets(st.stud_email);
	 printf("\n Enter the mobile number:-  ");
	 flushall();
	 gets(st.stud_mobile);
	 st.no_book=0;
	 strcpy(st.book_code,"---");
	 printf("\n Entry of student is successfull");
	 fwrite(&st,sizeof(st),1,fp);
	 fclose(fp);
}

void student_detail()
{
	 char reg_no[20];
	 FILE *fp;
	 fp=fopen("student.txt","rb");
	 if(fp==NULL)
	 {
	   printf("\n can't open file");
	   exit(1);
	 }
	 clrscr();
	 flag=0;
	 printf("\n Enter the reg no:-  ");
	 flushall();
	 gets(reg_no);
	 while(fread(&st,sizeof(st),1,fp)==1)
	 {
	     if(strcmp(st.stud_reg_no,reg_no)==0)
	       {
		 flag=1;
		 printf("\n Name of student:- %s",st.stud_name);
		 printf("\n Enter the registration number:- %s",st.stud_reg_no);
		 printf("\n Enter the e-mail id:- %s",st.stud_email);
		 printf("\n Enter the mobile number:- %s",st.stud_mobile);
		 printf("\n Number of book issued is:-  %d",st.no_book);
		 printf("\n Issued book code is ",st.book_code);
	       }
	 }
	 if(flag==0)
	     printf("\n Sorry! Reg no not found");
	 else
	     printf("\n Press any key to continue");
	 fclose(fp);
}

void student_update()
{
	 FILE *fp,*fq;
	 char code[10],reg_no[10];
	 fp=fopen("student.txt","rb");
	 fq=fopen("temp.txt","wb");
	 flag=0;
	 if((fp==NULL) || (fq==NULL))
	 {
		 printf("File can't be opened");
	 }
	 clrscr();
	 printf("\n Enter the registration number:-  ");
	 flushall();
	 scanf("%s",reg_no);
	 while(fread(&bk,sizeof(bk),1,fp)==1)
	 {
		if(strcmp(st.stud_reg_no,reg_no)!=0)
		{
		   fwrite(&st,sizeof(st),1,fq);
		}
		else
		{
		   flag=1;
		   printf("\n Enter new name of student:-  ");
		   flushall();
		   gets(st.stud_name);
		   printf("\n Enter new registration number:-  ");
		   flushall();
		   gets(st.stud_reg_no);
		   printf("\n Enter new e-mail id:-  ");
		   flushall();
		   gets(st.stud_email);
		   printf("\n Enter new mobile number:-  ");
		   flushall();
		   gets(st.stud_mobile);
		   fwrite(&st,sizeof(st),1,fq);
		}
	 }
	 if(flag==0)
	     printf("\n  Sorry! Registration number is not found");
	 else
	     printf("\n Student record has been updated");
	 fcloseall();
	 remove("student.txt");
	 rename("temp.txt","student.txt");
}
void student_delete()
{
	 FILE *fp,*fq;
	 char code[10],reg_no[10];
	 clrscr();
	 flag=0;
	 fp=fopen("student.txt","rb");
	 fq=fopen("temp.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
		 printf("File can't be opened");
	 }
	 printf("\n Enter the registration number:-  ");
	 flushall();
	 scanf("%s",reg_no);
	 while(fread(&bk,sizeof(bk),1,fp)==1)
	  {
		if(strcmp(st.stud_reg_no,reg_no)!=0)
		{
		   fwrite(&st,sizeof(st),1,fq);
		}
		else
		{
		   flag=1;
		}
	  }
	 if(flag==0)
	     printf("\n Sorry! registration no is not found");
	 else
	     printf("\n Student Record has been deleted");
	 fcloseall();
	 remove("student.txt");
	 rename("temp.txt","student.txt");
}

void issue_book()
{
	 FILE *fp,*fq;
	 int c;
	 char reg_no[20],code[20];
	 clrscr();
	 flag=0;
	 fp=fopen("student.txt","rb");
	 fq=fopen("temp1.txt","ab");
	 if((fp==NULL) || (fq==NULL))
	 {
	    printf("\n File can't be opened");
	    exit(1);
	 }
	 printf("\n Enter the Registration number of student:-  ");
	 flushall();
	 gets(reg_no);
	 while(fread(&st,sizeof(st),1,fp)==1)
	 {
	    if(strcmp(st.stud_reg_no,reg_no)==0)
	    {
	       flag=1;
	      if(st.no_book<1)
	       {
		 c=book_issue();
		 if(c==1)
		 {
		    st.no_book++;
		    printf("\n Book is issued");
		    fwrite(&st,sizeof(st),1,fq);
		    printf("a");
		 }
		 else
		 {
		    printf("\n Book is already issued");
		    fwrite(&st,sizeof(st),1,fq);
		 }
	       }
	       else
	       {
		 printf("\n Sorry! you can't issue book");
		 fwrite(&st,sizeof(st),1,fq);
	       }

	    }
	    else
	    {
	       fwrite(&st,sizeof(st),1,fq);
	    }
	 }
	if(flag==0)
	    printf("\n sorry ! No entry found");
	 fcloseall();
	 remove("student.txt");
	 rename("temp1.txt","student.txt");
}
int book_issue()
{
	 FILE *fa,*fb;
	 char code[10];
	 int issue;
	 fa=fopen("library.txt","rb");
	 fb=fopen("temp1.txt","ab");
	 if((fa==NULL) || (fb==NULL))
	  {
	     printf("\n File can't be opened");
	     exit(1);
	  }
	   printf("\n Enter the code of book:-  ");
	   flushall();
	   gets(code);
	   while(fread(&bk,sizeof(bk),1,fa)==1)
	   {
	      if(strcmp(bk.book_code,code)==0)
	      {
		 if(bk.book_issue=='y')
		 {
		   issue=0;
		 }
		 else
		 {
		   bk.book_issue='y';
		   issue= 1;
		 }
		 fwrite(&bk,sizeof(bk),1,fb);
	      }
	      else
	      {
		 fwrite(&bk,sizeof(bk),1,fb);
	      }
	   }
	fcloseall();
	remove("library.txt");
	rename("temp1.txt","library.txt");
	return(issue);
}

void submit_book()
{
	 FILE *fp,*fq,*fa,*fb;
	 char reg_no[20],code[20];
	 clrscr();
	 flag=0;
	 fa=fopen("library.txt","rb");
	 fp=fopen("student.txt","rb");
	 fq=fopen("temp1.txt","wb");
	 fb=fopen("temp2.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
	     printf("\n File can't be opened");
	     exit(1);
	 }
	 printf("\n Enter the Registration number of student:-  ");
	 flushall();
	 gets(reg_no);
	 while(fread(&st,sizeof(st),1,fp)==1)
	 {
	    if(strcmp(st.stud_reg_no,reg_no)==0)
	    {
	       if(st.no_book==1)
	       {
		  flag=1;
		  st.no_book--;
		  strcpy(st.book_code,"---");
		  fwrite(&st,sizeof(st),1,fq);
	       }
	       else
	       {
		 printf("\n This book is not issued by you");
	       }
	    }
	    else
	    {
		 fwrite(&st,sizeof(st),1,fq);
	    }
	 }
	 if(flag==0)
		printf("\n sorry ! No entry found");
	 else
	 {
		 printf("\n Enter the code of book:-  ");
		 flushall();
		 gets(code);
		 while(fread(&bk,sizeof(bk),1,fa)==1)
		 {
		    if(strcmp(bk.book_code,code)==0)
		    {
		      if(bk.book_issue=='y')
		      {
			 bk.book_issue='n';
			 fwrite(&bk,sizeof(bk),1,fb);
			 printf("\n Thank you , book is submitted");
		      }
		      else
		      {
			 printf("\n This book is not issued by library");
		      }
		    }
		    else
		    {
		      fwrite(&bk,sizeof(bk),1,fb);
		    }
		 }
	 }
	 fcloseall();
	 remove("student.txt");
	 rename("temp1.txt","student.txt");
	 remove("library.txt");
	 rename("temp2.txt","library.txt");
}

//tourism
void tourism()
{
       while(1)
       {
	 cleardevice();
	 setbkcolor(BLUE);
	 gotoxy(10,10);
	 printf("\n Welcome to tour and travels");
	 printf("\n 1:Want to add");
	 printf("\n 2:want to see");
	 printf("\n 3:Want to update");
	 printf("\n 4:Want to delete");
	 printf("\n 5:Want to delete all");
	 printf("\n 6:Goto Home page");
	 printf("\n Enter your choice:-  ");
	 scanf("%d",&choice);
	 switch(choice)
	 {
	  case 1:
		 add_tour();
		 break;
	  case 2:
		 search_tour();
		 break;
	  case 3:
		 update_tour();
		 break;
	  case 4:
		 del_tour();
		 break;
	  case 5:
		 delete_all_tour();
		 break;
	  case 6:
		 menu();
	  default:
		 printf("\n Wrong choice");
		 getch();
	 }
	 getch();
      }
}

//tourism-sub-definitions
void add_tour()
{
	 FILE *fp;
	 fp=fopen("tour.txt","ab");
	 clrscr();
	 if(fp==NULL)
	 {
	  printf("file can't be opened");
	  exit(1);
	 }
	 printf("\n Enter the city:-  ");
	 flushall();
	 scanf("%s",t.city);
	 printf("\n Enter the place:-  ");
	 flushall();
	 scanf("%s",t.place);
	 printf("\n Enter the travel agency :-  ");
	 flushall();
	 scanf("%s",t.agency);
	 fwrite(&t,sizeof(t),1,fp);
	 printf("\n Data has been added successfully");
	 fclose(fp);
}
void search_tour()
{
	 char city[10];
	 FILE *fp;
	 fp=fopen("tour.txt","rb");
	 clrscr();
	 if(fp==NULL)
	 {
	  printf("file can't be opened");
	  exit(1);
	 }
	 printf("\n Enter the city:-  ");
	 flushall();
	 scanf("%s",city);
	 while(fread(&t,sizeof(t),1,fp)==1)
	 {
	   if(strcmp(t.city,city)==0)
	   {
	      flag=1;
	      printf("\n Place=%s \n",t.place);
	      printf("\n Travel agency=%s \n",t.agency);
	   }
	 }
	 if(flag==0)
	    printf("\n No such city found");
	 printf("\n Thank you for searching");
	 fclose(fp);
}
void update_tour()
{
	 char place[10],agency[10];
	 FILE *fp,*fq;
	 clrscr();
	 fp=fopen("tour.txt","rb");
	 fq=fopen("temp.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
	  printf("file can't be opened  ");
	  exit(1);
	 }
	 printf("\n 1: Update the tourism place");
	 printf("\n 2: Update the travel agency");
	 printf("\n Enter your choice:-  ");
	 scanf("%d",&choice);
	 flag=0;
	 switch(choice)
	 {
	 case 1:
		 printf("\n Enter the place for update:-  ");
		 flushall();
		 scanf("%s",place);
		 while(fread(&t,sizeof(t),1,fp)==1)
		 {
		      if(strcmp(t.place,place)==0)
		      {
		       flag=1;
		       printf("Enter new place:-  ");
		       flushall();
		       scanf("%s",t.place);
		       fwrite(&(t),sizeof(t),1,fq);
		      }
		      else
		      {
		       flag=1;
		       fwrite(&t,sizeof(t),1,fq);
		      }
		 }
		 if(flag==0)
		    printf("\n No such place found");
		 getch();
		 break;
	 case 2:
		printf("\n Enter the agency for update  ");
		flushall();
		 scanf("%s",agency);
		 while(fread(&t,sizeof(t),1,fp)==1)
		 {
		      if(strcmp(t.agency,agency)==0)
		      {
		       flag=1;
		       printf("Enter new agency  ");
		       scanf("%s",t.agency);
		       fwrite(&(t),sizeof(t),1,fq);
		      }
		      else
		      {
		       flag=1;
		       fwrite(&t,sizeof(t),1,fq);
		      }
		 }
		 if(flag==0)
		    printf("\n No such agency found");
		 getch();
		 break;
	 default:
		 printf("\n Wrong choice");
	 }
	 if(flag==1)
	    printf("\n Updation has been done successfully");
	 fcloseall();
	 remove("tour.txt");
	 rename("temp.txt","tour.txt");
}
void del_tour()
{
	 char city[10],place[10];
	 FILE *fp,*fq;
	 flag=0;
	 clrscr();
	 fp=fopen("tour.txt","rb");
	 fq=fopen("temp.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
	  printf("file can't be opened");
	  exit(1);
	 }
	 printf("\n Enter the place to delete:-  ");
	 scanf("%s",place);
	 while(fread(&t,sizeof(t),1,fp)==1)
	 {
	   if(strcmp(t.place,place)!=0)
	   {
	      fwrite(&t,sizeof(t),1,fq);
	   }
	   else
	   {
	     flag=1;
	   }
	 }
	 if(flag==0)
		printf("\n No such place found");
	 else
	     printf("\n %s has been deleted successfully",place);
	 fcloseall();
	 remove("tour.txt");
	 rename("temp.txt","tour.txt");
}

void delete_all_tour()
{
	 clrscr();
	 remove("tour.txt");
	 printf("\n All data has been deleted");
}

//evm
void evm()
{
 while(1)
 {
 cleardevice();
 setbkcolor(8);
 gotoxy(10,10);
 printf("Welcome To EVM ");
 printf("\n 1:Want to add Candidate");
 printf("\n 2:want to search the Candidate");
 printf("\n 3:Want to update Candidate");
 printf("\n 4:Want to delete Candidate");
 printf("\n 5:Want to vote Candidate");
 printf("\n 6:Know the result");
 printf("\n 7:Want to delete all");
 printf("\n 8:Goto Home page");
 printf("\n Enter your choice:-    ");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
	 add_cand();
	 getch();
	 break;
  case 2:
	 search_cand();
	 getch();
	 break;
  case 3:
	 update_cand();
	 getch();
	 break;
  case 4:
	 del_cand();
	 getch();
	 break;
  case 5:
	 vote();
	 getch();
	 break;
  case 6:
	 result();
	 getch();
	 break;
  case 7:
	 delete_all_cand();
	 getch();
	 break;
  case 8:
	 menu();
 }
 }
}
void add_cand()
{
	FILE *fp;
	 fp=fopen("evm.txt","ab");
	 clrscr();
	 if(fp==NULL)
	 {
		  printf("file can't be opened");
		  exit(1);
	 }
	 printf("\n Enter the name of candidate:-  ");
	 flushall();
	 scanf("%s",co.cand_name);
	 printf("\n Enter the party of candidate:-  ");
	 flushall();
	 scanf("%s",co.cand_party);
	 printf("\n Enter the symbol of candidate:-  ");
	 flushall();
	 scanf("%s",co.cand_symbol);
	 printf("\n Enter the ward number of candidate:-  ");
	 flushall();
	 scanf("%s",co.cand_ward);
	 co.cand_vote=0;
	 printf("\n Data has been added successfully");
	 fwrite(&co,sizeof(co),1,fp);
	 fclose(fp);
}
void search_cand()
{
	 char name[10];
	 FILE *fp;
	 fp=fopen("evm.txt","rb");
	 clrscr();
	 flag=0;
	 if(fp==NULL)
	 {
		  printf("file can't be opened");
		  exit(1);
	 }
	 printf("\n Enter the name of candidate:-  ");
	 flushall();
	 scanf("%s",name);
	 while(fread(&co,sizeof(co),1,fp)==1)
	 {
	      if(strcmp(co.cand_name,name)==0)
		 {
		    flag=1;
		    printf("\n Party of candidate is:- %s ",co.cand_party);
		    printf("\n Symbol of candidate is:- %s ",co.cand_symbol);
		    printf("\n Ward of candidate is:- %s ",co.cand_ward);
		    printf("\n Votes for candidate is:-%d ",co.cand_vote);
		 }
	 }
	 if(flag==0)
	     printf("\n Sorry! candidate not found");
	 else
	     printf("\n Press any key to continue");
	 fclose(fp);
}
void update_cand()
{
	 char name[10],place[10];
	 FILE *fp,*fq;
	 clrscr();
	 flag=0;
	 fp=fopen("evm.txt","rb");
	 fq=fopen("temp.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
		  printf("file can't be opened  ");
		  exit(1);
	 }
	 printf("\n Enter the name for update:-  ");
	 scanf("%s",name);
	 while(fread(&co,sizeof(co),1,fp)==1)
	 {
	   if(strcmp(co.cand_name,name)==0)
	   {
	       flag=1;
	       printf("\n Enter new name:-  ");
	       scanf("%s",co.cand_name);
	       printf("\n Enter new party:-  ");
	       scanf("%s",co.cand_party);
	       printf("\n Enter new symbol:-  ");
	       scanf("%s",co.cand_symbol);
	       printf("\n Enter new ward:-  ");
	       scanf("%s",co.cand_ward);
	       printf("\n Enter new number of votes:-  ");
	       scanf("%d",co.cand_vote);
	       fwrite(&(co),sizeof(co),1,fq);
	   }
	   else
	   {
	       fwrite(&co,sizeof(co),1,fq);
	   }
	 }
	 if(flag==0)
	     printf("\n Sorry! candidate not found");
	 else
	     printf("\n Candidate has been updated successfully");
	 fcloseall();
	 remove("evm.txt");
	 rename("temp.txt","evm.txt");
}
void del_cand()
{
	 char name[10];
	 FILE *fp,*fq;
	 clrscr();
	 flag=0;
	 fp=fopen("evm.txt","rb");
	 fq=fopen("temp.txt","wb");
	 if((fp==NULL) || (fq==NULL))
	 {
		  printf("file can't be opened");
		  exit(1);
	 }
	 printf("\n Enter the name for delete:-  ");
	 scanf("%s",name);
	 while(fread(&co,sizeof(co),1,fp)==1)
	 {
		   if(strcmp(co.cand_name,name)==0)
		   {
		     flag=1;
		   }
		   else
		   {
		    fwrite(&co,sizeof(co),1,fq);
		   }
	 }
	if(flag==0)
	     printf("\n Sorry! candidate not found");
	 else
	     printf("\n candidate has been deleted ");
	 fcloseall();
	 remove("evm.txt");
	 rename("temp.txt","evm.txt");
}

void delete_all_cand()
{
	 remove("evm.txt");
	 printf("\n All data has been removed");
}
void vote()
{
	 int i=0;
	 char name[10];
	 FILE *fp;
	 clrscr();
	 flag=0;
	 fp=fopen("evm.txt","r");
	 if(fp==NULL )
	 {
	  printf("file can't be opened");
	  exit(1);
	 }
	 while(fread(&co,sizeof(co),1,fp)==1)
	 {
	   i++;
	   printf("\n Name of candidate %d is:- %s",i,co.cand_name);
	 }
	 printf("\n Enter the name of candidate:-  ");
	 flushall();
	 gets(name);
	 vote_it(name);
	 fcloseall();
}
void vote_it(char *name1)
{
	  FILE *fp,*fq;
	  flag=0;
	  fp=fopen("evm.txt","r");
	  fq=fopen("temp.txt","w");
	  if((fp==NULL) || (fq==NULL) )
	 {
		  printf("file can't be opened");
		  exit(1);
	 }
	 while(fread(&co,sizeof(co),1,fp)==1)
	 {
		   if(strcmp(co.cand_name,name1)==0)
		   {
		     flag=1;
		     co.cand_vote++;
		     fwrite(&co,sizeof(co),1,fq);
		   }
		   else
		   {
		    fwrite(&co,sizeof(co),1,fq);
		   }
	 }
	 if(flag==0)
	     printf("\n Sorry! candidate not found");
	 else
	     printf("\n Thanks you for voting");
	 fcloseall();
	 remove("evm.txt");
	 rename("temp.txt","evm.txt");
}
void result()
{
	 int max=0;
	 char name[10];
	 FILE *fp;
	 fp=fopen("evm.txt","r");
	 if(fp==NULL )
	 {
		  printf("file can't be opened");
		  exit(1);
	 }
	 while(fread(&co,sizeof(co),1,fp)==1)
	 {
		   if(co.cand_vote>max)
		   {
		     max=co.cand_vote;
		     strcpy(name,co.cand_name);
		   }
	 }
	 printf(" \n The name of winner is:- %s",name);
	 printf(" \n votes are :- %d",max);
	 fclose(fp);
}

//hotel
void hotel()
{
	while(1)
	 {
	  cleardevice();
	  setbkcolor(BLUE);
	  gotoxy(10,10);
	  printf("\n Welcome To the hotel management programme");
	  printf("\n What can i help you sir");
	  printf("\n 1: Addition of hotels");
	  printf("\n 2: Room details");
	  printf("\n 3: Room booking");
	  printf("\n 4: Room checkout");
	  printf("\n 5: Guest information");
	  printf("\n 6: Feedback");
	  printf("\n 7: Delete all data");
	  printf("\n 8: Goto Home page");
	  printf("\n Please Enter your Choice  ");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case 1://addition of hotels
		  add_hotels();
		  getch();
		  break;
	   case 2://room details
		  room_details();
		  getch();
		  break;
	   case 3://room booking
		  printf("Enter the name of hotel \t");
		  flushall();
		  gets(hotel_name);
		  room_booking(hotel_name);
		  getch();
		  break;
	   case 4://room checkout
		  room_checkout();
		  getch();
		  break;
	   case 5:
		  //guest information
		  guest_information();
		  getch();
		  break;
	   case 6://feedback
		  feedback();
		  getch();
		  break;
	   case 7:
		  delete_all_hotel();
		  getch();
		  break;
	   case 8:
		  menu();
		  break;
	   default:
		  printf("wrong choice");
		  exit(1);
		  break;
	  }
	  printf("\n Thank you sir");
	}
}

 //hotel-sub-definitions
void add_hotels()
{
	    int i,j;
	    FILE *fp;
	    fp=fopen("hotel.txt","ab");
	    if(fp==NULL)
	     {
		printf("\n can't open file");
		 exit(1);
	     }
		  clrscr();
		  printf("\n Enter the name of hotel:-  ");
		  flushall();
		  gets(ho.hotel_name);
		  printf("\n Enter the name of city:-  ");
		  flushall();
		  gets(ho.hotel_city);
		  printf("\n Enter the number of rooms:-  ");
		  flushall();
		  scanf("%d",&ho.hotel_rooms);
		  for(i=0;i<ho.hotel_rooms;i++)
		  {
		       ho.hotel_room[i]=0;
		  }
		  printf("\n Enter the amount of rooms:-  ");
		  flushall();
		  scanf("%d",&ho.amount);
		  ho.rooms_filled=0;
		  printf("\n Data has been added successfully");
		  fwrite(&ho,sizeof(ho),1,fp);  /* 1 is written for infinite loop*/
		  fclose(fp);
}
void room_details()
{
	  char city[10];
	  int i,book_it,flag=0;
	  FILE *fp;
	  clrscr();
	  flag=0;
	  fp=fopen("hotel.txt","rb");
	  if(fp==NULL)
	     {
	       printf("\n can't open file");
	       exit(1);
	     }
	  clrscr();
	  printf("\n Enter the city in which you want to search  ");
	  flushall();
	  gets(city);
	  while(fread(&ho,sizeof(ho),1,fp)==1)
	  {
		  if(strcmp(ho.hotel_city,city)==0)
		  {
		    flag=1;
		    printf("\n Name of hotel : %s", ho.hotel_name);
		    printf("\n Total number of rooms are %d",ho.hotel_rooms);
		    printf("\n Total number of booked rooms are %d",ho.rooms_filled);
		    printf("\n Total number of empty rooms are %d",ho.hotel_rooms-ho.rooms_filled);
		    printf("\n The fare of rooms are %d",ho.amount);
		    printf(" \n next match is \n");
		  }
	  }
	  if(flag==1)
	  {
		  printf("\n Want to book the room ,press \n \t 1 for yes \n \t 0 for no  ");
		  flushall();
		  scanf("%d",&book_it);
		  printf("\n %d",book_it);
		  if(book_it==1)
		     {
			printf("\n Enter the name of hotel \t");
			flushall();
			gets(hotel_name);
			room_booking(hotel_name);
		     }
	  }
	  else
	  {
		   printf(" sorry! No hotels found");
	  }
	  fclose(fp);
}
void delete_all_hotel()
{
	 remove("hotel.txt");
	 printf("All data has been removed");
}

void room_booking(char *hotel_name1)
{
	  int i,book_it;
	  FILE *fp,*fq;
	  fp=fopen("hotel.txt","rb");
	  fq=fopen("temp.txt","wb");
	  clrscr();
	  flag=0;
	  if(fp==NULL)
	    {
	      printf("can't open the file");
	      exit(1);
	    }

	  while(fread(&ho,sizeof(ho),1,fp)==1)
	   {
	      if(strcmp(ho.hotel_name,hotel_name1 )==0)
	     {
		  i=0;
		  hello:
		   if(ho.hotel_room[i]==0)
		    {
		       if(ho.rooms_filled<ho.hotel_rooms)
		       {
			 flag=1;
			 ho.go.room_no=1+i;
			 ho.hotel_room[i]=1;
			 ho.rooms_filled++;
			 printf("\n Enter your full name \t");
			 flushall();
			 gets(ho.go.guest_name);
			 printf("\n Enter your mobile number \t");
			 scanf("%d",&ho.go.guest_mob_no);
			 printf("\n Enter your address \t");
			 flushall();
			 gets(ho.go.guest_address);
			 printf("\n Enter the mode of payment \t");
			 flushall();
			 gets(ho.go.guest_mode);
			 printf("\n your room number in %s hotel is: %d",hotel_name,ho.go.room_no);
			 fwrite(&ho,sizeof(ho),1,fq);
			 break;
			}
			else
			{
			 printf("No rooms left");
			}
		    }
		    else
		    {
		       i++;
		       goto hello;
		    }
	     }
	      else
	      {
		fwrite(&ho,sizeof(ho),1,fq);
	      }
	   }

	   fcloseall();
	   remove("hotel.txt");
	   rename("temp.txt","hotel.txt");
}
void room_checkout()
{
	int room_no;
	printf("\n plz can you tell the  name of hotel \t");
	flushall();
	gets(hotel_name);
	printf("\n Plz can you tell your room number \t");
	scanf("%d",&room_no);
	room_deallocate(room_no,hotel_name);
	feedback();
}

void feedback()
{
	int rating;
	printf("\n Feedback form");
	printf("\n can you give us overall rating(out of 5)");
	scanf("%d",&rating);
	printf("\n \t THANK YOU & HAVE A SAFE JOURNEY");
}

void room_deallocate(int room_no,char * hotel_name1)
{
	    int i;
	    FILE *fp,*fq;
	    clrscr();
	    flag=0;
	    fp=fopen("hotel.txt","rb");
	    fq=fopen("temp.txt","wb");
	    if(fp==NULL || fq==NULL)
	    {
		      printf("\n can't open the file");
		      exit(1);
	    }
	    while(fread(&ho,sizeof(ho),1,fp)==1)
	    {
		 if(strcmp(ho.hotel_name,hotel_name1)!=0)
		  {
			fwrite(&ho,sizeof(ho),1,fq);
		  }
		 else
		  {
			flag=1;
			ho.hotel_room[room_no]=0;
			ho.rooms_filled--;
			fwrite(&ho,sizeof(ho),1,fq);
		  }
	    }
	   if(flag==0)
	      printf("\n Sorry! hotel not found");
	   else
	      printf("\n Thank you sir for coming in hotel");
	   fcloseall();
	   remove("hotel.txt");
	   rename("temp.txt","hotel.txt");
}

void guest_information()
{
	 int i,j;
	 char hotel_name1[15];
	 FILE *fp;
	 clrscr();
	 flag=0;
	 fp=fopen("hotel.txt","rb");
	 if(fp==NULL)
	 {
		   printf("\n can't open the file");
		   exit(1);
	 }
	 printf("Enter the name of hotel:-  ");
	 flushall();
	 gets(hotel_name1);
	 while(fread(&ho,sizeof(ho),1,fp)==1)
	 {
		   if(strcmp(ho.hotel_name,hotel_name1)==0)
		    {
			printf("\n Entry is:");
			  flag=1;
			  printf("\n Name of customer is:\t");
			  puts(ho.go.guest_name);
			  printf("Room number of customer is \t:%d",ho.go.room_no);
			  printf("\n Address of customer is:\t");
			  puts(ho.go.guest_address);
			  printf("\n");

		    }
	 }
	 if(flag==0)
	     printf("\n Sorry no entries are present");
	 else
	     printf("\n Press any key to continue");
	 fclose(fp);
}

//snake game
void snake_game()
{
   flower_circles(maxx,maxy);
   setup();
   while(!gameover)
   {
      draw();
      input();
      logic();
      sleep(1);
   }
   setcolor(7);
   printf("\n \t \t \t Gameover");
//   outtextxy(300,300,"Gameover");
   delay(2000);
   printf("\n Press any key to continue");
   getch();
   menu();
}

//snake-game sub
void setup()
{
  gameover=0;
  dir=STOP;
  x=width/2;
  y=height/2;
  fruitx= rand() % width;
  fruity= rand() % height;
  score=0;
  delay(5);

}
void draw()
{
  int i,j,k;
  clrscr();
 for(i=0; i<width; i++)
    printf("#");
  printf("\n");

  for(i=0;i<width;i++)
  {
   for( j=0;j<height;j++)
    {
     if(j==0)
       printf("#");
     else if(i==y && j==x)
       printf("0");
     else if(j==width-1)
       printf("#");
     else if(i==fruity && j==fruitx)
       printf("F");
     else
      {
	 int type=1;
	 for(k=0;k<ntail;k++)
	  {
	    if(tailx[k]==j && taily[k]==i)
	    {
	      type=0;
	      printf("o");
	    }
	  }
	 if(type==1)
	 printf(" ");
       }
    }
   printf("\n");

  }
  for( i= 0; i<width; i++)
    printf("#");
   delay(5);
 // gotoxy(20,10);
 // outtextxy(50,350,"score");
  printf("\n score=%d",score);
  setcolor(4);
  settextstyle(4,0,4);
  outtextxy(250,10,"RULES");
  setcolor(5);
  outtextxy(250,50,"a:- Move LEFT");
  outtextxy(250,90,"s:- Move DOWN");
  outtextxy(250,130,"d:- Move RIGHT");
  outtextxy(250,170,"w:- Move UP");
  setcolor(6);
  outtextxy(250,210,"F:- Means Fruit");
  outtextxy(250,250,"O:- Means Head");
  outtextxy(250,290,"10 Point for each fruit");

}
void input()
{
  if(kbhit())
  {
   switch(getch())
   {
    case 'a':
	  dir=LEFT;
	  break;
    case 'd':
	  dir=RIGHT;
	  break;
    case 'w':
	  dir=UP;
	  break;
    case 's':
	  dir=DOWN;
	  break;
    case 'x':
	  gameover=1;
	  break;
   }
 }

}
void logic()
{
   int i,j,k,prevx,prevy,prev2x,prev2y;
   prevx=tailx[0];
   prevy=taily[0];
   tailx[0]=x;
   taily[0]=y;

   for( k=1;k<ntail;k++)
   {
     prev2x=tailx[k];
     prev2y=taily[k];
     tailx[k]=prevx;
     taily[k]=prevy;
     prevx=prev2x;
     prevy=prev2y;
   }
  switch(dir)
  {
   case LEFT:
	x--;
	break;
   case RIGHT:
	x++;
	break;
   case DOWN:
	 y++;
	break;
   case UP:
	 y--;
	break;
   default:
	break;
  }
  if(x>=width || x<=0 || y>=height || y<=0)
   gameover=1;
  for(i=0;i<ntail;i++)
  {
   if(tailx[i]==x && taily[i]==y)
   {
     gameover=1;
   }
  }
  if(x==fruitx && y==fruity)
  {
     score+=10;
    fruitx= rand() % width;
    fruity= rand() % height;
    ntail++;
  }

}
//graphics-definition
 int circles_full(int maxx,int maxy)
 {
   int i,s,col;

   for(col=1;col<5;col++)
   {
     int k=0;
     setcolor(col+1);
     setlinestyle(8,0,5);
     settextstyle(6,0,6);
     outtextxy(maxx/2-200,maxy/2-8,"WELCOME TO GRAPHICS");
     setcolor(col);
     for(i=4;i<maxx/3;i+=2)
     {
       k+=2;
       circle(maxx/2,maxy/2,k);
       delay(10);
     }
     s=k;
     setcolor(col+2);
     for(i=4;i<maxx/3;i+=2)
     {
       s-=2;
       circle(maxx/2,maxy/2,s);
       delay(10);
     }
   }
   return 0;
 }

 int corners(int maxx,int maxy)
 {
   int i;
   for(i=0;i<6;i+=1)
   {
     setfillstyle(1,i+1);
     pieslice(1,maxy,(15*i),15*(i+1),100);
     setcolor(8);
     delay(200);
   }
   for(i=0;i<6;i+=1)
   {
     setfillstyle(1,i+1);
     pieslice(1,1,15*(18+i),15*(19+i),100);
     setcolor(8);
     delay(200);
   }
   for(i=0;i<6;i+=1)
   {
     setfillstyle(1,i+1);
     pieslice(maxx,1,15*(12+i),15*(13+i),100);
     setcolor(8);
     delay(200);
   }
   for(i=0;i<6;i+=1)
   {
     setfillstyle(1,i+1);
     pieslice(maxx,maxy,0+15*(6+i),15*(7+i),100);
     setcolor(8);
     delay(200);
   }
  return 0;
 }

 int text_float(int maxx,int maxy)
 {
   int i;
   for(i=0;i<maxy/4;i++)
   {
     settextstyle(3,0,3);
     setcolor(1);
     outtextxy(maxx/3+30,i-10,"Let's go to a trip");
     delay(5);
     setcolor(0);
     outtextxy(maxx/3+30,i-10,"Let's go to a trip");
   }
   setcolor(1);
   outtextxy(maxx/3+30,i-10,"Let's go to a trip");


   for(i=0;i<maxx/3-100;i++)
   {
     settextstyle(3,0,3);
     setcolor(3);
     outtextxy(i,maxx/3-70,"1: Want to see tourism places");
     outtextxy(i,maxx/3-50,"2: Want to book hotel");
     outtextxy(i,maxx/3-30,"3: Want to book transport");
     outtextxy(i,maxx/3-10,"4: Want ATM ");
     outtextxy(i,maxx/3+10,"5: Go to Home Page");
     delay(10);
     setcolor(0);

     outtextxy(i,maxx/3-70,"1: Want to see tourism places");
     outtextxy(i,maxx/3-50,"2: Want to book hotel");
     outtextxy(i,maxx/3-30,"3: Want to book transport");
     outtextxy(i,maxx/3-10,"4: Want ATM ");
     outtextxy(i,maxx/3+10,"5: Go to Home Page");

   }
   setcolor(3);

     outtextxy(i,maxx/3-70,"1: Want to see tourism places");
     outtextxy(i,maxx/3-50,"2: Want to book hotel");
     outtextxy(i,maxx/3-30,"3: Want to book transport");
     outtextxy(i,maxx/3-10,"4: Want ATM ");
     outtextxy(i,maxx/3+10,"5: Go to Home Page");


   for(i=maxx;i>maxx/3+50;i--)
   {
     settextstyle(3,0,3);
     setcolor(1);
     outtextxy(i-25,maxx/3+50,"Please Enter your choice");
     delay(5);
     setcolor(0);
     outtextxy(i-25,maxx/3+50,"Please Enter your choice");
   }
   setcolor(1);
   outtextxy(i-25,maxx/3+50,"Please Enter your choice");
   scanf("%d",&choice1);
   return (choice1);
 }


  int circles_sides(int maxx,int maxy)
 {
   setcolor(1);
   setfillstyle(SOLID_FILL,4);
   circle(maxx/2,maxy/2-200,30);
 //  floodfill(maxx/2,maxy/2-200,4);
     delay(1000);

   setcolor(2);
   setfillstyle(SOLID_FILL,5);
   circle(maxx/2,maxy/2+200,30);
//   floodfill(maxx/2,maxy/2+200,5);
     delay(1000);

   setcolor(3);
   setfillstyle(SOLID_FILL,2);
   circle(maxx/2-200,maxy/2,30);
//   floodfill(maxx/2-200,maxy/2,2);
     delay(1000);


   setcolor(4);
   setfillstyle(SOLID_FILL,6);
   circle(maxx/2+250,maxy/2,30);
//   floodfill(maxx/2+210,maxy/2+10,6);
     delay(1000);
     return 0;
 }



 int eraser(int maxx,int maxy)
 {
   int i,j;
   for(i=0;i<10;i++)
   {
     if(i%2==0)
     {
       for(j=0;j<maxx-30;j+=5)
       {
	 setfillstyle(1,5);
	 bar(j,i*50,j+40,(i*50)+60);
       // left top right bottom
	 delay(10);
	 setfillstyle(1,0);
	 bar(j,i*50,j+40,(i*50)+60);
       }
     }
     else
     {
       for(j=maxx;j>30;j-=5)
       {
	 setfillstyle(1,5);
	 bar(j,i*50,j-40,(i*50)+60);
	 delay(10);
	 setfillstyle(1,0);
	 bar(j,i*50,j-40,(i*50)+60);
       }
     }
   }
   setfillstyle(1,5);
   bar(j,i*50,j+40,(i*50)+60);
   return 0;
 }


 int rect(int maxx,int maxy)
 {
   int p,i,k,i1,j1,j=0;
   for(p=0;p<2;p++)
   {
     for(i=0;i<maxx/2;i+=2)
     {
       setcolor(p+5);
       rectangle(i,i,maxx-i,maxy-i);
       delay(10);
     }
     i1=maxx-i;
     j1=maxy-i;
     j=0;
     setcolor(p);
     for(k=i;k>2;k-=2)
     {
       j+=2;
       rectangle(k-2,k-2,i1+j,j1+j);
       delay(10);
     }

  }
  return 0;
 }


 int text_float1(int maxx,int maxy)
 {
   int i;
   for(i=0;i<maxy/3;i++)
   {
     settextstyle(3,0,3);
     setcolor(2);
     outtextxy(maxx/3,i,"Which type of transport you want");
     delay(5);
     setcolor(0);
     outtextxy(maxx/3,i,"Which type of transport you want");
   }
   setcolor(2);
   outtextxy(maxx/3,i,"Which type of transport you want");

   for(i=0;i<maxx/3-50;i++)
   {
     settextstyle(3,0,3);
     setcolor(1);
     outtextxy(i,maxy/3+30,"1:Bus");
     outtextxy(i,maxy/3+60,"2:Train");
     outtextxy(i,maxy/3+90,"3:Flight");
     outtextxy(i,maxy/3+120,"4:Go to home page");
     delay(10);
     setcolor(0);
     outtextxy(i,maxy/3+30,"1:Bus");
     outtextxy(i,maxy/3+60,"2:Train");
     outtextxy(i,maxy/3+90,"3:Flight");
     outtextxy(i,maxy/3+120,"4:Go to home page");
   }
   setcolor(1);
   outtextxy(i,maxy/3+30,"1:Bus");
   outtextxy(i,maxy/3+60,"2:Train");
   outtextxy(i,maxy/3+90,"3:Flight");
   outtextxy(i,maxy/3+120,"4:Go to home page");

   for(i=maxx;i>maxx/3;i--)
   {
     settextstyle(3,0,3);
     setcolor(2);
     outtextxy(i,maxy/3+150,"Enter your choice:-  ");
     delay(10);
     setcolor(0);
     outtextxy(i,maxy/3+150,"Enter your choice:-  ");
   }
   setcolor(2);
   outtextxy(i,maxy/3+150,"Enter your choice:-  ");
   scanf("%d",&choice2);
   return(choice2);
 }

  int flower_circles(int maxx,int maxy)
 {
   int i;
   for(i=0;i<35;i++)
   {
     setcolor(4);
     circle(maxx/2,i*3,5);
     circle(maxx/2+(i*2),i*3,8);
     circle(maxx/2-(i*2),i*3,8);
     circle(maxx/2+(i*5),i*3,8);
     circle(maxx/2-(i*5),i*3,8);
     delay(100);

     setcolor(0);
     circle(maxx/2,i*3,5);
     circle(maxx/2+(i*2),i*3,8);
     circle(maxx/2-(i*2),i*3,8);
     circle(maxx/2+(i*5),i*3,8);
     circle(maxx/2-(i*5),i*3,8);
   }
   setcolor(4);
   circle(maxx/2,i*3,5);
   circle(maxx/2+(i*2),i*3,8);
   circle(maxx/2-(i*2),i*3,8);
   circle(maxx/2+(i*5),i*3,8);
   circle(maxx/2-(i*5),i*3,8);

   return 0;
 }


 int circles_half(int maxx,int maxy)
 {
   int k=0,col,s,i;
   for(col=1;col<8;col++)
   {
     setcolor(col);
     for(i=4;i<maxx/2-250;i+=2)
     {
       k+=2;
       circle(maxx/2,maxy/2,k);
       delay(10);
     }
     s=k;
     setcolor(col+2);
     for(i=4;i<maxx/2-250;i+=2)
     {
       s-=2;
       circle(maxx/2,maxy/2,s);
       delay(10);
     }
   }
   return 0;
 }

 int text_float2(int maxx,int maxy)
 {
   int i;
   for(i=0;i<maxx/2;i++)
   {
     settextstyle(7,0,7);
     setcolor(1);
     outtextxy(i-180,i,"CHAYAN JAIN");
     delay(10);
     setcolor(0);
     outtextxy(i-180,i,"CHAYAN JAIN");
   }
   setcolor(1);
   outtextxy(i-180,i,"CHAYAN JAIN");

   for(i=0;i<maxx/3;i++)
   {
     settextstyle(7,0,7);
     setcolor(1);
     outtextxy(maxx/2-80,i-60,"MADE");
     delay(10);
     setcolor(0);
     outtextxy(maxx/2-80,i-60,"MADE");
   }
   setcolor(1);
   outtextxy(maxx/2-80,i-60,"MADE");


    for(i=maxx;i>maxx/2;i--)
    {
      settextstyle(7,0,7);
      setcolor(1);
      outtextxy(i-20,maxx/2-70,"BY:-");
      delay(10);
      setcolor(0);
      outtextxy(i-20,maxx/2-70,"BY:-");
    }
    setcolor(1);
    outtextxy(i-20,maxx/2-70,"BY:-");


   return 0;
 }

 int circ(int maxx,int maxy)
 {
   int i;
   for(i=0;i<5;i++)
   {
     setcolor(0);
     circle(100,maxy/2,30);
     setfillstyle(SOLID_FILL,1);
    // floodfill(100,maxy/2,3);
     setcolor(0);
     circle(maxx-100,maxy/2,30);
     setfillstyle(SOLID_FILL,0);
    // floodfill(maxx-100,maxy/2,4);
     delay(200);
     setcolor(3);
     circle(100,maxy/2,30);
     setfillstyle(SOLID_FILL,1);
   //  floodfill(100,maxy/2,3);
     setcolor(4);
     circle(maxx-100,maxy/2,30);
     setfillstyle(SOLID_FILL,0);
   //  floodfill(maxx-100,maxy/2,4);
   }
  return 0;
 }
int front_page()
{
  int i;
  char login[10],password[10];
  maxx=getmaxx();
  maxy=getmaxy();
  cleardevice();
  setbkcolor(1);
  corners(maxx,maxy);
  setcolor(4);
  settextstyle(7,0,5);
  outtextxy(100,40,"Welcome To C project");
  setcolor(5);
  settextstyle(7,0,4);
  outtextxy(150,100,"\"Wonder of selection\"");
  setcolor(6);
  settextstyle(3,0,3);
  outtextxy(maxx/2-200,maxy-100,"Submitted to:-");
  setcolor(6);
  settextstyle(3,0,2);
  outtextxy(maxx/2-200,maxy-70,"CS Department");
  setcolor(6);
  settextstyle(3,0,3);
  outtextxy(maxx/2,maxy-100,"Submitted By:-");
  setcolor(6);
  settextstyle(3,0,2);
  outtextxy(maxx/2,maxy-70,"1: Chayan shri shrimal");
  setcolor(6);
  settextstyle(3,0,2);
  outtextxy(maxx/2,maxy-40,"2: Arpit Mehta");

  setcolor(2);
  settextstyle(3,0,3);
  outtextxy(maxx/2-50,maxy/2-40,"Login id");
  printf("\n \n \n \n \n \n  \n \n \n \n \n \n\n\n\n  \t \t \t \t \t");
  rectangle(maxx/2-70,maxy/2-10,maxx/2+70,maxy/2+20);
  scanf("%s",login);
  rectangle(maxx/2-70,maxy/2-10,maxx/2+70,maxy/2+20);
  outtextxy(maxx/2-50,maxy/2+50,"password");
  printf("\n\n\n\n \t \t \t\t \t ");
  rectangle(maxx/2-70,maxy/2+80,maxx/2+70,maxy/2+110);
  for(i=getch();i!='\t';i=getch())
  {
    password[10]=i;
    printf("*");
  }
  i=(strcmp(password,"12345"));
  getch();
  return(i);
  getch();
}
void scientific_calculator()
{
   getch();
   cleardevice();
   gotoxy(10,6);
   setcolor(4);
   settextstyle(5,0,4);
   outtextxy(80,5,"Scientific calculator in different format");
   printf("\n 1: List");
   printf("\n 2: Box");
   printf("\n 3: Goto Homepage");
   printf("\n Enter the mode:- ");
   flushall();
   scanf("%d",&mode);
   switch(mode)
   {
     case 1:
	     list();
	     break;
     case 2:
	     box();
	     break;
     case 3:
	     menu();
     default:
	     printf("\n Wrong choice");
   }
   getch();

}
void box()
{
  while(1)
  {
   cleardevice();
   setcolor(4);
   settextstyle(5,0,4);
   outtextxy(80,1,"Scientific calculator in box format");
   setcolor(RED);
   settextstyle(3,0,1);
   outtextxy(32,80,"1: Add");
   outtextxy(152,80,"2: Subtract");
   outtextxy(272,80,"3: Multiply");
   outtextxy(392,80,"4: Divide");
   outtextxy(512,80,"5: Modulous");

   outtextxy(32,130,"6: Absolute");
   outtextxy(152,130,"7: Floor");
   outtextxy(272,130,"8: Squ.root");
   outtextxy(392,130,"9: Ceil");
   outtextxy(512,130,"10: Exp");

   outtextxy(32,180,"11: Power");
   outtextxy(152,180,"12: Sin()");
   outtextxy(272,180,"13: Cos()");
   outtextxy(392,180,"14: tan()");
   outtextxy(512,180,"15: log()");

   outtextxy(32,230,"Dec->bin");
   outtextxy(152,230,"Dec->oct");
   outtextxy(272,230,"Dec->hexa");
   outtextxy(392,230,"Pallindrome");
   outtextxy(512,230,"Armstrong");

   outtextxy(32,280,"Factorial");
   outtextxy(152,280,"Sum of no.");
   outtextxy(272,280,"23: nPr");
   outtextxy(392,280,"24: nCr");
   outtextxy(512,280,"25: Sum");

   outtextxy(300,330,"26: Homepage");

   setcolor(GREEN);
   //1st row
   rectangle(30,80,130,110);
   rectangle(150,80,250,110);
   rectangle(270,80,370,110);
   rectangle(390,80,490,110);
   rectangle(510,80,610,110);

   //2nd row
   rectangle(30,130,130,160);
   rectangle(150,130,250,160);
   rectangle(270,130,370,160);
   rectangle(390,130,490,160);
   rectangle(510,130,610,160);

   //3rd row
   rectangle(30,180,130,210);
   rectangle(150,180,250,210);
   rectangle(270,180,370,210);
   rectangle(390,180,490,210);
   rectangle(510,180,610,210);

   //4th row
   rectangle(30,230,130,260);
   rectangle(150,230,250,260);
   rectangle(270,230,370,260);
   rectangle(390,230,490,260);
   rectangle(510,230,610,260);


   //5th row
   rectangle(30,280,130,310);
   rectangle(150,280,250,310);
   rectangle(270,280,370,310);
   rectangle(390,280,490,310);
   rectangle(510,280,610,310);

   //exit
   rectangle(250,330,420,360);

   setcolor(GREEN);
   settextstyle(6,0,2);
   outtextxy(10,370,"\n Please Enter your choice");
   gotoxy(30,25);
   scanf("%d",&choice);
   calculator(choice);
  }
}
void list()
{
	while(1)
	{
	  cleardevice();
	  setcolor(4);
	  settextstyle(5,0,4);
	  outtextxy(80,5,"Scientific calculator in list format");
	  gotoxy(10,3);
	  printf("\n 1. Addition");
	  printf("\n 2. Subtraction");
	  printf("\n 3. Multiplication");
	  printf("\n 4. Division");
	  printf("\n 5. Modulous");
	  printf("\n 6. Absolute");
	  printf("\n 7. Floor value");
	  printf("\n 8. Square root");
	  printf("\n 9. Ceil value");
	  printf("\n 10. Exponential");
	  printf("\n 11. Power");
	  printf("\n 12. sin(angle)");
	  printf("\n 13. cos(angle)");
	  printf("\n 14. tan(angle)");
	  printf("\n 15. logarithm of a number");
	  printf("\n 16. decimal to binary");
	  printf("\n 17. decimal to octal");
	  printf("\n 18. decimal to hexa");
	  printf("\n 19. number is pallindrome or not");
	  printf("\n 20. number is armstrong or not");
	  printf("\n 21. Factorial of a number");
	  printf("\n 22. sum of the digits of a number");
	  printf("\n 23. permutation( nPr)");
	  printf("\n 24. combination( nCr)");
	  printf("\n 25. sum of first n digits");
	  printf("\n 26. Home page");
	  printf("\n Enter your choice:-   ");
	  scanf("%d",&choice);
	  calculator(choice);
      }
}
int nPr,nCr;
factp(int x)
		   {
		     if(x<=1)
		       return 1;
		      return x*factp(x-1);
		   }
int factc(x)
		   {
		     int f=1;
		     if(x==0) return(x);
		     else
		     {
			for(i=1;i<=x;i++)
			   f=f*i;
			return(f);
		     }
		   }
void calculator(int choice)
{
     cleardevice();
     gotoxy(10,10);
	  switch(choice)
	  {

	    case 1:
		   printf("\n Enter two numbers:-  ");
		   scanf("%d%d",&a,&b);
		   c=a+b;
		   printf("\n add=%d",c);
		   break;
	    case 2:
		   printf("\n Enter two numbers:-     ");
		   scanf("%d%d",&a,&b);
		   c=a-b;
		   printf("\n sub=%d",c);
		   break;
	    case 3:
		   printf("\n Enter two numbers:-       ");
		   scanf("%d%d",&a,&b);
		   c=a*b;
		   printf("\n mul=%d",c);
		   break;
	    case 4:
		   printf("\n Enter two numbers:-       ");
		   scanf("%d%d",&a,&b);
		   c=a/b;
		   printf("\n div=%d",c);
		   break;
	    case 5:
		   printf("\n Enter two numbers:-       ");
		   scanf("%d%d",&a,&b);
		   c=a%b;
		   printf("\n mod=%d",c);
		   break;
	    case 6:
		   printf("\n Enter a numbers:-       ");
		   scanf("%d",&a);
		   c=abs(a);
		   printf("\n absolute value=%d",c);
		   break;
	    case 7:
		   printf("\n Enter a numbers:-       ");
		   scanf("%f",d);
		   c=floor(d);
		   printf("\n floor value=%d",c);
		   break;
	    case 8:
		   printf("\n Enter a numbers:-       ");
		   scanf("%d",&a);
		   d=sqrt(a);
		   printf("\n square root=%f",d);
		   break;
	    case 9:
		   printf("\n Enter a numbers:-       ");
		   scanf("%f",&d);
		   c=ceil(d);
		   printf("\n ceil value=%d",c);
		   break;
	    case 10:
		   printf("\n Enter a number to be raised to e");
		   scanf("%f",&d);
		   e=exp(d);
		   printf("\n exponential=%f",e);
		   break;
	    case 11:
		   printf("\n Enter two numbers first base then power:-   ");
		   scanf("%d%d",&a,&b);
		   c=pow(a,b);
		   printf("\n c=%d",c);
		   break;
	    case 12:
		   printf("\n Enter a angle for sin(Angle):-  ");
		   scanf("%f",&d);
		   d=(d*3.14)/180;
		   e=sin(d);
		   printf("\n sin(%f)=%f",d,e);
		   break;
	    case 13:
		   printf("\n Enter a angle for cos(Angle):-  ");
		   scanf("%f",&d);
		   d=(d*3.14)/180;
		   e=cos(d);
		   printf("\n cos(%f)=%f",d,e);
		   break;
	    case 14:
		   printf("\n Enter a angle for tan(angle)\n \"Angle !=PI/2\" :-  ");
		   scanf("%f",&d);
		   d=(d*3.14)/180;
		   e=tan(d);
		   printf("\n tan(%f)=%f",d,e);
		   break;
	    case 15:
		   printf("\n Enter a positive number to calculate log(number):-  ");
		   scanf("%f",&d);
		   e=log(d);
		   printf("\n logarithm of number %f is %f",d,e);
		   break;
	    case 16:
		   printf("\n Enter a number in decimal to covert in binary:-  ");
		   scanf("%d",&a);
		   printf("\n %d in binary number system(32 bit) is",a);
		   for(i=31;i>=0;i--)
		   {
		    k=a>>i;
		    if(k & 1)
		      printf("1");
		    else
		      printf("0");
		   }
		   printf("\n");
		   break;
	    case 17:
		    printf("Enter the decimal number:-  ");
		    scanf("%ld",&decimalnum);

		    quotient=decimalnum;
		    while(quotient!=0)
		    {
		       octalnumber[i++]=quotient%8;
		       quotient=quotient/8;
		    }

		    printf("Equivalent octal value of decimal no %d:",decimalnum);
		    for(j=i-1;j>=0;j--)
			printf("%d",octalnumber[j]);
		    break;
	    case 18:
		    printf("enter decimal number:-  ");
		    scanf("%ld",&decimalnum);

		    quotient=decimalnum;

		    while(quotient!=0)
		    {
			remainder=quotient%16;
			if(remainder<10)
			   hexadecimal[j++]=48;
			else
			   hexadecimal[j++]=55;
			quotient/=16;
		     }
		      //display integer into character
			for(i=j;i>=0;i--)
			    printf("%c",hexadecimal[i]);
		    break;
	    case 19:
		   printf("\n Enter a number for checking of pallindrome:-  ");
		   scanf("%d",&n);
		   p=n;
		   while(n)
		   {
		     r=n%10;
		     s=s*10+r;
		     n=n/10;
		   }
		   if(p==s)
		     printf("\n Number is pallindrome");
		   else
		     printf("\n Number is not a pallindrome");
		   break;
	    case 20:
		   for(n=10;n<10000;n++)
		   {
		      int sum=0;
		      int number=n;
		      int original=number;
		      while(number>0)
		      {
			    int t=number%10;
			    sum+=t*t*t;
			    number/=10;
		      }
		      if(sum==original)
			 printf("%d",original);
		   }
		   break;
	    case 21:
		   printf("\n Enter a number for factorial:-  ");
		   scanf("%d",&a);
		   while(a>1)
		   {
		     m=m*a;
		     if(a==1)
		       break;
		     a--;
		   }
		   printf("\n Factorial of a number is:-%d  ",m);
		   break;
	    case 22:
		   printf("\n Enter a number for sum of each digit:-  ");
		   flushall();
		   scanf("%d",&a);
		   while(a>0)
		   {
		     r=a%10;
		     s=s+r;
		     a=a/10;
		   }
		   printf("\n sum of digits of a number is:-%d  ",s);
		   break;
	    case 23:
		   printf("Enter value for n and r:-  ");
		   scanf("%d%d",&n,&r);
		   nPr=factp(n)/factp(n-r);
		   printf("\n Permutation values is:= %d",nPr);
		   break;
	    case 24:
		   printf("Enter value for n and r:-  ");
		   scanf("%d%d",&n,&r);
		   nCr=factc(n)/(factc(r)*factc(n-r));
		   printf("\n Permutation values is:= %d",nCr);

		   break;
	    case 25:
		   printf("\n Enter an integer upto which sum is to be calculated:-  ");
		   scanf("%d",&a);
		   while(a>0)
		   {
		    s=s+a;
		    a--;
		    printf("%d",s);
		   }
		   printf("\n Sum is:- %d",s);
		   break;
	    case 26:
		   menu();
	    default:
		   printf("\n wrong choice");
	 }
     getch();
}