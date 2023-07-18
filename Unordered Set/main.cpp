#include<bits/stdc++.h>
using namespace std;
void pr(unordered_set<int> us);

int main() {
 unordered_set<int> us; //it contain all unique value.
 
 //insert value
 us.insert(1);
 us.insert(1);
 us.insert(2);
 us.insert(2);
 us.insert(3);
 // ------ //
 pr(us); //printing here
 
 //begin and end function
 unordered_set<int>:: iterator it; 
 for(it = us.begin(); it != us.end(); it++){
  cout<<*it<<" ";
 }
 cout<<endl;
 
 //count(it's return 1 and 0)
 cout<<1<<" exist or not:"<<us.count(1)<<endl;
 cout<<5<<" exist or not:"<<us.count(5)<<endl;
 
 //find function(find a value from unordered set)
 auto value = us.find(3);
 if(value != us.end()){
  cout<<"value exist!"<<endl;
 }else{
  cout<<"value not exist!"<<endl;
 }
 
 //size(it's count how much value in there)
 cout<<"size: "<<us.size()<<endl;
 
 //clear(it make empty unorderd set)
 // us.clear();
 // cout<<"size after clear: "<<us.size()<<endl;
 
 
  pr(us); //printing here
  us.erase(1); //erase spacific value. 
  
  // Method(1): unordered_set_name.erase(iterator start, iterator end)
  // Method(2): unordered_set_name.erase(iterator position)
  // Method(3): unordered_set_name.erase(element)
  
  //swap(it's swap btween us)
  // void swap(unordered_set &another_unordered_set);
  
  //empty(check us empty or not)
  if(us.empty()) cout<<"it's empty!"<<endl;
  else cout<<"not empty!"<<endl;
  
  // operator "="
  //us2 = us1; // it will set the value;
  
  
  //bucket count
  cout<<"bucket count:"<<us.bucket_count()<<endl;
  
  //bucket
  cout<<"bucket for 3:"<<us.bucket(3)<<endl;
  
  //bucket size
   cout<<"bucket size:"<<us.bucket_size(3)<<endl;
 return 0;
}

void pr(unordered_set<int> us){
  cout<<"--------printing value-----------"<<endl;
  for(auto i : us){
    cout<<i<<" ";
  }
   cout<<endl;
   cout<<"--------end----------"<<endl;
 
}

