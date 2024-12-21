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

