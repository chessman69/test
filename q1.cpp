#include <iostream>
using namespace std;

int main(){
    double num=0;
    double sum=0;
    int count=0;
    cout<<"enter the series of number you to find Enter any string if you want to end";
    while(cin>>num){
        if(num>=30 && num<=400){
            sum+=num;
        count++;
        }
        else{
            break;
        }

    }
    if(count>0){
        double average=sum/count;
        cout<<"the average of the number is :"<<average;
    }
    else{
        cout<<"you entered out of range";
    }
    
    
}
