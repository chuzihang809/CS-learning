//深刻的桶排序例题：按类型排序
//题目中给出了手牌，不失一般性的我们可以给出特定的手牌
#include<iostream>
using namespace std;
int main()
{
	int flag1 = 0, flag2=0;
	int cd[20] = { 6,11,9,14,11,10,5,11,17,6,14,6,8,14,5,16,3,3,7 };//20张手牌
	int p[5];//存放上家出牌的数组
	cout << "请出三带二" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> p[i];
	}
	
	int san=-1, er=-1;
	int tongcx[110] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		tongcx[cd[i]]++;//cd[i]的值是牌，tongcx[]是牌面大小为cd[i]的牌出现次数
	}
	for (int i = 3; i <= 17; i++)
	{
		if (tongcx[i] == 3 && i > p[0]) san = i; 
		if (tongcx[i] == 2)  er = i; 
		if (san != -1 && er != -1) break;
		
	}
	
	if (san != -1 && er != -1) cout << san << ' ' << san << ' ' << san << ' ' << er << ' ' << er << endl;
	else cout << "打不起，过" << endl;
	return 0;
}
