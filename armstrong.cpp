#include<iostream>
int main(){
    int x,a,b,c,d=1,e=0,f;
    std::cin>>x;
    f=x;
    c=x;
    while(x!=0){
        a=x%10;
        x=x/10;
        c=f;
        d=1;
        while(c!=0){
            
            c=c/10;
d=d*a;
        }
e=e+d;
    }
    if(e==f){
        std::cout<<"armstrong";

    }
    else{
        std::cout<<"not";
    }
}
