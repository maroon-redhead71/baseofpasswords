// http://cppstudio.com/post/1431/

#include <iostream>

using namespace std;

double nalogru (double dRU);
double nalogkz (double dKZ);

int main(){
    
    double dZpru, dZpkz;
    int icount;
    
    cout<<"Enter your country\n 1 - Russia\n 2 - Kazahstan\n";
    cin>>icount;
    
    switch (icount){
        
        case 1:{
            cout<<"Enter your ZP"<<endl;
            cin>>dZpru;
            cout<<"income tax in Russia will be "<<dZpru*0.13<<" RUB"<<endl;
            break;
        }
        
        case 2:{
            cout<<"Enter your ZP"<<endl;
            cin>>dZpkz;
            cout<<"income tax in Kazahstan will be "<< dZpkz * 0.208<<" TNG"<<endl;
            break;
        }
        
        default:{
            cout<<"You must enter your country!";
            break;
        }
    }
    
}