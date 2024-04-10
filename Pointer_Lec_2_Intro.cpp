#include<iostream>
using namespace std;

int main(){
   
    char s=10;
    char *p =&s;
    char **q=&p;
    cout<<p<<endl;
    cout <<q;
}