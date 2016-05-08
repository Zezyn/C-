int
TemperatureList::add_temperature(double t)
{
	if (size < MAX_LIST_SIZE)
		list[size++] =  t;

   return size;
}

bool TemperatureList::full()
{
	 return (size == MAX_LIST_SIZE);
}

TemperatureList list_data;

list_data.add_temperature(45);
list_data.add_temperature(46);
list_data.add_temperature(47);
