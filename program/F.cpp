#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<iostream.h>
using namespace std;
class ava
{
public:
char abg[4];
int qty;
ava()
{
strcpy(abg,"b+");
qty=34;
}
void getdata();
void showdata();
void upunit(int r)
{
qty+=r;
}
void dnunit(int y)
{
qty-=y;
}
};
void ava :: getdata()
{
int i;
cout<<"\nenter the blood grp\n";
cin>>abg;
cout<<"\nenter qty available\n";
cin>>qty;
}
void ava :: showdata()
{
cout<<"\nblood grp\n"<<abg;
cout<<"\nqty\n"<<qty<<endl;
}
void write1()
{
ofstream f("admin.txt",ios::app);
ava a;
char ch;
a.getdata();
f.write((char*)&a,sizeof(a));
f.close();
}
void show()
{
ifstream f("admin.txt");
ava a;
while(f.read((char*)&a,sizeof(a)))
a.showdata();
f.close();
}
class buyer:public ava
{
char b_name[20];
char b_bg[2];
long b_phno;
public:
buyer()
{
strcpy(b_name,"null");
strcpy(b_bg,"null");
b_phno=1234567890;
}
char * rb_name()
{
return b_name;
}
char * rb_bg()
{
return b_bg;
}
long rb_phno()
{
return b_phno;
}
void buyer_data()
{
cout<<"\nenter the name\n"<<endl;
cin>>b_name;
cout<<"\nenter blood group\n"<<endl;
cin>>b_bg;
cout<<"\nenter phone no\n"<<endl;
cin>>b_phno;
}
void show_data()
{
cout<<"\nname\n"<<b_name<<"\nbloodgroup\n"<<b_bg<<"\nphoneno\n"<<b_phno;
}
};
void donate()
{
int t;
ava a;
ofstream w("buyer.txt");
buyer b;
b.buyer_data();
w.write((char*)&b,sizeof(b));
cout<<"\nenter no of units to be donated=\n";
cin>>t;
a.upunit(t);
w.close();
}
void donate1()
{
ifstream a("buyer.txt");
buyer b;
while(a.read((char*)&a,sizeof(a)))
b.show_data();
}
void recieve()
{
ifstream s("admin.txt");
ava a;
char bgr[4];
int j;
char name[20];
char h_name[30];
long p_no;
cout<<"\nenter the required blood group\n";
cin>>bgr;
if(strcmpi(bgr,a.abg)==0);
{
cout<<"\n******blood group available*******\n";
cout<<"\nno of units required\n";
cin>>j;
if(j<=a.qty)
{
cout<<"\n*********stock available**********\n";
cout<<"\nenter your name\n";
cin>>name;
cout<<"\nenter hospital which reccomended\n"<<endl;
cin>>h_name;
cout<<"\nenter phone no\n"<<endl;
cin>>p_no;
a.dnunit(j);
}
else
cout<<"\n***********SORRY!stock not available************\n";
}
}
void main_menu()
{
int e;
do
{
cout<<"\n******MENU******\n";
cout<<"\n1.want to donate\n"<<"\n2.want to recieve\n";
cout<<"\nenter your choice\n";
cin>>e;
switch(e)
{
case 1:
clrscr();
donate();
getch();
break;
case 2:
clrscr();
recieve();
break;
case 3:
exit(0);
default:
cout<<"\nwrong input\n";
}
}
while(e=='y'||e=='Y');
}
void menu_2()
{
int m;
do
{
cout<<"\n1.enter more information\n"<<"\n2.view all information\n";
cout<<"\nenter your choice\n";
cin>>m;
switch(m)
{
case 1:
clrscr();
write1();
break;
case 2:
clrscr();
show();
break;
default:
cout<<"\nwrong input\n";
}
}
while(m=='y'||m=='Y');
}
void main()
{
int v;
clrscr();
ava a;
do
{
cout<<"\n******************************************************************\n";
cout<<"\n\t\tBLOOD BANK MANAGEMENT\t\t\n";
cout<<"\n*******************************************************************\n";
cout<<"\n1.Admin"<<"\n2.buyer"<<"\n3.exit\n";
cout<<"\nenter choice\n";
cin>>v;
switch(v)
{
case 1:
clrscr();
menu_2();
break;
case 2:
clrscr();
main_menu();
break;
case3:
exit(0);
default:
cout<<"\nWRONG INPUT\n";
}
}
while(v=='y'||v=='Y');
getch();
}
