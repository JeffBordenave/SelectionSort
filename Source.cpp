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

		for (int i = currentIndexCheck; i < v.size(); i++)
		{
			if (v[i] < v[min]) 
				min = i;
		}

		temp = v[min];
		v[min] = v[currentIndexCheck];
		v[currentIndexCheck] = temp;

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
