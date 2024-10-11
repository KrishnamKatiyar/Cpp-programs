#include<iostream>
using namespace std;
namespace INDIA{
	namespace UP{
		namespace GNIOT{
			class B3{
				public:
				void logic(){
					cout<<"krishnam";
				}
			};
		}
	}
}
//using namespace INDIA;
//using namespace UP;
//using namespace GNIOT;
int main(){
	INDIA::UP::GNIOT::B3 ob;
	ob.logic();
	return 0;
}
