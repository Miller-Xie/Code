#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

pair<int,int> patition_divide(vector<int>& v,int l,int r)
{
	//三数取中
	int m=l+(r-l)/2;
	if(v[l]>v[r])
		swap(v[l],v[r]);
	if(v[l]>v[m])
		swap(v[l],v[m]);
	if(v[m]>v[r])
		swap(v[m],v[r]);
		
	//主元换到最左边位置
		swap(v[r],v[m]);
		
	int pivot = v[r];
	/*
	while(a<b)
	{
		while(a<b && c<=v[b])
			b--;
		//替换代替交换，优化不必要的交换
		v[a]=v[b];
		while(a<b && c>=v[a])
			a++;
		v[b]=v[a];
	}
	v[a]=c;
	*/

	//分段第一种方法：双指针（来自浙大公开课），分为两段：<= pivot , > pivot
	//特殊情况处理：当所有元素全部相等时，low和high指针会停下来互相交换元素，可以保证每次patition分到比较中间的位置，使得整体复杂度NlogN
	/*
	int low = a+1;
	int high = b;
	for(;;)
	{
		while(v[low] < c)
			low++;
		while(v[high] > c)
			high--;
		if(low < high)
			swap(v[low],v[high]);
		else
			break;
	}

	swap(v[high],v[a]);
	return high;
	*/

	//
	//分段第二种方法：荷兰国旗问题，分为三段 < pivot, = pivot, > pivot。（当数组存在多个重复元素是，可以降低时间复杂度）
	int less = l - 1;
	int cur = l;
	int more = r;
	while(cur < more)
	{
		if(v[cur] < pivot)
			swap(v[++less],v[cur++]);
		else if(v[cur] > pivot)
			swap(v[--more],v[cur]);
		else
			cur++;
	}

	swap(v[more],v[r]);
	more++;

	return make_pair(less+1,more-1);
}

void Quick_Sort(vector<int>& vc,int l,int r)
{
	if(l >= r)
	{
		return;
	}

	pair<int,int> pr = patition_divide(vc,l,r);
	Quick_Sort(vc,l,pr.first-1);
	Quick_Sort(vc,pr.second+1,r);
}


/********测试主函数*********/
int main()
{
	vector<int> vec;
	int n;
	fstream input("test.txt");
	while (input >> n)
	{
		for (int i=0;i<n;i++)
		{
			int a;
			input >> a;
			vec.push_back(a);
		}

		int len = vec.size();
		Quick_Sort(vec,0,len-1);

		for (int i=0;i<len;i++)
		{
			cout << vec[i] << ' ';
		}

		vec.clear();
		system("pause");
	}
	return 0;
}



