
#include <iostream>
using namespace std;

class heap{
  public:
    int arr[100];
    int size;

    heap(){
    arr[0] = -1;
    size = 0;
    }

    void insert (int val){
         size = size + 1;
         int index = size;
         arr[index] = val;

         while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }else{
             return;
            }
         }
    }



    void deleteFromHeap(){
    if(size == 0){
        cout<<"Nothing to Delete"<<endl;
        return;
    }

    arr[1] = arr[size];
    size--;


    int i = 1;
    while(i<size){
        int leftIndex = 2*i;
        int rightIndex = 2*i + 1;

        if(leftIndex < size && arr[i] < arr[leftIndex]){
            swap(arr[i],arr[leftIndex]);
            i = leftIndex;
        }

        else if(rightIndex < size && arr[i] < arr[rightIndex]){
            swap(arr[i],arr[rightIndex]);
            i = rightIndex;
        }
        else{
            return;
        }
    }
    }

    void print(){
    for(int i = 0; i<= size; i++){
     cout<< arr[i]<<" ";
    }cout<<endl;
    }
};

void heaify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2 * i +1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }

        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heaify(arr,n,largest);
        }
    }
int main(){

int arr[6] = {-1,54,53,55,52, 50};
int n = 5;
for(int i = n/2; i>0; i--){
    heaify(arr,n,i);
};

for(int i = 0; i<=n ; i++){
    cout<< arr[i] << " ";
};
return 0;
}
