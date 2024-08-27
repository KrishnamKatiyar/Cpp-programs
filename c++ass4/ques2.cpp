#include<iostream>
using namespace std;

class animal{
	protected:
		string name;
		int age;
	public:
		void set_value(string n, int a){
			name = n;
			age = a;
		}
	   
};

class Zebra : public animal{
	public:
		void display_inf(){
			cout<<"zebra's name : "<<name<<endl;
			cout<<"zebra's age : "<<age<<" years"<<endl;
			cout<<"palce of origin : Earth"<<endl;
		}
};

class Dolphin : public animal{
	public:
		void display_inf(){
			cout<<"dolphin's name : "<<name<<endl;
			cout<<"dolphin's age : "<<age<<" years"<<endl;
			cout<<"palce of origin : water"<<endl;
		}
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("naman", 22);
    dolphin.set_value("namani", 22);

    cout << "Zebra Information:" << endl;
    zebra.display_inf();
    cout << endl;

    cout << "Dolphin Information:" << endl;
    dolphin.display_inf();

    return 0;
}
