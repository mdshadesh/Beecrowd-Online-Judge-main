#include <cstdio>
#include <algorithm>
#define MAX 1010

using namespace std;

int t[MAX];
int b[MAX];
pair<int,int> coord[MAX];

int main()
{
	int n , x , y ;
	
	while(scanf("%d",&n) == 1)
	{
		for(int i = 0 ; i < n ; i ++)
		{
			scanf("%d %d",&x,&y);
			coord[i] = make_pair(x,y);
		}
		sort(coord,coord+n);	
		
		t[0] = 1;
		b[0] = 1;
		
		for(int i = 1 ; i < n ; i ++)
		{
			int maxtop = 1;
			int maxbot = 1;
			for(int j = 0 ;  j < i ; j++)
			{
				if (coord[i].first > coord[j].first && coord[i].second == coord[j].second + 2)
					maxtop = max(maxtop , b[j]+1);
				if (coord[i].first > coord[j].first && coord[i].second == coord[j].second - 2)
					maxbot = max(maxbot , t[j]+1);
			}
			t[i] = maxtop;
			b[i] = maxbot;
			
		}
		
		int maximo = 1 ;
		for(int i = 0 ; i < n ; i ++)
		{
			maximo = max(maximo , t[i]);
			maximo = max(maximo , b[i]);
		}		
		printf("%d\n",maximo);
		
	}
	
	return 0;
}