#include <iostream>
#define ll unsigned long long
using namespace std;
bool IsPrime(ll n){
    if(n == 1){
        return false;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    cout << "Enter A Number: ";
    ll n;
    cin >> n;
    if(IsPrime(n)){
        cout << "It's a Prime!" << endl;
        return 0;
    }else{
        cout << "It's not a Prime!";
        cout << endl;
        cout << "The Factors of this number are: "<<endl;
        for(ll i = 2;i<n;i++){
            if(n%i == 0){
                if(IsPrime(i)){
                    cout << i << " ";
                }
            }
        }
    }
    return 0;
}


//void PrimeWork(){
//    int cnt = 1;
//    for(int i = 2;;i++){
//        if(IsPrime(i)){
//            cout <<cnt <<" "<<i<< endl;
//            cnt++;
//        }
//    }
//}


//
//#include <iostream>
//#define ll unsigned long long
//using namespace std;
//ll cnt;
//bool flag = true;
//void IsPrime(ll n){
//    for(int i = 2;i<=n;i++){
//        if(n%i == 0){
//            cnt++;
//            flag = false;
//        }
//    }
//}
//int main(){
//	cout << "Enter A Number: ";
//	ll n;
//	cin >> n;
//	if(n == 1){
//		cout << "0";
//		return 0;
//	}
//	IsPrime(n);
//	if (flag == false){
//		cout << cnt << endl;
//	}
//    return 0;
//}
