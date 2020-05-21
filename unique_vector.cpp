// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
	long int N = 0, count = 0, temp = -1;
	bool present = false;
	//int* stack = NULL;
	//cout << "Enter the number of terms :";
	//N = size(A);
	for (auto vec = A.begin(); vec != A.end(); ++vec)
	{
	    ++N;
	}
    //cout << N;
    for(int i =0;i<N;i++)
    {
      //  cout<<A[i]<<endl;
    }
	int* stack = (int*)malloc(sizeof(int) * N);
	//cout << "Enter the array : ";
	//for (int i = 1; i <= N; i++)
	//{
	//	cin >> A[i];
	//}
	//stack = A;
	//cout << "The value of the first value at stack is " << stack[temp];
	for (int k = 0;k < N; k++)
	{
	
		while (temp >= 0)
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
	//cout << "The number of unique entities is : " << count;
	return count;
}
