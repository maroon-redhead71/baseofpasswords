// http://cppstudio.com/post/1325/

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

void show_vector( vector<int>&a)
{
    for (vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it)
        cout<<*it<<endl;
}

int main(){
    
    int matrix[3][4];
    vector<int> zilla;
    srand(time(NULL));
    
    for (int i=0;i<3;++i){
        for (int j=0;j<4;++j){
            cin>>matrix[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    
     for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            if (matrix[i][j]<0){
                zilla.push_back(matrix[i][j]);
            }
        }
    }
    cout<<endl;
    
    cout<<"Unsorted irr numbers in matrix"<<endl;
    show_vector(zilla);
     sort (zilla.begin(), zilla.end());
    cout<<endl<<"Sorted irr numbers in matrix"<<endl;
    show_vector(zilla);
}