#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no upto which you want to print the sum:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<sum;

    return 0;

}