#include<iostream>
using namespace std;
class smartTv;
class tv{//class1 tv
     int cost;
     public:
       void get()
       {
       	cout<<"enter the amount of tv : ";
       	cin>>cost;
	   }
	   friend void costprice(tv a,smartTv s);//common friend function costprice
};
class smartTv{//class2 smarttv
     int cost;
     public:
       void get()
       {
       	cout<<"enter the amount of smart tv : ";
       	cin>>cost;
	   }
	   friend void costprice(tv a,smartTv s);//common friend function costprice
};
void costprice(tv a,smartTv s)//defination of friend function
{
	cout<<"the cost of tv is : "<<a.cost<<endl;
	cout<<"\nthe cost of smarttv is : "<<s.cost;
	//comparision of cost
	if(a.cost > s.cost )
	{
		cout<<"\nsmarttv is cheaper than Tv";	
	}
   else if(a.cost<s.cost)
	{
		cout<<"\nTv is cheaper than smarttv";
	}
	else
	{
		cout<<"\n both smarttv and tv have same price ";
	}
}
int main()
{
	tv a;
	smartTv s;
	a.get();
	s.get();
	costprice(a,s);
}
