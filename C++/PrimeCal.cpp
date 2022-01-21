//#include <cplus.h>
#include <iostream>
using namespace std;
bool IsPrime(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void PrimeWork(){
    int cnt = 1;
    for(int i = 2;;i++){
        if(IsPrime(i)){
            cout <<cnt <<" "<<i<< endl;
            cnt++;
        }
    }
}
int main(){
    PrimeWork();
    return 0;
}

