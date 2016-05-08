#include<iostream>

using namespace std;

class VectorDouble
{
	private:
	   double *array;
		int max_count;
      int count; 
   
	public:
	   VectorDouble(){ array = new double[50]; count =0; max_count=50;};
		VectorDouble(int size_initial){ array = new double[size_initial]; max_count = size_initial;};
		VectorDouble(const VectorDouble&);
		~VectorDouble();
		void operator=(const VectorDouble&);
		bool operator==(const VectorDouble&);
		double *re_allocate(double*,int);
		void push_back(double);
		double value_at(int);
		void change_value_at(double,int);
		int capacity(){return max_count;};
		int size(){return count;};
		void reserve(int);
		void resize(int);
};

double * VectorDouble::re_allocate(double* src,int size)
{

	double * temp = new double[size];
	for(int i=0;i<size;i++)
		temp[i] = src[i];
   return temp;
}

VectorDouble::VectorDouble(const VectorDouble& d ): 
                           max_count(d.max_count),count(d.count)
{
	array = re_allocate(d.array,d.count);
}

VectorDouble::~VectorDouble()
{
	delete [] array;
}

void VectorDouble::operator=(const VectorDouble& d)
{
  double *temp = re_allocate(d.array,d.count);
  max_count = d.max_count;
  count = d.count;
  delete [] array;
  array = temp;
}
bool VectorDouble::operator==(const VectorDouble& d)
{
	if(d.count != count)
		return false;
   else
		for (int i=0;i<count;i++)
			if (array[i] != d.array[i])
            return false;
   return true;
}

void VectorDouble::push_back(double d_value)
{
	if(count + 1 > max_count)
	{
		max_count = max_count *2;
		array = re_allocate(array,max_count);
	}
	array[count] = d_value;
	count++;
}

double VectorDouble::value_at(int i)
{
	if (i >= 0 && i < count)
		return array[i];
   else
		return 0.0;
}

void VectorDouble::change_value_at(double d,int i)
{
	if (i>=0 && i < max_count)
		array[i] = d;
}

void VectorDouble::reserve(int r)
{
	if(max_count - count < r)
	{
		max_count += r;
	}

}

void VectorDouble::resize(int size)
{
	double *temp = new double[size];
	for (int i=0;i<count;i++)
	{
		temp[i] = array[i];
	}
	max_count = size;
	delete [] array;
	array = temp;
}

int main()
{
   VectorDouble d;
   VectorDouble d1(20);
   VectorDouble d2(d1);
   VectorDouble d3 = d2;

   d.push_back(10.0);
   d.push_back(11.0);
   d.push_back(12.0);
	for(int i=0;i<3;i++)
		cout << d.value_at(i)<< " ";
   cout << endl;	
	return 0;
}
