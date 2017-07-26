#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int data[n];
    for(int i=0; i<n; i++){
        cin >> data[i];
    }
    // count longest sequence
    int lis[n]={1};
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(data[j]<data[i]){
                if(lis[i]<lis[j]+1){
                    lis[i]=lis[j]+1;
                }
            }
        }
    }
    // printing the longest increasing subsequence size/length
    cout << *max_element(lis, lis+n) << endl;
    return 0;
}
