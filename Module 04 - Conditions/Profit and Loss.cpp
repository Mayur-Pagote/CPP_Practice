#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int costprice, sellingprice;
	cout<<"Enter Cost Price: ";
	cin>>costprice;
	cout<<endl;
	cout<<"Enter Selling Price: ";
	cin>>sellingprice;
	
	if (sellingprice > costprice){
	    cout<<"Profit of: "<<sellingprice-costprice;
	}
	else if (sellingprice == costprice){
	    cout<<"No profit or loss";
	}
	else {
	    cout<<"Loss of: "<<costprice-sellingprice;
	}

}
