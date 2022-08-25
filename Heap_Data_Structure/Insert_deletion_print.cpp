#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class heap{
  public:
    int size ;
    int arr[100];
    heap(){
    size=0;
    arr[0]=-1;
    }

    void insert(int val){
       size=size+1;
       int index =size;
       arr[index]=val;
       while(index >1){
           int parent=index/2;
           if(arr[index]>arr[parent]){
              swap(arr[index],arr[parent]);
              index=parent;
           }else{
            return;
           }
       }
   }

    void print(){
      for(int i=1;i<=size;i++){
         cout<<arr[i]<<" ";
      }
    }

    // void delete_h(){
    //     int index=1;
    //     swap(arr[index],arr[size]);
    //     size--;
    //     while(index<=size){
    //         int child_left=2*index;
    //         int child_right=2*index+1;
    //         if(arr[index]<arr[child_left]){
    //            swap(arr[index],arr[child_left]);
    //            index=child_left;
    //         }
    //         else if(arr[index]<arr[child_right]){
    //            swap(arr[index],arr[child_right]);
    //            index=child_right;
    //         }
    //     }
    // }
};
int main(){
    heap hp;
    hp.insert(50);
    hp.insert(49);
    hp.insert(55);
    hp.insert(52);
    // hp.delete_h();
    hp.print();


    return 0;
}