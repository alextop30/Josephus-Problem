#include "definitions.h"


int main()
{
	vector <string> vect;																	//vector to hold data

	typedef vector <string> ::iterator vsi;													//typedef string itterator

																							//input variabbles

	unsigned int n;																			//number of soldiers
	unsigned int m;																			//count number for removal
	unsigned int k;																			//times to print the list

	unsigned int cnt = 0;

	cout << "Number of people? ";															//prompt for number of soldiers									
	cin >> n;																				//store input for number of soldiers
	cout << "Index for elimination? ";														//prompt for count
	cin >> m;																				//gather count from stdin
	cout << "Index for printing? ";															//prompt for print times
	cin >> k;																				//gather print from stdin

	init_vals(vect, n, m, k);																//fill vector with values

	print_vector(vect, cnt);																//print vector initial values

	vsi loop = vect.begin();																//loop itterator
	vsi begin = vect.begin();																//beginning iterator
	vsi end = vect.end();																	//end itterator

	unsigned int i = 1;																		//starting position for iner loop

	
	while (vect.size() > 1)																	//while loop runs until vector size is 1
	{																						
		while (i < m)																		//inner loop runs M times
		{
			if (loop == vect.end())															//when loop itearator reaches the end of
			{																				//the container is set to the beginning
				loop = vect.begin();														//to continue iterating
			}

			loop = loop + 1;																//increment the loop 1 space each time
			i++;																			//increment the number of times counted to M

		}
		

		if (loop == vect.end())																//check if the iterator is past the end of the
		{																					//containner and reset it back to the beginning
			loop = vect.begin();
		}
		
			loop = vect.erase(loop);														//delete the calue loop is currently pointing to
																							//and set it to the next position in the container

			i = 1;																			//reset counter for inner while loop back to 1
			cnt++;
			
			if ((cnt % k) == 0)
			{
				print_vector(vect, cnt);
			}

	}

	print_vector(vect, cnt);
	
	system("Pause");

	return 0;
}

void init_vals(vector < string >& v, unsigned int & N, unsigned int & M, unsigned int& K)
{
	typedef vector <string> ::iterator vsi;												//typedef string itterator

	v.resize(N);																		//resize the vector to the input value

	vsi loop = v.begin();																//loop itterator
	vsi begin = v.begin();																//beginning iterator
	vsi end = v.end();																	//end itterator
	
	for (; loop != v.end(); loop++)													//fill up the vector with values
	{
		generate(begin, end, SEQ(N));													//generate values off function object
		
	}

}

void print_vector(const vector < string >& v, const unsigned int & cnt)
{
	cout << endl;

	typedef vector <string> ::const_iterator vsi;
	if (cnt == 0)
	{
		cout << "Initial group of people" << endl;

	}
	else
	{
		cout << "After eliminating " << cnt << "th person" << endl;
	}
	cout << "-----------------------------" << endl;

	int count = 0;

	vsi loop = v.cbegin();

	for (; loop != v.cend(); ++loop)
	{
		cout << *loop << " ";

		count++;

		if ((count % NO_ITEMS) == 0)
			cout << endl;

	}
	cout << endl;
	cout << endl;
}
