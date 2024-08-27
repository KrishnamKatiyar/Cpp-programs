#include<iostream>
#include<string>
using namespace std;
class Hotel{
	string hotel_name,type,Hcity;
	int rate;
	public:
		Hotel(string hname,string htype,string hcity,int hrate):
			hotel_name(hname),type(htype),Hcity(hcity),rate(hrate){}
		void hdisplay(){
			cout<<"Hotel Details"<<endl;
			cout<<"Hotel Name is "<<hotel_name<<endl;
			cout<<"Hotel type is "<<type<<endl;
			cout<<"Hotel city is "<<Hcity<<endl;
			cout<<"Hotel rate is "<<rate<<endl;
		}
};
class Flight{
	string src,dest;
	int seat_no,flight_no;
	public:
			Flight(string fsrc, string fdest, int sno, int fno):
        src(fsrc), dest(fdest), seat_no(sno), flight_no(fno) {}
		void fdisplay(){
			cout<<"Flight Deatails:"<<endl;
			cout<<"Flight source :"<<src<<endl;
			cout<<"Flight Destination :"<<dest<<endl;
			cout<<"Flight Seat number :"<<seat_no<<endl;
			cout<<"Flight flight number :"<<flight_no<<endl;
		}
};
class PASSENGER:public Hotel,public Flight{
	string name,pcity;
	int age;
	public:
		PASSENGER(string hname,string htype,string hcity,int hrate,string fsrc,string fdest,int sno,int fno,
		    string pname,string city,int p_age):
			Hotel(hname,htype,hcity,hrate),Flight(fsrc,fdest,sno,fno),name(pname),pcity(city),age(p_age){}
		void pdisplay(){
			cout<<"PASSENGER Details"<<endl;
			cout<<"PASSENGER name"<<name<<endl;
			cout<<"PASSENGER city"<<pcity<<endl;
			cout<<"PASSENGER age"<<age<<endl;
		}
			
};
int main(){
	PASSENGER p("hilton","5star","Delhi",6000,"Delhi","Mumbai",1001,69,"krishnam","Delhi",22);
	p.hdisplay();
	p.fdisplay();
	p.pdisplay();
	return 0;
}
