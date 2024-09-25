#include <iostream>
#include <vector>
using namespace std;

int partir(vector<int>& a, int low, int high){
int n = a.size();
int x = (low-1);
int pivot = a[high];
for (int i=low;i<high;i++){
    int temp = a[i];
    if(a[i]<=pivot){
            x=x+1;
        swap(a[x],a[i]);
    }
    swap(a[x+1],a[high]);
    int R= x+1;
    return R;
}

}
void quicksort(vector<int>& a, int low, int high){
if(low<high){
    int R = partir(a,low,high);
    quicksort(a,low,R-1);
    quicksort(a,R+1, high);

}
}
int main()
{
    vector<int> a ={4,2,5,7,8,4};
    quicksort(a,0,(a.size()-1));
     for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}
