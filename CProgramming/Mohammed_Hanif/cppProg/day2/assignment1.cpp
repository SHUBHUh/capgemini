#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int res=0;
	int dig=1;
	while (n!=0){
		if(n%4 == 1){
			res = res + (dig*2);
			
		}
		else if(n%4 == 2){
		        res = res + (dig*3);
	               
		}
	        else if(n%4 == 3){
			res = res + (dig*5);
			
		}
		else if(n%4 == 0){
			res = res + (dig*7);
			
		
		}
		dig = dig * 10;
		if(n%4 == 0){
		        n = (n/4)-1;
		}
		else{
			n = n/4;
		}    

	}

       cout << res;


	return 0;
}
