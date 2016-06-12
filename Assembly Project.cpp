// Execute a one way trade from C values through assembly
// Use EMU 8086 compiler to run

#include<iostream>
#include<iomanip>

using namespace std;

char const *Astring="A thread"; // %0
char const *Aneedle="A needle"; // %1
char const *holder="A holder"; // %2

void contract(){
	asm(
	"mov %0, %1"				
:	"=r"(holder)
:	"r"(Astring),"r"(holder)	// r (source), r (destination)	// moves my thread to holder
		);
	};

void trade(){
	asm(
	"mov %1, %0"				
:	"=r"(Astring)
:	"r"(Aneedle), "r"(Astring)	// moves the needle to become my needle
		);
	};

void trade2(){
	asm(
	"mov %0, %2"				
:	"=r"(Astring)
:	"r"(holder), "r"(Astring)	// moves the Thread to become my Thread
		);
	};


	
int main()
{

cout<< "My name is Barindra Narinesingh"<<endl;
cout<< "Assembly Project #1:"<<endl<<
	   "This Project illustrates how to go from C to assembly"<<endl<<
	   "and back to C via moving values at the location" <<endl<<endl<<endl<<endl;
	   
	   

cout<<"I have "<<Astring<<" and need "<<Aneedle<<" "<<" I ask MASM to trade what I have for what she has... " <<endl<<endl;

contract(); // Saves the initial value of A thread

trade();

cout<<"She trades with me and now i have "<<Astring<<" she has a "<<Aneedle<< " too "<<endl<<endl;

cout<<"If I trade again to see if i can get back my thread," <<endl;

trade();

cout<<"I still have a "<<Astring<<" she has a "<<Aneedle<< " because a mov replaced what was at that location. "<<endl<<endl;


cout<<"With a place holder, I can recover my initial item by trading...*trades"<<endl<<endl;

trade2();


cout<<"I now have "<<Astring<<" again and "<<Aneedle<<" "<<" is back with MASM " <<endl<<endl;


cout<<" "<<endl<<endl;
cout<< "End of Program"<<endl<<endl;

system("pause");
return 0;

}

// End of main program




