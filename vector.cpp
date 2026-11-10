#include<bits/stdc++.h>

using namespace std;

#define MAX_LENGTH 1024

class MyVector{
    public:
    int size;
    int capacity;
    int* arr;

    MyVector(){
        size = 0;
        capacity = 1;
        arr = (int*)malloc(capacity * sizeof(int));
    }

    void add(int val){
        if (size == MAX_LENGTH){
            cout << "MAX_LENGTH reached. Cannot add further.\n";
            return;
        }

        if (size == capacity){
            int newCapacity = capacity * 2;
            
            int* temp = (int*)realloc(arr, newCapacity * sizeof(int));

            arr = temp;
            capacity = newCapacity;
        }

        arr[size] = val;
        size++;
    }

    void del(){
        if (size == 0){
            cout << "Empty array.\nNothing to delete\n";
            return;
        }

        cout << arr[size-1] << endl;

        size--;
    }

    void getEleAtInd(int ind){
        if (ind < 0 || ind >= size){
            cout << "Invalid index\n.Try again\n";
            return;
        }

        cout << arr[ind] << endl;
        return;
    }

    int getSize(){
        return size;
    }

    ~MyVector(){
        free(arr);
    }

};

int main(){
    
    MyVector* v1 = new MyVector();

    while(true){
        cout << "Menu: \n";
        cout << "1. Add an element\n";
        cout << "2. Delete last element\n";
        cout << "3. Get element at given index\n";
        cout << "4.Exit\n";

        int choice;
        cin >> choice;

        switch(choice){
            case 1:
                int ele;
                cout << "Enter element: \n";
                cin >> ele;

                v1->add(ele);
                break;
            case 2:

                v1->del();
                break;
            case 3:
                cout << "Enter index: \n";
                int ind;
                cin >> ind;

                v1-> getEleAtInd(ind);
                break;    
            case 4:
                cout << "Exiting...\n";
                return 0;    
        }
    }

    delete v1;
}