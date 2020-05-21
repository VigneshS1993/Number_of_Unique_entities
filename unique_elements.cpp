#include<iostream>
using namespace std;
int main()
{
	int N = 0, count = 0, temp = 0;
	bool present = false;
	int A[10000];
	//int* stack = NULL;
	cout << "Enter the number of terms :";
	cin >> N;
	int* stack = (int*)malloc(sizeof(int) * N);
	cout << "Enter the array : ";
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}
	//stack = A;
	//cout << "The value of the first value at stack is " << stack[temp];
	for (int k = 1;k <= N; k++)
	{
	
		while (temp >= 1)
		{
			//cout << "While getting executed "<<endl;
			if (stack[temp] == A[k])
				{
					present = true;
					break;
					//cout << "If executed  " << endl;
				}
			else
			{
				present = false;
				//cout << "Else getting executed " << endl;
			}
			--temp;
		}
		if (present == false)
		{
			stack[++count] = A[k];
			//cout << "Stack initialised to : " << A[k] << endl;
		}
		temp = count;
		//cout << "At the end of "<<k<<"th cycle temp is :" << temp<<endl;
	}
	cout << "The number of unique entities is : " << count;
	return 0;
}
