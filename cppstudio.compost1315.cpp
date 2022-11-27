// http://cppstudio.com/post/1315/

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

void show_vector( vector<int>&a)
{
    for (vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it)
        cout<<*it<<' ';
}

int main(){
    
    vector <int> complete;
    int n[20];
    srand(time(NULL));
    
    for (int i=0;i<20;++i){
        n[i]=rand()%100;
    }
    
    for(int i=0;i<20;++i){
        cout<<n[i]<<' ';
    }
    
    for (int i=0;i<20;++i){
        
        if (n[i]%2!=0){
            
            complete.push_back(n[i]);
            
        }
        
    }
    cout<<endl;
    show_vector (complete);
    
    
}