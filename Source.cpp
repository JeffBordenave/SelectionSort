#include <iostream>
#include <vector>

std::vector<int> SelectionSort(std::vector<int> v);
void DisplayVector(std::vector<int> v);

int main()
{
	std::vector<int> a{ 7,5,4,9,2,12,1 };

	DisplayVector(a);
	a = SelectionSort(a);
	DisplayVector(a);

	return 0;
}

std::vector<int> SelectionSort(std::vector<int> v)
{
	bool isListSorted = false;
	int currentIndexCheck = 0;
	int min = 0;
	int temp = 0;

	while (!isListSorted)
	{
		min = currentIndexCheck;

		//we go through the list starting with the index after the one that has been swapped just before
		for (int i = currentIndexCheck; i < v.size(); i++)
		{
			//we use the min to store de index of the smallest int we have found
			if (v[i] < v[min]) 
				min = i;
		}

		//we swap the two values
		temp = v[min];
		v[min] = v[currentIndexCheck];
		v[currentIndexCheck] = temp;

		//we increment the currentIndexCheck and if it is equal or greater than the last index of the list we return the list
		if (currentIndexCheck++ >= v.size()-1) return v;
	}
}

void DisplayVector(std::vector<int> v)
{
	int size = v.size() - 1;

	for (int i = 0; i < size; i++)
	{
		std::cout << v[i] << ", ";
	}

	std::cout << v[size] << std::endl;
}
