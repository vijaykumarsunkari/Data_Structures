


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}
string reverseWord(string str){
    

  int start=0;
  int end=str.length()-1;
  int temp;
  while(start<end){
      
      temp=str[start];
      str[start]=str[end];
      str[end]=temp;
      start++;
      end--;
  }
  return str;
  
}
