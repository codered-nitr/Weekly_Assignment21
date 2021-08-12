#include<bits/stdc++.h>
using namespace std; 
int main(){
int n;
cin>>n;
int nums[n] ;

for(int i=0;i<n;i++){
    cin>>nums[i] ;
}
int target ;
cin>>target ;
int left =0;
int right=n-1 ;
while(left<right){
    int midpoint =left + (right-left)/2 ;
    if(nums[midpoint]>nums[right]){
        left=midpoint + 1 ;
    }else{
        right=midpoint ;
    }
}

int start =left ;
left=0 ;
right=n-1 ;

if(target>=nums[start] && target<=nums[right]){
    left=start ;
}else{
    right=start ;
}

while(left<=right){
    int midpoint = left + (right-left)/2 ;
    if(nums[midpoint]==target){
        cout<< midpoint ;
    }else if(nums[midpoint]<target){
        left = midpoint + 1 ;
    }else {
        right = midpoint -1 ;
    }  
}

cout<< "-1" <<"\n" ;



}
