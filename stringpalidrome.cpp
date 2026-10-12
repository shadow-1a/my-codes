#include<iostream> 
std::string s;
int main(){
std::cin >> s; 
int i=0,k,r=0;
if(s.size()%2==0){
    k=s.size()/2-1;
}
else{
    k=(s.size()-1)/2;
}
while(i<=k){
    if(
    s[i]=s[s.size()-1-i]){
        r++;
    }

}
if(r=k){
    std::cout<<"palindrome";
}
else{
    std::cout<<"not";
}
}
