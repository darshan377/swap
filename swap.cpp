#include<iostream>
#include<string>
using namespace std;

void swap(string &str1,string &str2){
     string temp = str1;
     str1 = str2;
     str2 = temp;
}

int main(){
    string str1,str2;
    cout<<"1st string"<<endl;
    cin>>str1;
    cout<<"2nd string"<<endl;
    cin>>str2;
    swap(str1,str2);
    cout<<"swapping: "<<endl;
    cout<<"1st string :"<<str1<<endl;
    cout<<"2nd string :"<<str2<<endl;

}
