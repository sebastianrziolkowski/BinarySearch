#include <iostream>

using namespace std;

int* createTable(int tablesize)
{
    int *tab = new int[tablesize];

    for(int i=0;i<tablesize;i++)
    {
        tab
    }

    return tab;
}

bool binarySearch(int *tab, int numberToSearch, int tabSize)
{
    	int center = NULL;
    	int l=0;
    	int r=tabSize-1;

	while(l<=r)
	{
		center = (l + r)/2;

		if(tab[center] == numberToSearch)
            delete tab;
			return true;

		if(tab[center] > numberToSearch)
			r = center - 1;
		else
			l = center + 1;
    }
    delete tab;
	return false;
}


int main()
{
    int n=NULL;
    int number=NULL;
    cout<<"Size of table: ";
    cin>>n;
    cout<<endl<<"Number to search: ";
    cin>>number;

    cout<<endl<<binarySearch(createTable(n),10,n);

    return 0;
}
