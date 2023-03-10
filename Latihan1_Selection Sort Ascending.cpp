#include<iostream>
using namespace std;
 
void selectionSort_menurun(int data[], int n){
 
    int temp, min;
 
    for(int i = 0; i < n-1; i++){
 
        min = i;
 
        for(int j = i + 1; j < n; j++){
 
            if(data[j] > data[min]){
 
                min = j;
            }
        }
 
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}
 
int main(){
 
    int data[10], n;
 
    cout << "\t Mengurutkan Data dengan Selection Sort Ascending \n\n";
 
    cout << " Masukkan Banyak Data : ";
    cin >> n;
   
    cout << endl;
 
    for(int i = 0; i < n; i++){
 
        cout << " Data ke " << i + 1 << " : ";
        cin >> data[i];
    }
 
    cout << "\n Data Sebelum Diurutkan : ";
    for(int i = 0; i < n; i++){
 
        cout << data[i] << " ";
    }
 
    selectionSort_menurun(data, n);
 
 
    cout << "\n Data Setelah Diurutkan : ";
    for(int i = 0; i < n; i++){
 
        cout << data[i] << " ";
    }
}


