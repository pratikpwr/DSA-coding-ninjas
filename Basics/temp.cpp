#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int reductionCost(vector<int> num) {
    if(num.empty()){
        return 0;
    }
    if(num.size() == 1){
        return num[0];
    }
    
    int sum =  num[0] + num[1];
    num.erase(num.begin()+0);
    num.erase(num.begin()+0);
    // for(int i= 0; i< 2;i++){
    //     num[i] = num[i+2]; 
    // }
    num.push_back(sum);
    
    int smallOut = reductionCost(num);

    

    return smallOut + sum;
}

int main(){

    vector<int> num = {1,2,3};
    cout<< reductionCost(num);

    return 0 ;

}