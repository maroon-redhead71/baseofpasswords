// http://cppstudio.com/post/8299/

#include <iostream>
#include <vector>

using namespace std;

void show_vector( vector<int>&a)
{
    for (vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it)
        cout<<*it<<' ';
}

int main(){
    
    vector<int> s;
    int c;
    cout<<"Enter number"<<endl;
    cin>>c;
    
    
    while (c>=0){
        
        s.push_back(c);
        cout<<"Mass: ";
        show_vector (s);
        cout<<endl;
        cin>>c;
        
    }
    
}