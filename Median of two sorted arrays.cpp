#include<bits\stdc++.h>
using namespace std;
double mergeAndSort(vector<int> &num1, vector<int> &num2){
    vector<int> margedArr;
    int i=0, j=0;
    while(i<num1.size() && j<num2.size()){
        if(num1[i]<=num2[j]){
            margedArr.push_back(num1[i]);
            i++;
        }
        else{
            margedArr.push_back(num2[j]);
            j++;
        }
    }

    while(i<num1.size()){
        margedArr.push_back(num1[i]);
        i++;
    }

     while(j<num2.size()){
        margedArr.push_back(num2[j]);
        j++;
    }

    int n=margedArr.size();
    if(n%2==1){
        return margedArr[n/2];
    }
    else{
        return (margedArr[n/2-1]+margedArr[n/2])/2.0;
    }
}

int main(){
    vector<int> num1={1,3,5,7};
    vector<int> num2={2,4,6,8};
    
    double median=mergeAndSort(num1,num2);
    cout<<median;

    return 0;
}
