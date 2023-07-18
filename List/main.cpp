#include<bits/stdc++.h>
using namespace std;

int main() {
	int p;
	cin>>p;
	
	if(p == 1){
		cout<<-1<<endl;
		return 0;
	}
	
	for(int i = 1; i<=p; i++)
	{
		int result = 0;
		
		if(i%2 != 0)
		{
			result = i+1;
		}else{
			result = i-1;
		}
		
		if(result != i &&  result <= p)
			cout<<result<<endl;
	}
	
    return 0;
}