#include <iostream>
#include<string>
using namespace std;

class Bird{
    string name;
    string color;
    string size;
    string sound;
    public:
        Bird(string _name,string _color,string _size,string _sound){
            _name=name;
            _color=color;
            _size=size;
            _sound=sound;
        }
        void lifeTime(){
            if(size=="small"){
                cout<<"3 years";
            }
            else if(size=="medium"){
                cout<<"10 years";
            }
            else{
                cout<<"20 years";
            }
        }
};











int main(){

}0