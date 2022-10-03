# include<iostream>
using namespace std;
int main()
{
	int total,Percentage;
	int Mark[5];
	cout<<"Enter the Marks of each Subject- "<<endl;
	for(int i=0;i<=4;i++){
	cin>>Mark[i];
 	}
 	
	for(int i=0;i<=4;i++){
	total=total + Mark[i];
	}
	
 	cout<<"The total marks obtain from 500 are  "<<total<<endl;
 	
 	Percentage=(total/500.0)*100.0;
 	cout<<"The percentage is "<<Percentage<<endl;
 	
 	if((Percentage<100.0)&&(Percentage>=90.0)){
 	cout<<"Grade is A"<<endl;
 	}
	else if((Percentage<90.0)&&(Percentage>=80.0)){
		cout<<"Grade is B"<<endl;
	}
 	else if((Percentage<80.0)&&(Percentage>=70.0)){
 		cout<<"Grade is C"<<endl;
	}
 	else if((Percentage<70.0)&&(Percentage>=60.0)){
 		cout<<"Grade is D"<<endl;
	}
 	
 	else if((Percentage<60.0)&&(Percentage>=50.0)){
 		cout<<"Grade is E"<<endl;
	}
 	
 	else if((Percentage<50.0)&&(Percentage>=0.0)){
 		cout<<"Sorry you failed"<<endl;
	}
 	
 	return 0;
 }







