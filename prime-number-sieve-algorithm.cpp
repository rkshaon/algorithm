#include<iostream>
#include<cstring>
#include<vector>
#define M 1234567
using namespace std;

int prime[M+1]={0};
vector<int>primeNumber;

void primeGen(){
    for(int i=2; i<M; i++){
        if(prime[i]==0){
            prime[i]=-1;
            primeNumber.push_back(i);
            for(int j=i+i; j<M; j=i+j){
                prime[j]=j;
            }
        }
    }
}

int main(){
    primeGen();
    //for(int i=0; i<10; i++) cout << primeNumber[i] << endl;
    return 0;
}
