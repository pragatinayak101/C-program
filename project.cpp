#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
 #include<stdlib.h>
using namespace std;
 class student
{
    public:  int srn;
 char sn[30],dob[30],g[10],bg[10],fn[30],fo[30],fcn[15],eid[30],mn[30],mo[30],  mcn[15],ad[30],c[15],r[15],mt[20],sc[10];
  public:
 void add();
 void search();
  void display();
  void modify();
  void del();
   void fee();
}s;

void student::add()
{
    //clrscr();

cout<<"--------------------RECORD ENTRY SECTION------------------";
 ofstream ofs("std.txt",ios::app);
 cout<<"\n\nEnter New Student Roll No.:";
  cin>>srn;
 cout<<"\nEnter New Student Name:";  gets(sn);
 cout<<"\nEnter Student Class:";  gets(sc);
 cout<<"\nEnter Date of Birth:";  gets(dob);
 cout<<"\nEnter Gender:";
 gets(g);
 cout<<"\nEnter Blood Group:";  gets(bg);
 cout<<"\nEnter Father's Name:";
 gets(fn);
 cout<<"\nEnter Father's Occupation:";  gets(fo);
 cout<<"\nEnter Father's Contact no.:";  gets(fcn);
 cout<<"\nEnter Father's Email ID:";  gets(eid);
 cout<<"\nEnter Mother's Name:";
 gets(mn);
 cout<<"\nEnter Mother's Occupation:";  gets(mo);
 cout<<"\nEnter Mother's Contact no.:";  gets(mcn);
 cout<<"\nEnter Address:";  gets(ad);
 cout<<"\nEnter Cast:";  gets(c);
 cout<<"\nEnter Religion:";
 gets(r);
 cout<<"\nEnter Mother tongue:";  gets(mt);
 ofs.write((char*)&s,sizeof(student));
 cout<<"\n\nRecord Submitted Successfully:)!!!";
}

void student::search()
{
 int srn1,info=0;
 // clrscr();
 cout<<"-----------------SEARCH RECORD SECTION------------------";  ifstream ifs("std.txt");
 if(!ifs)  {
  cout<<"\nFile is not exist";
  getch();   exit(0);
 }
 cout<<"\n\nEnter Student Roll number to search:";  cin>>srn1;  while(ifs.read((char*)&s,sizeof(student)))
 {
  if(srn1==srn)
  {
   cout<<"\nEnter New Student Roll no.:"<<srn;    cout<<"\nEnter New Student Name:"<<sn;    cout<<"\nEnter Date of Birth:"<<dob;    cout<<"\nEnter Gender:"<<g;    cout<<"\nEnter Blood Group:"<<bg;    cout<<"\nEnter Father's Name:"<<fn;    cout<<"\nEnter Father's Occupation:"<<fo;    cout<<"\nEnter Father's Contact no.:"<<fcn;    cout<<"\nEnter Father's Email ID:"<<eid;    cout<<"\nEnter Mother's Name:"<<mn;    cout<<"\nEnter Mother's Occupation:"<<mo;    cout<<"\nEnter Mother's Contact no."<<mcn;    cout<<"\nEnter Address:"<<ad;    cout<<"\nEnter Cast:"<<c;    cout<<"\nEnter Religion:"<<r;    cout<<"\nEnter Mothertounge:"<<mt;    info=1;    break;
  }  }
 if(info==0)
 {
  cout<<"\nStudent Roll no. not found, Try Again";
 }
 ifs.close();
}

void student::display()
{
    //clrscr();
 cout<<"-----------------DISPLAY ALL RECORD SECTION------------------";  ifstream ifs("std.txt");
 if(!ifs)  {
  cout<<"\nFile is not exist";
  getch();
  exit(0);  }
 while(ifs.read((char*)&s,sizeof(student)))
 {
   cout<<"\n===============================";    cout<<"\nEnter New Student Roll no.:"<<srn;    cout<<"\nEnter New Student Name:"<<sn;    cout<<"\nEnter Date of Birth:"<<dob;    cout<<"\nEnter Gender:"<<g;    cout<<"\nEnter Blood Group:"<<bg;    cout<<"\nEnter Father's Name:"<<fn;    cout<<"\nEnter Father's Occupation:"<<fo;    cout<<"\nEnter Father's Contact no.:"<<fcn;    cout<<"\nEnter Father's Email ID:"<<eid;    cout<<"\nEnter Mother's Name:"<<mn;    cout<<"\nEnter Mother's Occupation:"<<mo;    cout<<"\nEnter Mother's Contact no.:"<<mcn;    cout<<"\nEnter Address:"<<ad;    cout<<"\nEnter Cast:"<<c;    cout<<"\nEnter Religion:"<<r;
   cout<<"\nEnter Mothertounge:"<<mt;    cout<<"\n=============================";    getch();
  }
 ifs.close();
 }

 void student::modify()
 {
  int srn2,choice1,info=0;
//  clrscr();
  cout<<"---------------MODIFY RECORD SECTION----------------";   ifstream ifs("std.txt");
  if(!ifs)   {
   cout<<"\nFile is not exist";
   getch();    exit(0);
  }
  ofstream ofs("tst.txt");
  cout<<"\nEnter Student roll number to modify:";   cin>>srn2;
  while(ifs.read((char*)&s,sizeof(student)))
  {    if(srn2==srn)
   {     info=1;
    cout<<"\n\n1-Enter New Student Roll No.:";     cout<<"\n2-Enter New Student Name:";     cout<<"\n3-Enter New Student Class:";     cout<<"\n4-Enter New Date of Birth:";     cout<<"\n5-Enter New Gender:";     cout<<"\n6-Enter New Blood Group:";     cout<<"\n7-Enter Father's Name:";     cout<<"\n8-Enter Father's Occupation:";     cout<<"\n9-Enter Father's Contact no.:";     cout<<"\n10-Enter Father's Email ID:";     cout<<"\n11-Enter Mother's Name:";     cout<<"\n12-Enter Mother's Occupation:";     cout<<"\n13-Enter Mother's Contact no.:";     cout<<"\n14-Enter Address:";     cout<<"\n15-Enter Cast:";     cout<<"\n16-Enter Religion:";     cout<<"\n17-Enter Mothertounge:";     cout<<"\n\n Enter Your Choice(1-17):";     cin>>(choice1);     switch(choice1)
    {       case 1:
      cout<<"\nEnter New Student Roll No.:";
      cin>>srn;       break;       case 2:
      cout<<"\nEnter New Student Name:";
      gets(sn);       break;       case 3:
      cout<<"\nEnter New Student Class:";       gets(sc);
      break;       case 4:
      cout<<"\nEnter New Date of Birth:";
      gets(dob);       break;       case 5:
      cout<<"\nEnter New Gender:";
      gets(g);       break;       case 6:
      cout<<"\nEnter New Blood Group:";       gets(bg);       break;       case 7:
      cout<<"\nEnter Father's Name:";       gets(fn);       break;       case 8:
      cout<<"\nEnter Father's Occupation:";       gets(fo);       break;       case 9:
      cout<<"\nEnter Father's Contact no.:";
      gets(fcn);       break;       case 10:
      cout<<"\nEnter Father's Email ID:";
      gets(eid);       break;       case 11:
      cout<<"\nEnter Mother's Name:";
      gets(mn);       break;       case 12:
      cout<<"\nEnter Mother's Occupation:";
      gets(mo);       break;       case 13:
      cout<<"\nEnter Mother's Contact no.:";       gets(mcn);
      break;       case 14:
      cout<<"\nEnter Address:";
      gets(ad);       break;       case 15:       cout<<"\nEnter Cast:";
      gets(c);       break;       case 16:
      cout<<"\nEnter Religion:";       gets(r);       break;       case 17:
      cout<<"\nEnter Mothertounge:";
      gets(mt);       break;       default:
      cout<<"\nInvalid choice.";
    }
    ofs.write((char*)&s,sizeof(student));
   }    else
   {
    ofs.write((char*)&s,sizeof(student));
   }   }    if(info==0)
   {
    cout<<"\nStudent Roll no. not found.";
   }    ofs.close();    ifs.close();    remove("std.txt");    rename("tst.txt","std.txt");
 }




 void student::del()
 {
  int srn3,info=0;
  //clrscr();
  cout<<"---------------DELETE RECORD SECTION----------------";   ifstream ifs("std.txt");
  if(!ifs)   {
   cout<<"\nFile is not exist";
   getch();    exit(0);   }
  ofstream ofs("tst.txt");
  cout<<"\nEnter Student roll number to delete:";   cin>>srn3;
  while(ifs.read((char*)&s,sizeof(student)))
  {
   if(srn3==srn)
   {     info=1;
    cout<<"\n RECORD DELETED SUCCESSFULLY";
   }    else
   {
    ofs.write((char*)&s,sizeof(student));
   }   }
   if(info==0)
   {
    cout<<"\nStudent Roll no. not found.";
   }    ofs.close();    ifs.close();    remove("std.txt");    rename("tst.txt","std.txt");
   }




void student::fee()
{
 long st,sa=20000,sb=25000,sc=30000,sd=35000,tc,lc,ac,lf,hc,sac,con,tf;
 //clrscr();
 cout<<"----------------STUDENT FEES STRUCTURE-----------------";
 cout<<"\n\nStudent basic fees by stages: ";  cout<<"\n1-Foundational stage\t= 20000 ";  cout<<"\n2-Preparatory stage\t= 25000 ";  cout<<"\n3-Middle stage\t\t= 30000 ";  cout<<"\n4-Secondary stage\t= 35000 ";  cout<<"\n\nEnter student stage:";  cin>>st;  switch(st)
 {   case 1:
  cout<<"\nBasic fee="<<sa;
  tc=sa*.02;
  cout<<"\nTransportation charges="<<tc;   ac=sa*.04;
  cout<<"\nAddional charges="<<ac;   hc=sa*.06;
  cout<<"\nHostel charges="<<hc;
  sac=sa*.07;
  cout<<"\nSchool activity fees="<<sac;   con=sa*.05;
  cout<<"\nFees concession="<<con;   tf=(sa+tc+ac+hc+sac)-con;   cout<<"\nTotal salary="<<tf;
  break;   case 2:
  cout<<"\nBasic fee="<<sb;
  tc=sb*.02;
  cout<<"\nTransportation charges="<<tc;   ac=sb*.04;
  cout<<"\nAddional charges="<<ac;
  lf=sb*.05;
  cout<<"\nLab fees="<<lf;   hc=sb*.06;
  cout<<"\nHostel charges="<<hc;   sac=sb*.07;
cout<<"\nSchool activity fees="<<sac;
   con=sa*.05;   cout<<"\nFees concession="<<con;   tf=(sa+tc+ac+hc+sac)-con;   cout<<"\nTotal salary="<<tf;
  break;   case 3:
  cout<<"\nBasic fee="<<sc;
  tc=sc*.02;
  cout<<"\nTransportation charges="<<tc;   lc=sc*.03;   cout<<"\nLibrary charges="<<lc;   ac=sc*.04;   cout<<"\nAddional charges="<<ac;
  lf=sc*.05;   cout<<"\nLab fees="<<lf;   hc=sc*.06;   cout<<"\nHostel charges="<<hc;   sac=sc*.07;
  cout<<"\nSchool activity fees="<<sac;    con=sa*.05;   cout<<"\nFees concession="<<con;   tf=(sa+tc+ac+hc+sac)-con;   cout<<"\nTotal fee="<<tf;
  break;   case 4:
  cout<<"\nBasic fee="<<sd;
  tc=sd*.02;
  cout<<"\nTransportation charges="<<tc;   lc=sd*.03;   cout<<"\nLibrary charges="<<lc;   ac=sd*.04;   cout<<"\nAddional charges="<<ac;
  lf=sd*.05;   cout<<"\nLab fees="<<lf;   hc=sd*.06;   cout<<"\nHostel charges="<<hc;   sac=sd*.07;
  cout<<"\nSchool activity fees="<<sac;    con=sa*.05;
cout<<"\nFees concession="<<con;
  tf=(sa+tc+ac+hc+sac)-con;   cout<<"\nTotal salary="<<tf;
  break;   default:
  cout<<"\nInvalid choice";
 }
}

 main()
{
    int no;
     char choice;
      do
        {
    // clrscr();
 cout<<"--------------STUDENT MANAGEMENT SYSTEM-------------";  cout<<"\n\n1-Add new student record";  cout<<"\n2-Search student record";  cout<<"\n3-Display all student record";  cout<<"\n4-Modify student record";  cout<<"\n5-Delete existing record";  cout<<"\n6-Sudent fees structure";  cout<<"\n7-Exit";
 cout<<"\n\nEnter your choice(1-7)=";  cin>>no;

 switch(no)
 {   case 1:
  s.add();   break;   case 2:
  s.search();   break;   case 3:
  s.display();   break;   case 4:
  s.modify();
break;
  case 5:
  s.del();   break;   case 6:
  s.fee();   break;   case 7:
  cout<<"\n\nThank you for using Our Project";   getch();   exit(0);
 }

 cout<<"\n\nDo You Want to Continue Again(Y/N):";
 cin>>choice;
 }
 while(choice=='Y'||choice=='y');
 getch();
}












