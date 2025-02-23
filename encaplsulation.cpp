//Implement encapsulation using private data members and public methods within classes
#include<iostream>
using namespace std;
class person
{
	private:
		string name; int age;
	public:
    void setname(string bname){
    	name=bname;
	}
   string getname()	
	{
		return name;
	}

    void setage( int bage)
	{  if(bage>0){
		age=bage;
	}
	else{
		cout<<"invalid age";
	}
	}
	int getage()
	{
		return age;
		}	
};
int main(){
  person a,b;
  a.setname("bhavesh");
  a.setage(19);
  cout<<"name: "<<a.getname()<<endl;
  cout<<"age : "<<a.getage()<<endl;
}





