#include <iostream>
#include <vector>
using namespace std;

vector <double> arr;

void Fill_arr(vector<double> &arr,int len){
    double n;
    while(arr.size()<len && cin >> n){
        arr.push_back(n);
    }

    cout << "size of array: "<< arr.size() <<endl;


}

void show_arr(vector<double>arr){
    int n = arr.size();
    cout << "show:" <<endl;
    for(int i=0;i<n;i++){
        cout << arr[i]<< endl;;
    }

}


void Reverse_arr(vector<double>arr){
    int n = arr.size();
    cout << "reversed" << endl;
    for(int i=n-1;i>=0;i--){

        cout << arr[i]<<endl;;
    }

}


int main(){


    vector<double> arr0;
    Fill_arr(arr0,5);
    show_arr(arr0);
    Reverse_arr(arr0);

}