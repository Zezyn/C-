#include<iostream>
#include<string>

using namespace std;

template<class T>
void swap_values(T& variable1, T& variable2)
{
	      T temp;

			temp = variable1;
			variable1 = variable2;
		   variable2 = temp;
}

template<class BaseType>
int index_of_smallest(const BaseType a[], int start_index, int number_used)
{
    BaseType min = a[start_index];
    int index_of_min = start_index;

    for (int index = start_index + 1; index < number_used; index++)
        if (a[index] < min)
        {
            min = a[index];
            index_of_min = index;
            //min is the smallest of a[start_index] through a[index]
        }

    return index_of_min;
}

template<class BaseType>
void sort(BaseType a[], int number_used)
{
int index_of_next_smallest;
for(int index = 0; index < number_used - 1; index++)
   {//Place the correct value in a[index]:
         index_of_next_smallest =
              index_of_smallest(a, index, number_used);
         cout << "index_of_next_smallest:" << index_of_next_smallest << " " << endl;
         swap_values(a[index], a[index_of_next_smallest]);

      //a[0] <= a[1] <=...<= a[index] are the smallest of the original array
      //elements. The rest of the elements are in the remaining positions.
   }
}


int main()
{

   int ar1[] = {3,8,2,9,7,5,6,8,1};
   double ar2[] = {3.0,8.0,2.0,9.0,7.0,5.0,6.0,8.0,1.0};
	string ar3[] = {"oranges","bananas","apples","pineapples"};

	sort(ar1,9);
    cout << "-----------" << endl;
	sort(ar2,9);
    cout << "-----------" << endl;
	sort(ar3,4);

//   print_array(ar1,9);
//   print_array(ar2,9);
//   print_array(ar3,4);

	return 0;
}
