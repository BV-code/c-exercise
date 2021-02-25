#include "std_lib_facilities.h"

//write a program that reads and stores a series of integers and then computes the sum
//of the first N integers. First ask for N, then read the values into a vector, then
//calculate the sum of the first N values.


int main()
{
	vector<int> v;
	int n;	// number of times to iterate
	int i;	// just a variable so I can loop a bunch of integers into vector v
	int sum; // used for storing the total sum of the vector
	
	cout << "Please enter the number of values you want to sum:\n";
	cin >> n;
	
	
	cout << "Please enter some integers (press '|' to stop):\n";
	while(cin >> i)
	v.push_back(i);
	
	// error handling if the user asks for a bigger sum size then the vector size
	if(n > v.size())
		error ("The vector is smaller than the number of values to sum.\n");
	
	// calculates the total sum of all elements in the vector
	for (int i = 0; i < n; ++i)
		{
			sum += v[i];
		
		}	
	//error handling if the sum is too large to be displayed as an int
	if ( sum >= 1073741824)
		error("Sum exceeds 1073741824, it's too large\n");
	
	// Prints the number of values in the vector, each individual value in the vector
	// and the total sum
	cout << "The sum of the first " << n << " numbers ( ";
	
	for (int i = 0; i < n; ++i)
		{
			cout << v[i] << " ";
		
		}	

	cout << ") is " << sum << '\n';

}
