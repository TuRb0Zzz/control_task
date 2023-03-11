#include <iostream>
#include <fstream>
using namespace std;

int countsymbol(int number){
    int counter=0;
    while(number!=0){
        counter+=1;
        number/=10;
    }
    return counter;
}

bool polydrome(int number){
    int polydrom=0;
    int num=number;
    while(num!=0){
        polydrom=polydrom*10+num%10;
        num/=10;
    }
    if (number!=polydrom){
        return false;
    }
    return true;
}

int main(){
    FILE* f;
    f=fopen("polydrom.txt","w");
    int a;
    cin>>a;
    char buf[100];
    if (polydrome(a)){

    }
    fflush(f);
    fclose(f);
    return 0;
}
