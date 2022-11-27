// http://cppstudio.com/post/1443/

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    float mass[10][10];
    int d;
    cin>>d;
    
    for(int i=0;i<10;++i){
        for (int j=0;j<10;j++){
            mass[i][j]=rand()%d;
        }
    }
    
    for(int i=0;i<10;++i){
        for (int j=0;j<10;j++){
            cout<<mass[i][j]<<' ';
        }
        cout<<endl;
    }
    
    int is,min=d,temp;
    
    for(int i=0;i<10;++i){
        for (int j=0;j<10;j++){
           if(mass[i][j]<min){
               min=mass[i][j];
               is=i;
           } 
        }
    }
    
    cout<<endl<<min<<' '<<is<<endl;
    
    for (int j=0;j<10;++j){
        temp=mass[0][j];
        mass[0][j]=mass[is][j];
        mass[is][j]=temp;
    }
    
    for(int i=0;i<10;++i){
        for (int j=0;j<10;j++){
            cout<<mass[i][j]<<' ';
        }
        cout<<endl;
    }
    
}