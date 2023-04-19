#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct empdata{
	string id;
	string name;
	string age;
	string designation;
	string experience;
	string cell;
	string salary;
};

empdata list[10];
fstream myfile;


void enter(){
	myfile.open("abc.txt", ios::in|ios::out|ios::app);
	
	cin.ignore();
	
	cout<<"Enter the ID:\n";
	getline(cin,list[0].id);
	myfile<<list[0].id<<",";
	
//

	cin.ignore();
	
	
	cout<<"Enter the name:\n";
	getline(cin,list[0].name);
	myfile<<list[0].name<<",";
	
	cout<<"Enter the age:\n";
	getline(cin,list[0].age);
	myfile<<list[0].age<<",";
	
	cout<<"Enter the designation:\n";
	getline(cin,list[0].designation);
	myfile<<list[0].designation<<",";
	
	cout<<"Enter the experience:\n";
	getline(cin,list[0].experience);
	myfile<<list[0].experience<<",";
	
	cout<<"Enter cell:\n";
	getline(cin,list[0].cell);
	myfile<<list[0].cell<<",";
	
	cout<<"Enter salary:\n";
	getline(cin,list[0].salary);
	myfile<<list[0].salary<<endl;
	
	myfile.close();
	
	
}

void show(){
	
	string record;
	string temp="";
	int count=1;
	myfile.open("abc.txt",ios::in|ios::out|ios::app);
	int i=0;
	int emp=0;
	
	while(myfile){
		
		getline(myfile, record);
//		cout<<record;
		
		for(int i=0; record[i]!='\0';i++){
			if(record[i]==',' && count==1){
				list[emp].id=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==2){
				list[emp].name=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==3){
				list[emp].age=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==4){
				list[emp].designation=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==5){
				list[emp].experience=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==6){
				list[emp].cell=temp;
				count++;
				temp="";
				continue;
			}
			
			temp+=record[i];
		}
		list[emp].salary=temp;
		emp++;
		temp="";
		count=1;
		
	}
	
	for(int j=0; j<emp-1; j++){
		cout<<"The ID of Employee is:         "<<list[j].id<<endl;
		cout<<"The Name of Employee is:       "<<list[j].name<<endl;
		cout<<"The Age of Employee is:        "<<list[j].age<<endl;
		cout<<"The Designation of Employee is:"<<list[j].designation<<endl;
		cout<<"The Experience of Employee is: "<<list[j].experience<<endl;
		cout<<"The Cell of Employee is:       "<<list[j].cell<<endl;
		cout<<"The Salary of Employee is:     "<<list[j].salary<<endl;
		cout<<"------------------------------------------\n";
		
	}
	myfile.close();
	
}

void search(){
	
	string record;
	string temp="", req;
	int count=1;
	
	cout<<"Enter the ID of employee that you want to find: \n";
	cin>>req;
	
	myfile.open("abc.txt",ios::in|ios::out|ios::app);
	int i=0;
	int emp=0;
	
	while(myfile){
		
		getline(myfile, record);
//		cout<<record;
		
		for(int i=0; record[i]!='\0';i++){
			if(record[i]==',' && count==1){
				list[emp].id=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==2){
				list[emp].name=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==3){
				list[emp].age=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==4){
				list[emp].designation=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==5){
				list[emp].experience=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==6){
				list[emp].cell=temp;
				count++;
				temp="";
				continue;
			}
			
			temp+=record[i];
		}
		list[emp].salary=temp;
		emp++;
		temp="";
		count=1;
		
	}
	
	for(int j=0; j<emp-1; j++){
		if(list[j].id==req){
			
		cout<<"The ID of Employee is:         "<<list[j].id<<endl;
		cout<<"The Name of Employee is:       "<<list[j].name<<endl;
		cout<<"The Age of Employee is:        "<<list[j].age<<endl;
		cout<<"The Designation of Employee is:"<<list[j].designation<<endl;
		cout<<"The Experience of Employee is: "<<list[j].experience<<endl;
		cout<<"The Cell of Employee is:       "<<list[j].cell<<endl;
		cout<<"The Salary of Employee is:     "<<list[j].salary<<endl;
		cout<<"------------------------------------------\n";
			
		}
	}
	
	myfile.close();
	
}

void update(){
	
	string record;
	string temp="", req;
	int count=1;
	
	ofstream myfile2;
	
	cout<<"Enter the ID of employee that you want to update: \n";
	cin>>req;
	
	myfile.open("abc.txt",ios::in|ios::out|ios::app);
	int i=0;
	int emp=0;
	
	while(myfile){
		
		getline(myfile, record);
//		cout<<record;
		
		for(int i=0; record[i]!='\0';i++){
			if(record[i]==',' && count==1){
				list[emp].id=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==2){
				list[emp].name=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==3){
				list[emp].age=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==4){
				list[emp].designation=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==5){
				list[emp].experience=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==6){
				list[emp].cell=temp;
				count++;
				temp="";
				continue;
			}
			
			temp+=record[i];
		}
		list[emp].salary=temp;
		emp++;
		temp="";
		count=1;
		
	}
	
	for(int j=0; j<emp-1; j++){
		if(list[j].id==req){
			cout<<"The data of employee that you want to update is:\n";
			cout<<"------------------------------------------------\n";
			
			cout<<"The ID of Employee is:         "<<list[j].id<<endl;
			cout<<"The Name of Employee is:       "<<list[j].name<<endl;
			cout<<"The Age of Employee is:        "<<list[j].age<<endl;
			cout<<"The Designation of Employee is:"<<list[j].designation<<endl;
			cout<<"The Experience of Employee is: "<<list[j].experience<<endl;
			cout<<"The Cell of Employee is:       "<<list[j].cell<<endl;
			cout<<"The Salary of Employee is:     "<<list[j].salary<<endl;
			cout<<"------------------------------------------\n";
			
			
			cout<<"Enter the new data of Employee:\n";
			cout<<"-------------------------------\n";
			
			cin.ignore();
			
			cout<<"Enter the ID:\n";
			getline(cin,list[j].id);
			myfile<<list[j].id<<",";
			
//			cin.ignore();
			
			
			cout<<"Enter the name:\n";
			getline(cin,list[j].name);
			myfile<<list[j].name<<",";
			
//			cin.ignore();
			
			cout<<"Enter the age:\n";
			getline(cin,list[j].age);
			myfile<<list[j].age<<",";
			
//			cin.ignore();
			
			cout<<"Enter the designation:\n";
			getline(cin,list[j].designation);
			myfile<<list[j].designation<<",";
			
//			cin.ignore();
			
			cout<<"Enter the experience:\n";
			getline(cin,list[j].experience);
			myfile<<list[j].experience<<",";
			
//			cin.ignore();
			
			cout<<"Enter cell:\n";
			getline(cin,list[j].cell);
			myfile<<list[j].cell<<",";
			
//			cin.ignore();
			
			cout<<"Enter salary:\n";
			getline(cin,list[j].salary);
			myfile<<list[j].salary;
			
//			cin.ignore();
			
			cout<<"Your data has been updated successfully:\n";
			cout<<"----------------------------------------\n";
			
			myfile2.open("abc.txt");
			for(int k=0; k<emp-1; k++){
				
				myfile2<<list[k].id<<",";
				myfile2<<list[k].name<<",";
				myfile2<<list[k].age<<",";
				myfile2<<list[k].designation<<",";
				myfile2<<list[k].experience<<",";
				myfile2<<list[k].cell<<",";
				myfile2<<list[k].salary<<endl;
			}
			
			
			break;
			
		}
		
		else if(j==emp-2){
			cout<<"ID not found... please try again..\n";
			cout<<"----------------------------------\n";
		}	
		
	}
	myfile.close();
	
}

void deletedata(){
	
	string record;
	string temp="", req;
	int count=1;
	
	ofstream myfile2;
	
	cout<<"Enter the ID of employee that you want to delete: \n";
	cin>>req;
	
	myfile.open("abc.txt",ios::in|ios::out|ios::app);
	int i=0;
	int emp=0;
	
	while(myfile){
		
		getline(myfile, record);
//		cout<<record;
		
		for(int i=0; record[i]!='\0';i++){
			if(record[i]==',' && count==1){
				list[emp].id=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==2){
				list[emp].name=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==3){
				list[emp].age=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==4){
				list[emp].designation=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==5){
				list[emp].experience=temp;
				count++;
				temp="";
				continue;
			}
			
			if(record[i]==',' && count==6){
				list[emp].cell=temp;
				count++;
				temp="";
				continue;
			}
			
			temp+=record[i];
		}
		list[emp].salary=temp;
		emp++;
		temp="";
		count=1;
		
	}
	
	for(int j=0; j<emp-1; j++){
		if(list[j].id==req){
			cout<<"The data of employee that you want to delete is:\n";
			cout<<"------------------------------------------------\n";
			
			cout<<"The ID of Employee is:         "<<list[j].id<<endl;
			cout<<"The Name of Employee is:       "<<list[j].name<<endl;
			cout<<"The Age of Employee is:        "<<list[j].age<<endl;
			cout<<"The Designation of Employee is:"<<list[j].designation<<endl;
			cout<<"The Experience of Employee is: "<<list[j].experience<<endl;
			cout<<"The Cell of Employee is:       "<<list[j].cell<<endl;
			cout<<"The Salary of Employee is:     "<<list[j].salary<<endl;
			cout<<"------------------------------------------\n";
			
			for(int k=j ;k<emp-2; k++){
				list[k].id=list[k+1].id;
				list[k].name=list[k+1].name;
				list[k].age=list[k+1].age;
				list[k].designation=list[k+1].designation;
				list[k].experience=list[k+1].experience;
				list[k].cell=list[k+1].cell;
				list[k].salary=list[k+1].salary;
				
				if ( k==emp-3){
					break;
				}
			}
			myfile2.open("abc.txt");
			for(int l=0; l<emp-2; l++){
				
				myfile2<<list[l].id<<",";
				myfile2<<list[l].name<<",";
				myfile2<<list[l].age<<",";
				myfile2<<list[l].designation<<",";
				myfile2<<list[l].experience<<",";
				myfile2<<list[l].cell<<",";
				myfile2<<list[l].salary<<endl;
			}
		}
		
		else if(j==emp-2){
			cout<<"ID not found... please try again..\n";
			cout<<"----------------------------------\n";
		}
		myfile2.close();
	}
	
}

 int main(){
 	
 	int choice;
 	
 	cout<<"\t\t\t---------------------------\n";
 	cout<<"\t\t\t|Employee managment system|\n";
 	cout<<"\t\t\t---------------------------\n";
 
 	while (true){
 		cout<<"\n\n";
	 	cout<<"Press 1 to add :\n";
	 	cout<<"Press 2 to show :\n";
	 	cout<<"Press 3 to search :\n";
	 	cout<<"Press 4 to update :\n";
	 	cout<<"Press 5 to delete :\n";
	 	cout<<"Press 6 to exit:\n";
	 	
	 	cout<<"Enter your choice:\n";
	 	cin>>choice;
	 	
	 	switch(choice){
	 		
	 		case 1:{
	 			enter();
				break;
			 }
			 
			case 2:{
				show();
				break;
			} 
			
			case 3:{
				search();
				break;
			}
			
			case 4:{
				update();
				break;
			}
			
			case 5:{
				deletedata();
				break;
			}
	 		
		}
	}
	 
	return 0;
}

