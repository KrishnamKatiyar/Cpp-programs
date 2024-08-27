#include <iostream>
#include <string>
using namespace std;

class Programming {
public:
//    Programming() {
//        cout << "I love programming languages" << endl;
//    }
//
//    Programming(string language) {
//        cout << "I love " << language << endl;
//    }
    
    void dispaly(string str = "programming languages"){
    	cout<<"I Love "<<str<<endl;
	}
};

int main() {
//    Programming obj1;
//    Programming obj2("cpp");
    
    Programming obj3,obj4;
    obj3.dispaly();
    obj4.dispaly("cpp");

    return 0;
}

