/*
1. WAP to get and display 5 Employees
information using class and object by including
below mentioned attributes:
- emp_id
- emp_name
- emp_role
- emp_age
- emp_salary
- emp_experience
- emp_city
- emp_company_name*/

#include<iostream>
#include<string.h>

using namespace std;

class Employ{
	public :
			int id;
			char name[100];
			char roal[100];
			int age;
			int salary;
			int exp;
			char city[100];
			char company[100];	
};

int main(){

int i;
	Employ s1;
	for(i=1;i<6;i++){
	
	cout<<"ENTER ID"<<endl;
	cin>>s1.id;
	
	cout<<"ENTER NAME "<<endl;
	cin>>s1.name;
	
	cout<<"ENTER ROAL "<<endl;
	cin>>s1.roal;
	
	cout<<"ENTER AGE "<<endl;
	cin>>s1.age;
	
	cout<<"ENTER SALARY "<<endl;
	cin>>s1.salary;
	
	cout<<"ENTER EXP "<<endl;
	cin>>s1.exp;
	
	cout<<"ENTER CITY "<<endl;
	cin>>s1.city;
	
	cout<<"ENTER COMPANY NAME "<<endl;
	cin>>s1.company;
	
	
		
	cout<<s1.id <<endl;
	cout<<s1.name <<endl;
	cout<<s1.roal <<endl;
	cout<<s1.age <<endl;
	cout<<s1.salary <<endl;
	cout<<s1.exp <<endl;
	cout<<s1.city <<endl;
	cout<<s1.company <<endl;
				

}
		
	return 0;
}
