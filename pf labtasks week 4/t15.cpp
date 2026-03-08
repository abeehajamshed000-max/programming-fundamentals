#include <iostream>
using namespace std;
int main(){

    cout<<"Enter any character in lower case:";
    char letter;
    cin >>letter;
    
    if(letter == 'a','e','i','o','u'){
        cout<<"It is a vowel"<<endl;
    }
    else if( letter != 'a','e','i','o','u'){

        cout<<"Program ends"<<endl;
    }

    else if (letter == 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'){
        cout<<"It is a constant"<<endl;

    }
    else if(letter == 1,2,3,4,5,6,7,8,9){
        cout<<"it is a number"<<endl;
    }
}