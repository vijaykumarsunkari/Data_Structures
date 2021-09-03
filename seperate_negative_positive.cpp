#include <iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
     int a[n];
     int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            b[x]=a[i];
            x++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            b[x]=a[i];
            x++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
}
