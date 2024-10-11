#include<iostream>
using namespace std;
int size=10;
class circularq{
	int arr[100];
	int front,rear;
	public:
		circularq(){
			front=-1;
			rear=-1;
		}
		void enqueue(int x){
			if((front==0 && rear==size-1)||((rear+1)%size==front)){
			cout<<"Queue is full";
			}
			else if(front==-1){
				front=rear=0;
				arr[rear]=x;
			}
			else{
				rear++;
				arr[rear]=x;
			}
		}
		int dequeue(){
			if(front==-1){
				cout<<"Queue is empty";
				return -1;
			}
			int data=arr[front];
			arr[front]=-1;
			if(front==rear){
				front=-1;
				rear=-1;
			}
			else if(front==size-1){
				front=0;
			}
			else
			front++;
			return data;
		}
		bool isempty(){
			if(front==-1) return true;
			else return false;
		}
		bool full(){
			if((front==0 && rear==size-1)||((rear+1)%size==front)){
				return true;
			}
			else{
				return false;
			}
		}
		void display(){
			if(front==-1){
				cout<<"\nQueue is empty";
				return ;
			}
			cout<<"\nElement of queue is\n";
			if(rear>=front){
				for(int i=front;i<=rear;i++){
					cout<<arr[i]<<" ";
				}
			}
			else{
				for(int i=front;i<=size-1;i++){
					cout<<arr[i]<<" ";
				}
				for(int i=0;i<=rear;i++){
					cout<<arr[i]<<" ";
				}
			}
		}
};
int main(){
	circularq obj;
	obj.enqueue(10);
	obj.enqueue(20);
	obj.enqueue(30);
	obj.enqueue(40);
	cout<<obj.dequeue();
	cout<<endl;
	cout<<obj.full();
	cout<<endl;
	cout<<obj.isempty();
	cout<<endl;
	obj.display();
	return 0;
}
