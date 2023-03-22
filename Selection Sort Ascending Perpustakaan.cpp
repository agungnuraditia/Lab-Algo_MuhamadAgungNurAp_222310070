#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
 int i, j, minIndex, temp;
 for (i = 0; i < n-1; i++) {
 minIndex = i;
 for (j = i+1; j < n; j++) {
 if (arr[j] < arr[minIndex]) {
 minIndex = j;
 }
 }
 temp = arr[minIndex];
 arr[minIndex] = arr[i];
 arr[i] = temp;
 cout << "Iterasi ke-" << i+1 << ": ";
 for (int k = 0; k < n; k++) {
 cout << arr[k] << " ";
 }
 cout << endl;
 }
}
int main() {
 int n = 3, i;
 cout << "1. Matematika: "<<endl;
 cout << "2. Bahasa Indonesia: "<<endl;
 cout << "3. Lab Desain: "<<endl;
 cout << endl;
 cout << "Masukan jumlah buku: ";
 cin >> n;
 int arr[n];
 
 for (i = 0; i < n; i++) {
 	cout << "No Buku yang ingin diurutkan: ";
 cin >> arr[i];
 }
 cout << "Urutan Buku sebelum sorting: ";
 for (i = 0; i < n; i++) {
 cout << arr[i] << " ";
 }
 cout << endl;
 selectionSort(arr, n);
 cout << "Urutan Buku setelah sorting: ";
 for (i = 0; i < n; i++) {
 cout << arr[i] <<"."<<" ";
 if (i == 1){
 	cout << "Matematika: "<<endl;
 }
 else if(i==2){
 	cout << "Bahasa Indonesia: "<<endl;
 }
 else {
 	cout << "Lab Desain"<<endl;
 }
 }
 return 0;
}

