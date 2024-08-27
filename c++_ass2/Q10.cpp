#include<iostream>
using namespace std;
class time{
	int h,m,s;
	public:
		void get(){
			cout<<"enter the hours"<<endl;
			cin>>h;
			cout<<"enter the min"<<endl;
			cin>>m;
			cout<<"enter the sec"<<endl;
			cin>>s;
		}
		int seconds(){
			int ans=0;
			ans=h*3600;
			ans+=m*60;
			ans+=s;
			return ans;
		}
};
int main(){
	time t;
	t.get();
	int ans=t.seconds();
	cout<<"Time in seconds "<<ans;
	return 0;
}
