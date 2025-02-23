 #include<iostream>
using namespace std;
class animal
{ public:
	void eat()
	{
		cout<<"eating.....\n";
	}
};
class dog:public animal//single level inhertiance
{ public:
 void sound(){
 	cout<<"barking...\n";
 }	
};
class labror:public dog
{ public:
	void breed()
	{
		cout<<" breed = labror.....\n";
	}
};
int main(){
	cout<<"single-level inheritence.....\n";
	dog d;
	d.eat();
	d.sound();
	
	cout<<"multilevel inheritance......\n";
	labror l;
	l.eat();
	l.sound();
	l.breed();
	return 0;
}
