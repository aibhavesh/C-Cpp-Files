#include<iostream>
using namespace std;
class sbvm{  //declaration of class sbvm
   int classes; int teachers; int students;// private data variable declare 
   public:
   void get()// public void function declaration 
   {
    cout<<"enter the number of classes : ";
	cin>>classes;
	cout<<"enter the number of teachers : ";
	cin>>teachers;
	cout<<"enter the numbers of student : ";
	cin>>students;	
   } 
   friend void show(sbvm d1);// declaration of  friend function show with sbvm type object 
};
void show(sbvm d1){// defination of friend function
	cout<<"there are "<< d1.classes <<" in school"<<endl;
	cout<<"there are "<< d1.teachers <<" in school"<<endl;
	cout<<"there are"<< d1.students <<" in school"<<endl;
}
int main(){//main function 
	sbvm d1;
	d1.get();
   show(d1);//showing the data of friend function with the
           //argument in friend function because friend function didnt call by object   
}
