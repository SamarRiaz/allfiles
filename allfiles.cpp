//lab 3
//ytod

#include <iostream>
using namespace std;
main()
{
double yrs,days;
cout<<"Enter your age in years: ";
cin>>yrs;
days= 365*yrs;
cout<<"Your age in days is approximately "<<days<<" days"; 
}

//popu

#include <iostream>
using namespace std;
main()
{
int pound, kilograms;
cout<<"Enter your weight in Pounds: ";
cin>>pound;
cout<<pound<<" pound is equal to ";
cin>>kilograms;
cout<<"kilograms";

} 

//power

#include <iostream>
using namespace std;
main()
{
double V,A,W;
cout<<"Enter Voltages (in volts): ";
cin>>V;
cout<<"Enter Current (in amperes) : ";
cin>>A;
W=A*V;
cout<<"The Power is "<<W;
}

//convert

#include <iostream>
using namespace std;
main()
{
double hrs,scnds;
cout<<"Enter the numbr of hours: ";
cin>>hrs;
scnds= 3600*hrs;
cout<<hrs<<" hours is equivalent to "<<scnds<<" seconds"; 
}

//match

#include <iostream>
using namespace std;
main()
{
double D,L,W,T;
string N;
cout<<"Enter the name of the cricket team: ";
cin>>N;
cout<<"Enter the number of wins: ";
cin>>W;
cout<<"Enter the number of draws: ";
cin>>D;
cout<<"Enter the number of losses: ";
cin>>L;
T=W*3+D*1+L*0;
cout<<N<<" has obtained "<<T<<" points in the Asia Cup tournament.";
}

//uetagg

#include <iostream>
using namespace std;
main()
{
double m_marks,i_marks,e_marks;
double agg;
cout<<"Enter your Matriculation marks (out of 1100): ";
cin>>m_marks; 
cout<<"Enter your Intermediate marks (out of 510): ";
cin>>i_marks; 
cout<<"Enter your ECAT marks (out of 400): ";
cin>>e_marks;
agg= (((m_marks/1100)*10/100)+((i_marks/510)*40/100)+((e_marks/400)*50/100))*100;
cout<<"Total aggregate of student is: "<<agg;
}

//w

#include <iostream>
using namespace std;
main()
{
int pound, kilograms;
cout<<"Enter your weight in Pounds: ";
cin>>pound;
cout<<pound<<" pound is equal to ";
cin>>kilograms;
cout<<"kilograms";

} 

//current

#include <iostream>
using namespace std;
main()
{
double Q,I,T;
cout<<"Enter the Charge: ";
cin>>Q;
cout<<"Enter the Time: ";
cin>>T;
I=Q/T;
cout<<"Current is "<<I;
}

//ar

#include <iostream>
using namespace std;
main()
{
int length,width,area;
string name;
cout<<"Enter the length of rectangle: ";
cin>>length;
cout<<"Enter the width of rectangle: ";
cin>>width;
area= width*length;
cout<<"Enter the area of rectangle: "<<area;
}

//fer

#include<iostream>
using namespace std;
main()
{
float p,c,a,cp,ca;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>p;
cout<<"Enter the cost of the bag: $";
cin>>c;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>a;
cp=c/p;
cout<<"Cost of fertilizer per pound: $"<<cp<<endl;
ca=c/a;
cout<<"Cost of fertilizing per square foot: $"<<ca;
}

//amongus

#include<iostream>
using namespace std;
main()
{
float i,p;
int percent;
cout<<"Enter Imposter Count: ";
cin>>i;
cout<<"Enter Player Count: ";
cin>>p;
percent= 100*(i/p);
cout<<"Chance of being an imposter: "<<percent<<"%";
}

//sum

using namespace std;
main()
{
int d,sum,n1,n2,n3,n4;
cout<<"Enter a 4-digit number: ";
cin>>d;
n1=d % 10;
n2=(d/10)%10;
n3=(d/100) % 10;
n4=(d/1000) % 10;
sum= n1+n2+n3+n4;	 
cout<<"Sum of the individual digits: "<<sum;
}

//pr

#include<iostream>
using namespace std;
main()
{
float vp,fp,kv,kf,t_e,rp;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vp;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fp;
cout<<"Enter total kilograms of vegetables: ";
cin>>kv;
cout<<"Enter total kilograms of fruits: ";
cin>>kf;
t_e=(vp*kv)/1.94+(fp*kf)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<t_e;

}

//paint

#include<iostream>
using namespace std;
main()
{
int l,w,s_m,p;
cout<<"Number of square meters you can paint: ";
cin>>s_m;
cout<<"Width of the single wall (in meters): ";
cin>>w;
cout<<"Height of the single wall (in meters): ";
cin>>l;
p=s_m/(w*l);
cout<<"Number of walls you can paint: "<<p;
} 

//fps

#include<iostream>
using namespace std;
main()
{
int seconds,minutes,fps,total_fps;
cout<<"Number of Minutes: ";
cin>>minutes;
seconds=minutes*60;
cout<<"Frames per Second: ";
cin>>fps;
total_fps=seconds*fps;
cout<<"Total Number of Frames: "<<total_fps;
}

//lose
#include<iostream>
using namespace std;
main()
{
float k,d;
string n;
cout<<"Enter the Name of the Person: ";
cin>>n;
cout<<"Enter the target weight loss in kilograms: ";
cin>>k;
d= k*15;
cout<<n<<" will need "<<d<<" days to lose "<<k<<" kg of weight by following the doctor's suggestions";
}

//lengthy

#include<iostream>
using namespace std;
main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,sum,mul,sub,sum2,sub2;
cout<<"Number 1: ";
cin>>n1;
cout<<"Number 2: ";
cin>>n2;
cout<<"Number 3: ";
cin>>n3;
cout<<"Number 4: ";
cin>>n4;
cout<<"Number 5: ";
cin>>n5;
cout<<"Number 6: ";
cin>>n6;
cout<<"Number 7: ";
cin>>n7;
cout<<"Number 8: ";
cin>>n8;
cout<<"Number 9: ";
cin>>n9;
cout<<"Number 10: ";
cin>>n10;
cout<<"Number 11: ";
cin>>n11;
cout<<"Number 12: ";
cin>>n12;
cout<<"Number 13: ";
cin>>n13;
cout<<"Number 14: ";
cin>>n14;
cout<<"Number 15: ";
cin>>n15;
sum=n1+n2+n3+n4+n5;
mul=n6*n7*n8*n9*n10;
sub=n11-n12-n13-n14-n15;
sum2=sum+mul;
sub2=sum2-sub;
cout<<"The final result is: "<<sub2;


}

//house

#include<iostream>
using namespace std;
main()
{
int l,m,a;
cout<<"Enter the person's age: ";
cin>>l;
cout<<"Enter the number of times they've moved: ";
cin>>m;
a=l/(m+1);
cout<<"Average number of years lived in the same house: "<<a;
} 

//task1

# include <iostream>
void compare (int num1,int num2);
using namespace std;
main ()
{
int num1;
int num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
compare (num1,num2);
}
void compare (int num1, int num2)
{
if (num1==num2)
{
cout<<"true";
}
if (num1!=num2)
{
cout<<"false";
}
}



//Lab4
//task1

#include<iostream>
using namespace std;
void add();
main(){
 add();



}
void add()
{
 float num1,num2;
 cout<<"Enter the distance: ";
 cin>> num1;
 num2=num1*10;
 cout<<"Fuel needed: " <<num2;
}

//task2

#include<iostream>
using namespace std;
void add();
main(){
 add();



}
void add()
{
 float num1,num2;
 cout<<"Enter the measurement in inches: ";
 cin>> num1;
 num2=num1/12;
 cout<<"Equivalent in feet: " <<num2;
}

//task3

#include<iostream>
using namespace std;
void add();
main(){
 add();



}
void add()
{
 float num1,num2;
 cout<<"Enter the side length of the Rubik's Cube: ";
 cin>> num1;
 num2=num1*(6*num1);
 cout<<"Number of stickers needed: " <<num2;
}

//task4
#include<iostream>
using namespace std;

void mult(int num1, int num2){

	int answer;

	answer=num1*num2;

	cout<<"Multiplication: "<<answer;

}

void divi(int num1, int num2){

	int answer;

	answer=num1/num2;

	cout<<"Division: "<<answer;

}

void add(int num1, int num2){

	int answer;

	answer=num1+num2;

	cout<<"Addition: "<<answer;

}

void sub(int num1, int num2){

	int answer;

	answer=num1-num2;

	cout<<"Subtraction: "<<answer;

}


main(){

	int num1,num2;
	char op;

	cout<<"Enter 1st number: ";
	cin>>num1;

	cout<<"Enter 2nd number: ";
	cin>>num2;

	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;

	if (op=='*'){

	mult(num1,num2);
	
	}

	if (op=='/'){

	divi(num1,num2);
	
	}

	if (op=='+'){

	add(num1,num2);
	
	}

	if (op=='-'){

	sub(num1,num2);
	
	}

		

}

//task5

#include<iostream>
using namespace std;
void add(float num1);
main(){
 float num1;
 cout<<"Enter your age: ";
 cin>> num1;
 add(num1);





}
void add(float num1)
{
 if(num1>=18)
{
cout<<"You are eligible to vote.";
}
else
{
cout<<"You are not eligible to vote.";
}
}

//task6
#include<iostream>
using namespace std;
void add(float num1);
main(){
 float num1;
 cout<<"Enter your score: ";
 cin>> num1;
 add(num1);





}
void add(float num1)
{
 if(num1>50)
{
cout<<"Pass";
}
else
{
cout<<"Fail";
}
}

//task7

#include<iostream>
using namespace std;
void add(int num1);
main(){
 int num1;
 cout<<"Enter a number: ";
 cin>> num1;
 add(num1);





}
void add(int num1)
{
 if(num1%2==0)
{
cout<<"Number "<<num1<<" is even";
}
else
{
cout<<"Number "<<num1<<" is odd";
}
}

//task8

#include<iostream>
using namespace std;
void add(int num1,string day,float dis);
main(){
 float dis,num1;

 string day;
 cout<<"Enter the day of purchase: ";
 cin>> day;
cout<<"Enter the total purchase amount: $";
 cin>> num1;
dis=num1-num1/10;
 add(num1,day,dis);





}
void add(int num1,string day,float dis)
{
 if(day == "Sunday")
{
cout<<"Payable Amount: $"<<dis;
}
else
{
cout<<"Payable Amount: $"<<num1;

}
}

//task9

#include<iostream>
using namespace std;
void calculateFuel(float distance);
main(){

 float distance;
 cout<<"Enter the distance: ";
 cin>> distance;

 calculateFuel(distance);



}
void calculateFuel(float distance)
{
float fuel;
 fuel=distance*10;
if(fuel<100){
cout<<"Fuel needed: 100";
}
if(fuel>=100)
{
cout<<"Fuel needed: "<<fuel;

}

}

//task1

#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int main()
{
system("cls");
cout<<"Test";

gotoxy(15,15);
cout<<"My name is Samar Riaz";

return 0;
}

//task2

#include<iostream>
void tf(std::string a);
using namespace std;
main(){
string a;
cout<<"Enter 'true' or 'false':";
cin>>a;
tf(a);
}
void tf(std::string a)
{
if(a=="true")
cout<<"false";
if(a=="false")
cout<<"true";
}

//task3

#include<iostream>
void Pakistan(float a,float b);
void Ireland(float a,float b);
void India(float a,float b);
void England(float a,float b);
void Canada(float a,float b);
using namespace std;
main(){
float a,b;
string c;
cout<<"Enter the country's name: ";
cin>>c;
cout<<"Enter the ticket price in dollars: $";
cin>>a;
if(c=="Pakistan")
Pakistan(a,b);
else if(c=="Ireland")
Ireland(a,b);
else if(c=="India")
India(a,b);
else if(c=="England")
England(a,b);
else
Canada(a,b);

}
void Pakistan(float a,float b)
{
b=a-a*0.05;
cout<<"Final ticket price after discount: $"<<b;
}
void Ireland(float a,float b)
{
b=a-a*0.1;
cout<<"Final ticket price after discount: $"<<b;
}
void India(float a,float b)
{
b=a-a*0.2;
cout<<"Final ticket price after discount: $"<<b;
}
void England(float a,float b)
{
b=a-a*0.3;
cout<<"Final ticket price after discount: $"<<b;
}
void Canada(float a,float b)
{
b=a-a*0.45;
cout<<"Final ticket price after discount: $"<<b;
}

//task4

# include <iostream>
void checkSpeed (int speed);
using namespace std;
main ()
{
int speed;
cout<<"Speed: ";
cin>>speed;
checkSpeed(speed);
}
void checkSpeed (int speed)
{
if (speed>100)
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
if (speed<=100)
cout<<"Perfect! You're going good.";
}

//task5

# include <iostream>
void bonus(int a, int b);
using namespace std;
main ()
{
int a;
int b;

cout<<"Enter your position: ";
cin>>a;
cout<<"Enter your friend's position: ";
cin>>b;
bonus (a,b);
}
void bonus(int a, int b)
{
if (b-a>6)
cout<<"false";
if (b-a<=6)
cout<<"true";
}

//task6

# include <iostream>
void time (int a, int b);
using namespace std;
main ()
{
int b;
int a;
cout<<"Enter the number of hours: ";
cin>>a;
cout<<"Enter the number of minutes: ";
cin>>b;
time (a,b);
}
void time (int a, int b)
{
int convert;
convert=a*60;
if(convert<b)
cout<<b;
if (convert>b)

cout<<a;
}

//task7

# include <iostream>
void flowerShop(int redRose, int whiteRose, int tulip);
using namespace std;
main ()
{
int rose;
int w_rose;
int tuli;
cout<<"Red Rose: ";
cin>>rose;
cout<<"White Rose: ";
cin>>w_rose;
cout<<"Tulips: ";
cin>>tuli;
flowerShop(rose,w_rose,tuli);
}
void flowerShop(int rose, int w_rose, int tuli)
{
float r_price;
float w_price;
float t_price;
float total;
float disc;
float f_price;
r_price=2.00*rose;
w_price=4.10*w_rose;
t_price=2.50*tuli;
total=r_price+w_price+t_price;
if(total>200)
{
disc=(total/100)*20;
f_price=total-disc;
cout<<"Original Price: $"<<total<<endl;
cout<<"Price after Discount: $"<<f_price;
}
if (total<=200)
{
cout<<"Original Price: $"<<total<<endl;
cout<<"No discount applied.";
}


}

//task8

# include <iostream>
void pet (int h);
using namespace std;
main ()
{
int h;
cout<<"Holidays: ";
cin>>h;
pet(h);
}
void pet (int h)
{
int t;
int w_days;
int t1;
int hrs;
int mins;
w_days=365-h;
t=(w_days*63)+(h*127);
if (t<30000)
{
t1=30000-t;
hrs=t1/60;
mins=t1%60;
cout<<"Tom sleeps well"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes less for play";
}
if (t>30000)
{
t1=t-30000;
hrs=t1/60;
mins=t1%60;
cout<<"Tom will run away"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes for play";
}
}

//task9

# include <iostream>
void tpChecker(int people,int tp);
using namespace std;
main ()
{
int people;
int tp;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
int sheet = tp*500;
int upday = 57*people;
int t_usage=upday*14;
int avail = sheet/upday;
if (sheet>t_usage)
cout<<"Your TP will last "<<avail<<" days, no need to panic!";
if (sheet<t_usage)
cout<<"Your TP will only last "<<avail<<" days, buy more!";
}










