#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n;

    // int arr1[5]
    
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    int* arr = new int[n];
    
    cout << "Imputasi data: " << endl; 
    for(int i = 0; i < n; i++){
        cout << "Data ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << "Output data ke-" << i+1 << ": " << arr[i] << endl;;
    }

    delete[] arr;
    return 0;
}