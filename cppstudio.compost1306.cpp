// http://cppstudio.com/post/1306/

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void show_vector( vector<int>&a)
{
    for (vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it)
        cout<<*it<<' ';
}

int main() {
    
    int mass[10][10];
    srand(time(NULL));
    
    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            
            mass[i][j]=rand()%100;
            
        }
    }
    
    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            
            cout<<mass[i][j]<<' ';
            
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    vector<int> mass1;
    vector<int> mass2;
    
    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            
            if (i==j){
                
                mass1.push_back(mass[i][j]);
                
            }
            
        }
    }
    
     for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            
            if (i+j==9){
                
                mass2.push_back(mass[i][j]);
                
            }
            
        }
    }
    
    show_vector(mass1);
    cout<<endl;
    show_vector(mass2);
}