// simple starting pattern question
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j;j<=n;j++){
            cout<<j;
        }
         cout<<endl;
    }
    return 0;
}

//Alphabets pattern
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}
// star question pattern
#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
//*
//**
//*** 
//**** 

