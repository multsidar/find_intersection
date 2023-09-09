// ConsoleApplication14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
	set<int> ans;
	vector<int> inc_1,inc_2;
	int first, second,prim;
	cin >> first;
	for (int i = 0; i < first; i++)
	{
		cin >> prim;
		inc_1.push_back(prim);
	}
	cin >> second;
	for (int i = 0; i < second; i++)
	{
		cin >> prim;
		inc_2.push_back(prim);
	}
		sort(inc_1.begin(), inc_1.end());
		sort(inc_2.begin(), inc_2.end());
	for (int i = 0; i < inc_1.size(); i++)
	{
		if (binary_search(inc_2.begin(),inc_2.end(),inc_1[i]))
		{
			ans.insert(inc_1[i]);
		}
	}
	cout << ans.size() << endl;
	if (ans.size()!=0) {
		for (auto x : ans) {
			cout << x << " ";
		}
	}
	return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
