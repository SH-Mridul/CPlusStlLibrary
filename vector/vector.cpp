#include <bits/stdc++.h>
using namespace std;

//visit vector function
void visit(vector<int> v);

int main()
{
	//vector behave like an array but it's unlimited.
	vector<int> v; //declear a vector<data_type> vector_name.
	
	//how to contain data in vector.
	v.push_back(1); //v[0]
	v.push_back(2); //v[1]
	v.push_back(3); //v[2]
	v.push_back(4); //v[3]
	v.push_back(5); //v[4]
	v.push_back(6); //v[5]
	v.push_back(7); //v[6]
	v.push_back(8); //v[7]
	v.push_back(9); //v[8]
	v.push_back(10); //v[9]
	
	//print or get vector value.
	cout<<v[0]<<endl; //it's like array accessing.
	cout<<v.at(3)<<endl; // access using functio.
	/*here if we use v[10](it out of range),it not
	 show any error,but v.at(10) it will show out of range.*/
	
	//size of vector
	cout<<v.size()<<endl;
	
	//get first value of a vector.
	cout<<v.front()<<endl;
	
	//get the last value of a vector.
	cout<<v.back()<<endl;
	
	//vector empty or not
	cout<<v.empty()<<endl;//0 means not empty,1 means empty;
	
	//delete last value from vector.
	v.pop_back();
	
	//delete a spacific value from vector,exp: 2nd element.
	v.erase(v.begin()+1);
	visit(v);
	
	// delete first 3 element from vector
	v.erase(v.begin()+0,v.begin()+2);
	visit(v);
	
	//insert data into spacific address
	v.insert(v.begin(),1); 
	visit(v);
	v.insert(v.begin()+1,99); 
	visit(v);
	
	//insert data into spacific address multiple time
	v.insert(v.begin(),3,100); //here 100 adding 3 times.
	visit(v);
	
	//swap 2 values.
	swap(v[2],v[3]);
	visit(v);
	
	
	//sort value
	sort(v.begin(),v.begin()+3); //Asc order
	visit(v);
	sort(v.begin(),v.end());
	visit(v);
	
	//dsc order
	reverse(v.begin(),v.begin()+5);
	visit(v);
	reverse(v.begin(),v.end());
	visit(v);
	
	
	//iterator
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++){
		cout<<*it<<" ";
	}
	
	cout<<endl;
	
	
	//clear data of a vector.
	v.clear(); 
	
	
	
	
	return 0;
}


void visit(vector<int> v)
{
	cout<<"---visiting---"<<endl;
	for(int i = 0; i<v.size(); i++)
	{
		cout<<v.at(i)<<" ";
	}
	
	cout<<endl;
	cout<<"---visited---"<<endl;
}