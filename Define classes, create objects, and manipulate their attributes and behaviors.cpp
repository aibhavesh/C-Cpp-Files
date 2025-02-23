//Define classes, create objects, and manipulate their attributes and behaviors
#include<iostream>
#include<string>
using namespace std;
class apartment
{    public:
	int floor; int flatnum;
  string owner; int pnum;
	void get(){
		cout<<"enter your floor : ";
		cin>>floor;
		cout<<"\nenter your flat number : ";
		cin>>flatnum;
		cout<<"\nenter your name : ";
		cin>>owner;
		cout<<"\nenter your phone number: ";
		cin>>pnum;
	}
	void display(){
		cout<<"your data"<<"\n floor : "<<floor<<" \n flatnumber : "<<flatnum<<" \n name : "<<owner;
	}
};
int main(){
	apartment p1;
	p1.get();
	p1.display();
}
