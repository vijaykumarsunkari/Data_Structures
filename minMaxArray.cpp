#include <iostream>
using namespace std;
class Store{
    int max;
    int min;
    public:
    Store(int a,int b){
        max=a;
        min=b;
    }
    void display(){
        cout<<"Max ="<<max<<endl<<"Min ="<<min;
    }
};
void check(int a[],int n){
    int min,max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    Store x(max,min);
    x.display();
}

int main() {
	int a[100];
	int n;
	cout<<"enter no of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	check(a,n);
	return 0;
}
