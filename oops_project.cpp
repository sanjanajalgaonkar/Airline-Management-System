#include<process.h>
#include<windows.h>
#include<iostream>
#include<conio.h>
#include<string>
#include<time.h>
#include<fstream>
using namespace std;
char fname[60];
char l_destination[5][20]={"Jodhpur","Banglore","Mumbai","Delhi","Chennai"};
char i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","Nigeria" };
class payment
{
    int ch,num;
public:
    void conc()
    {
	system("cls");
        cout<<"****EXPSAR LLC BANKING MODULE***********";
        cout<<"\n1.Online Payment\n2.Generate challan\n3.Ex-Wallet";
        cin>>ch;
        if(ch==1)
        {system("cls");
            cout<<"\n\n\t\t\tREDIRECTING YOU TO BILLDESK ";
            Sleep(500);
            system("cls");
            cout<<"\n\nTICKET IS:";
ifstream fin;
fin.open(fname);
string ch;
string put;
while(getline(fin,ch))
{
cout<<ch<<"\n";
}
system("pause");
        }
       else if(ch==2)
        {
            ifstream fin;
fin.open(fname);
string ch;
string put;
while(getline(fin,ch))
{cout<<ch<<"\n";

    //cout<<ch<<"\n";
}
        }
       else if(ch==3)
       {
           cout<<"\nWE AFRE UNDER DEVLEPMENT";
       }
    }
};
class mytime
{
protected:
 int choose;
public:
 void getdata()
 {
  cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
  cout<<"PRESS 1 FOR 11 AM"<<endl;
  cout<<"PRESS 2 FOR 10 AM"<<endl;
  cout<<"PRESS 3 FOR 9 AM"<<endl;
  cin>>choose;
 }
 void show()
 {
  if(choose==1)
  {
    cout<<"\n|                                                                         "<<endl;
    cout<<"|flight mytime 11 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY FROM TEAM EXPSAR                        "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight mytime 11 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY FROM TEAM EXPSAR                        "<<endl;
 }
  if(choose==2)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 10 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY FROM TEAM EXPSAR                         "<<endl;
    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight mytime 10 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==3)
  {ofstream outfile;
    cout<<"|                                                                         "<<endl;
    cout<<"|flight mytime 9 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
 outfile.open("E:\\E_ticket.txt",ios::app);

    outfile<<"|                                                                         "<<endl<<
             "|flight mytime 9 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  int b;
  cout<<"\nPROCEESS IN PAYMENT";
  cin>>b;
  payment p;
  p.conc();
 }

};
class passenger
{
public:
    virtual void getdata()
 {
 }
virtual void show()
 {
 }
};
class booking:public passenger
{
protected:
 int num;
 char ch;
 char firstname[60];
 char lastname[60];
 char address[60];
char passport_no[60];
 char dest[30];

 char checkin[60];
 int option;
public:

 void getdata()
 {
  cout<<"\nPlease Share some information with Expsar sevices to process further"<<endl;
  cout<<"\n\n\nEnter your firstname  passenger: ";
   cin.getline(firstname,60);

   strcpy(fname,firstname);
   cout<<endl;
   cout<<"Enter your lastname : ";
   cin.getline(lastname,60);
   cout<<endl<<endl;
   cout<<"Enter your address:  ";
   cin.getline(address,60);
   cout<<endl<<endl;
   cout<<"Enter the Passport Number"<<endl;
   cin.getline(passport_no,60);
   cout<<endl;
   cout<<"Enter check in Location(PLEASE USE CAPITAL LETTERS ONLY)";
   cin.getline(checkin,60);
   cout<<"Enter the your destination (PLEASE USE CAPITAL LETTERS ONLY) ";
   cin.getline(dest,60);
   cout<<endl;
   system("cls");
 }
 void show()
 {
   cout<<"Your Ex-Ticket is :"<<endl;
   int t=1;
   int r=12345;
  cout<<"                         \3 EXPSAR FLIGHT TICKET \3                             "<<endl;
  cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Passport No. :"<<passport_no<<"                                     "<<endl;
  cout<<"|========================================================================="<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl;
  cout<<"|                                                                         "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
     cout<<"|flight Information :                                                  "<<endl;
  cout<<"|12 SEPTEMBER 2019                                                        "<<endl;
  cout<<"|BOING 747                     SPECIAL STATUS: NO                         "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<checkin<<"                                                    "<<endl;
  cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact "<<checkin<<" Airline to Confirm baggage allowance               "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
//show();
ofstream fout;
fout.open(firstname);

fout<<"\nName:"<<firstname<<" "<<lastname;
fout<<"\nPassport No. "<<":"<<passport_no;
fout<<"\nTax : Rs 320/-";
fout<<"\n Ticket Rate: 34000/- INR";
fout<<"\n Amount to be paid: 34320/- INR";
fout<<"\n---------------------------";



 }
friend void tran(booking x);
// friend void ebank(booking obj);
};
/*void ebank(booking obj)
{system("cls");
int bankno,pin;
    cout<<"\n********PAYMENT UNDER PROCESS***************";
cout<<"\nEnter YOUR BANK NUMBER";
cin>>bankno;
cout<<"\nEnter your BANK PIN";
cin>>pin;
cout<<"\nFor PassPORT NUMBER: ";
Sleep(500);
cout<<obj.passport_no;

}*/
 void tran(booking x)
    {system("cls");
int bankno,pin;
    cout<<"\n********PAYMENT UNDER PROCESS***************";
cout<<"\nEnter YOUR BANK NUMBER";
cin>>bankno;
cout<<"\nEnter your BANK PIN";
cin>>pin;
cout<<"\nFor PassPORT NUMBER: ";
Sleep(500);
cout<<x.passport_no;
   cout<<"\n\n\n\n\t\t\t\t\t\tPayment Completed ";
    }
/*class ebank
{public:

};*/
int che;
class local: public booking
{
protected:
    int biseat;
 int ecoseat,ch,k,p;
 mytime t1;
public:
 void getdata()
 {
  k=0;
  p=0;
  cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2) AIR INDIA"<<endl;
  cout<<"3) FLY EMIRATES "<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>ch;
  system ("cls");
  switch(che)
  {
  case 1:
   if (ch==1)
    cout<<"\n\n\t                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(ch==2)
    cout<<"\n\n\t                                WELCOME TO AIR INDIA"<<endl;
   break;
  case 3:
   if(ch==3)
    cout<<"\n\n\t                                WELCOME TO FLY EMIRATES"<<endl;
   break;
  case 4:
   if(ch==4)
    cout<<"\n\n\t                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
  cout<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  //cin.ignore();
  for(int i=0;i<5;i++)
  {
   cout<<l_destination[i]<<endl;
  }
  booking::getdata();

Sleep(500);
   cout<<"YES!! FLIGHT IS Available at this Rout ..... please complete further procedure "<<endl;
   biseat=30;
   ecoseat=40;
cout<<"PLease select In which class you want to travel?"<<endl;
   cout<<"\t1 for buisness class    *"<<endl;
  cout<<"\t2 for economy class     *"<<endl;
cout<<"Enter your choice"<<endl;
   cin>>ch;

   cout<<endl;
   switch(ch)

   {
   case 1:
biseat--;
    if(biseat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;
    break;
   case 2:

    ecoseat--;

    if(ecoseat<=0)
     cout<<"SORRY NO SEAT AVAILABLE"<<endl;
    else
     cout<<"SEAT AVAILABLE"<<endl;
    break;
   }
   t1.getdata();
 system("CLS");
   booking::show();
  }};


class search
{
public:
void searching()
 {  cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE"<<endl;
  for(int i=0;i<5;i++)
{for(int j=0;j<10;j++){
   cout<<"FLIGHT FROM "<<l_destination[i]<<" TO "<<i_destination[j]<<endl;
  }}}};

class international:public booking

 {
 protected:
  int b1_seat,e1_seat,choice,c;
  char g;
mytime t1;
 public:
void getdata()
  {
cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  system ("cls");
  switch(option)
  {case 1:
   if (option==1)
    cout<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
   cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
   cin.ignore();
   for(int i=0;i<10;i++)
   {
    cout<<i_destination[i]<<endl;
   }
   booking::getdata();
    b1_seat=30;
    e1_seat=40;
  Sleep(500);
   cout<<"YES!! FLIGHT IS Available at this Rout ..... please complete further procedure "<<endl;
   cout<<"PLease select In which class you want to travel?"<<endl;
   cout<<"\t1) buisness class    *"<<endl;
  cout<<"\t2) economy class     *"<<endl;
   cout<<"Enter your choice"<<endl;
   cin>>choice;
  cout<<endl;
  switch(choice)
{
  case 1:
   b1_seat--;
   if(b1_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
    cout<<"SEAT AVAILABLE"<<endl;
   break;
  case 2:
   e1_seat--;
   if(e1_seat<=0)
    cout<<"SORRY NO SEAT AVAILABLE"<<endl;
   else
    cout<<"SEAT AVAILABLE"<<endl;
break;  }
t1.getdata();
  system("CLS");
  booking::show();
  t1.show();

   }
 };
/* class payment
{
    int ch,num;
public:
    void conc()
    {system("cls");

        cout<<"1.Online Payment\n2.Generate challan\3.Ex-Wallet";
        cin>>ch;
        if(ch==1)
        {system("cls");
            cout<<"**************************************************************************";
            cout<<"REDIRECTING YOU TO BILLDESK ";
            cout<<"TICKET IS";
ifstream fin;
fin.open(fname);
char ch[100];
while(!fin.eof())
{
    fin>>ch;
    cout<<ch;
}

        }
    }
};*/
class main1
{
 private:
  char f;
  int menu_choice;
  char a;
 public:
void getdata()
{
   cout<<"\n\n\n\n\n\n";
   cout<<"**********MAIN MENU************"<<endl;
   cout<<"1) LOCAL FLIGhT BOOKING       *"<<endl;
   cout<<"2)  INTERNATIONAL FLIGHT BOOKING *"<<endl;
   cout<<"3)  SEARCH OF FLIGHTS   "<<endl;
   cout<<"4) Complete payment Method"<<endl;
   cout<<"5)Download ticket"<<endl;
   cin>>menu_choice;
  system("cls");
  passenger* p1;
 booking b1;
international i1;
  local l1;
  if(menu_choice==1){l1.getdata();}
  if(menu_choice==2){i1.getdata();}
  if(menu_choice==3){search s1;
  s1.searching();}
  if(menu_choice==4)
    {payment p;
  p.conc();}
}};

int main()
{
cout<<"\n\n\t\t\t\t\t\tWELCOME TO EXPSAR LLC\n\n\n";
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO AIRWAYS RESERVATION SYSTEM\n\n\n";
system("pause");
 system("cls");
 main1 m1;
 m1.getdata();
 booking b;
//ebank e;
tran(b);
 return 0;
}