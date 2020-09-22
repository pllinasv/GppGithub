//Recursive Fibonacci, this method is not very effective.
#include<iostream> //We declarate some libraries
using namespace std;

int f(int n){ //We create the function f
    if(n<2) //We look if the number can't be used for the Fibonacci formula
        return n; //If can't be used we return n
    return f(n-1)+f(n-2); //We apply the Fibonacci formula
}

int main() {
    int n; //We declarate the number n
    cout<<"Insert how many numbers of Fibonacci sequence you want to be calculated: "; //We display a text
    cin>>n; //We ask for the user the value of n
    for (int i=0; i<n; ++i){ //It's a loop
        cout<<f(i)<<endl; //We call function f and we print it
    }
    return 0;
}