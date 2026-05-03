#include<iostream>
using namespace std;
    int main(){
        const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] ={
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16,  14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
        return 0;
    }

    
    void cars(int cars [0][5], int rowsize){
        for(int row=0; row<5; row++){
        cout<<cars[rowsize][1]<<"\t";
    }
    cout<<endl;
}

    

    
