#include<vector>
using namespace std;
class AmebaDiv2
{
	public:
		int simulate(vector<int> X,int A)
		{
			for(int i=0;i<X.max_size();i++)
			{
				if(X[i]==A)
					A*=2;
			}
			return A;
		}
};
