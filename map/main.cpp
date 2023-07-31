#include<bits/stdc++.h>
using namespace std;

int main(){
	//declare map;
	map<int,int> mp; //first one key,second one value;
	
	//inserting value
	mp.insert({1,20});
	mp.insert({2,30});
	mp.insert({3,40});
	mp.insert({4,50});
	mp.insert({5,60});
	mp.insert({6,60});
	mp[1] += 100; // like array
	
	//printing value
	cout<<mp[1]<<endl; // printing like array value 
	cout<<mp.at(2)<<endl; //printing using at() method.
	
	//printing all value
	for(auto it : mp){
		cout<<"key:"<<it.first; //key printing
		cout<<" value:"<<it.second<<endl; //value printing
	}
	
	cout<<"----------------"<<endl;
	
	//printing value using itarator
	map<int,int>::iterator it;
	
	for(it = mp.begin(); it != mp.end(); it++){
		cout<<"key:"<<it->first; //key printing
		cout<<" value:"<<it->second<<endl; //value printing
	}
	
	cout<<"----------------"<<endl;
	// mp.clear(); // use for clear all value 
	
	//checking map empty or not
	if(mp.empty()){
	 	cout<<"it's empty!"<<endl;
	}else{
		cout<<"it's not!"<<endl;
	}
	
	cout<<"----------------"<<endl;
	//remove a value using erase(key)
	mp.erase(1); // here removeing key = 1 value;
	
	//printing all value
	for(auto it : mp){
		cout<<"key:"<<it.first; //key printing
		cout<<" value:"<<it.second<<endl; //value printing
	}
	
	cout<<"----------------"<<endl;
	cout<<mp.count(5)<<endl; //key exist or not,here return 0/1;
	cout<<"----------------"<<endl;
	
	
	//find a key from map
	cout<<"----------------"<<endl;
	
	auto find = mp.find(6);
	
	if(find != mp.end()){
		cout<<"found!"<<endl;
	}else{
		cout<<"not found!"<<endl;
	}
	
	
	return 0;
}