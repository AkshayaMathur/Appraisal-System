#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>
 float mark[4],m[5];
 char grade1,grade2,grade3,grade4,grade5;
 void heading()
 { clrscr();
  textcolor(MAGENTA);
  cprintf("\n     APPRAISAL SYSTEM \n\n ");
  textcolor(CYAN);
 }
class emp
{

 char check(int g)
 {  char grade;
 if(g<2)
 { grade='E'; }
 else if((g>2)&&(g<=4))
 { grade='D'; }
 else if((g>4)&&(g<=6))
 { grade='C';  }
 else if((g>6)&&(g<=8))
 { grade='B';  }
 else if((g>8)&&(g<=10))
 { grade='A';   }
 return grade;
 }
 public:
 char finalgrade;
 float totalmarks;
 void cal1()
 {
 heading();
 float a1,b1,c1,d1,e1,n1;
 cout<<"Enter the total no. of grades given by the Manager"<<endl;
 cin>>n1;
 cout<<"Enter the no. of grades 'A' given by Manager"<<endl;
 cin>>a1;
 cout<<"Enter the no. of grades 'B' given by Manager"<<endl;
 cin>>b1;
 cout<<"Enter the no. of grades 'C' given by Manager"<<endl;
 cin>>c1;
 cout<<"Enter the no. of grades 'D' given by Manager"<<endl;
 cin>>d1;
 cout<<"Enter the no. of grades 'E' given by Manager"<<endl;
 cin>>e1;
 m[0]=(((a1*5)+(b1*4)+(c1*3)+(d1*2)+e1)/(n1*5));
 cout<<m[0]<<endl;
 mark[0]=(m[0]*10);
 grade1=check(mark[0]);
 cout<<"aggregate grade By Manager is "<<grade1<<endl;
 getch();
}
void cal2()
{
  heading();
 float a2,b2,c2,d2,e2,n2;
 cout<<"Enter the total no. of grades given by the TL"<<endl;
 cin>>n2;
 cout<<"Enter the no. of grades 'A' given by TL"<<endl;
 cin>>a2;
 cout<<"Enter the no. of grades 'B' given by TL"<<endl;
 cin>>b2;
 cout<<"Enter the no. of grades 'C' given by TL"<<endl;
 cin>>c2;
 cout<<"Enter the no. of grades 'D' given by TL"<<endl;
 cin>>d2;
 cout<<"Enter the no. of grades 'E' given by TL"<<endl;
 cin>>e2;
 m[1]=((a2*5)+(b2*4)+(c2*3)+(d2*2)+e2)/(n2*5);
 cout<<m[1]<<endl;
 mark[1]=(m[1]*10);
 grade2=check(mark[1]);
 cout<<"aggregate grade By TL is "<<grade2<<endl;
 getch();
}
void cal3()
{
 heading();
 float a3,b3,c3,d3,e3,n3;
 cout<<"Enter the total no. of grades given by the Clients"<<endl;
 cin>>n3;
 cout<<"Enter the no. of grades 'A' given by Clients"<<endl;
 cin>>a3;
 cout<<"Enter the no. of grades 'B' given by Clients"<<endl;
 cin>>b3;
 cout<<"Enter the no. of grades 'C' given by Clients"<<endl;
 cin>>c3;
 cout<<"Enter the no. of grades 'D' given by Clients"<<endl;
 cin>>d3;
 cout<<"Enter the no. of grades 'E' given by Clients"<<endl;
 cin>>e3;
 m[2]=((a3*5)+(b3*4)+(c3*3)+(d3*2)+e3)/(n3*5);
 cout<<m[2]<<endl;
 mark[2]=(m[2]*10);
 grade3=check(mark[2]);
  cout<<"aggregate grade By Client is "<<grade3<<endl;
  getch();
}
void cal4()
{
  heading();
 float a4,b4,c4,d4,e4,n4;
 cout<<"Enter the total no. of grades given by the Peers"<<endl;
 cin>>n4;
 cout<<"Enter the no. of grades 'A' given by Peers"<<endl;
 cin>>a4;
 cout<<"Enter the no. of grades 'B' given by Peers"<<endl;
 cin>>b4;
 cout<<"Enter the no. of grades 'C' given by Peers"<<endl;
 cin>>c4;
 cout<<"Enter the no. of grades 'D' given by Peers"<<endl;
 cin>>d4;
 cout<<"Enter the no. of grades 'E' given by Peers"<<endl;
 cin>>e4;
 m[3]=((a4*5)+(b4*4)+(c4*3)+(d4*2)+e4)/(n4*5);
 cout<<m[3]<<endl;
 mark[3]=(m[3]*10);
 grade4=check(mark[3]);
 cout<<"aggregate grade By Peers is "<<grade4<<endl;
 getch();
}
void cal5()
{
 heading();
 float a5,b5,c5,d5,e5,n5;
 cout<<"Enter the total no. of grades given by the HR"<<endl;
 cin>>n5;
 cout<<"Enter the no. of grades 'A' given by HR"<<endl;
 cin>>a5;
 cout<<"Enter the no. of grades 'B' given by HR"<<endl;
 cin>>b5;
 cout<<"Enter the no. of grades 'C' given by HR"<<endl;
 cin>>c5;
 cout<<"Enter the no. of grades 'D' given by HR"<<endl;
 cin>>d5;
 cout<<"Enter the no. of grades 'E' given by HR"<<endl;
 cin>>e5;
 m[4]=((a5*5)+(b5*4)+(c5*3)+(d5*2)+e5)/(n5*5);
 cout<<m[4]<<endl;
 mark[4]=(m[4]*10);
 grade5=check(mark[4]);
 cout<<"Aggregate grade by HR is "<<grade5<<endl;
 getch();

}
void calculate()
{
 heading();
 m[5]=(mark[0]+mark[1]+mark[2]+mark[3]+mark[4])/50;
 totalmarks=m[5]*10;
 if(totalmarks<=2)
    finalgrade='E';
 else if((totalmarks>2)&&(totalmarks<=4))
  finalgrade='D';
 else if((totalmarks>4)&&(totalmarks<=6))
  finalgrade='C';
 else if((totalmarks>6)&&(totalmarks<=8))
  finalgrade='B';
 else if((totalmarks>8)&&(totalmarks<=10))
  finalgrade='A';
  cout<<"The final grade is "<<finalgrade;
  getch();
}
 };
 int main()
 {clrscr();
  heading();
  int n;
  int i;
  cout<<"enter the number of employees."<<endl;
  cin>>n;
  emp *E;
  E= new emp[n];
  fstream fout;
  fout.open("empdata.txt",ios::in|ios::out);
  if(!fout)
  {
   cout<<"unable to write the contents in the file"<<endl;
   getch();
   return 1;
  }
  for(i=0;i<n;i++)
  {
   E[i].cal1();
   E[i].cal2();
   E[i].cal3();
   E[i].cal4();
   E[i].cal5();
   E[i].calculate();
  }
  fout.close();
  getch();
  return 0;
 }


