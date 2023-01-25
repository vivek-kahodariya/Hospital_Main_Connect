#include<iostream>
using namespace std;

int fact(int n){
    int ans;
    ans = 1;
    for(int i=1;i<n+1;i++){
        ans = i*ans;
    }
    cout<<ans;
} 
int main(){
    int a;
    cout<< "Enter Number: "<<endl;
    cin>>a;
    fact(a);    
}