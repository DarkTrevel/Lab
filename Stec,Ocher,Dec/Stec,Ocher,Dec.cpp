// Stec,Ocher,Dec.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>
#include <deque>
#include <queue>
#include <fstream>

using namespace std;
int n,i,j;


class stek
{
public:
	void SozdatS();
	stack <int> storic;
	void DobavS();
	void VivodS();
	void ProsmS();
	
};
void stek::DobavS()
{
	cout << "Ввидите элементы стека. При вводе 0 добавление в стек прекращаеться ";
	cout << endl; j = 1;
	while (j != 0)
	{
		cin >> j;
		if (j != 0)
		{
			storic.push(j);
		}


	}
}
void stek::VivodS()
{
	if (storic.empty() == false)
	{
		cout << "Из стека извлечен элемент" << endl;
		i = storic.top();
		cout << i << endl;
		storic.pop();
	}
	else
	{
		cout << "Стек пуст" << endl;
	}

}
void stek::ProsmS()
{
	if (storic.empty() == false)
	{
		cout << "Просмотр элементов стека" << endl;
		if (storic.size() != 0)
		{
			n = storic.size();
			int *D_Mass = new int[n];
			for (i = 0; i < n; i++)
			{
				D_Mass[i] = storic.top();
				storic.pop();
				cout << D_Mass[i] << endl;
			}
			for (i = 0; i < n; i++)
			{
				storic.push(D_Mass[n-i-1]);
			}
			delete[] D_Mass;

		}

	}
	else
	{
		cout << "Стек пуст" << endl;
	}
}

class Ochered
{
public:
	queue <int> molor;
	void DobavO();
	void VivodO();
	void ProsmO();
};
void Ochered::DobavO()
{
	cout << "Ввидите элементы очереди. При вводе 0 добавление в стек прекращаеться ";
	cout << endl; j = 1;
	while (j != 0)
	{
		cin >> j;
		if (j != 0)
		{
			molor.push(j);
		}


	}
}
void Ochered::VivodO()
{
	if (molor.empty() == false)
	{
		cout << "Из очереди извлечен элемент" << endl;
		i = molor.front();
		cout << i << endl;
		molor.pop();
	}
	else
	{
		cout << "Очередь пуста" << endl;
	}

}
void Ochered::ProsmO()
{
	if (molor.empty() == false)
	{
		cout << "Просмотр элементов стека" << endl;
		j = molor.size();
		while (j != 0)
		{

			i = molor.front();
			cout << i << endl;
			molor.pop();
			molor.push(i);
			j--;
		}

	}
	else
	{
		cout << "Очередь пуста" << endl;
	}
}

class dec
{
public:
	deque <int> dolor;
	void DobavVD();
	void DobavND();
	void VivodVD();
	void VivodND();
	void ProsmD();

};
void dec::DobavVD()
{
	cout << "Ввидите элементы дека (сверху). При вводе 0 добавление в стек прекращаеться ";
	cout << endl; j = 1;
	while (j != 0)
	{
		cin >> j;
		if (j != 0)
		{
			dolor.push_front(j);
		}
	}
}
void dec::DobavND()
{
	cout << "Ввидите элементы дека (снизу). При вводе 0 добавление в стек прекращаеться ";
	cout << endl; j = 1;
	while (j != 0)
	{
		cin >> j;
		if (j != 0)
		{
			dolor.push_back(j);
		}
	}
}
void dec::VivodVD()
{
	{
		if (dolor.empty() == false)
		{
			cout << "Из дека (сверху) извлечен элемент" << endl;
			i = dolor.front();
			cout << i << endl;
			dolor.pop_front();
		}
		else
		{
			cout << "Дек пуст" << endl;
		}

	}
}
void dec::VivodND()
{
	if (dolor.empty() == false)
	{
		cout << "Из дека (снизу) извлечен элемент" << endl;
		i = dolor.back();
		cout << i << endl;
		dolor.pop_back();
	}
	else
	{
		cout << "Дек пуст" << endl;
	}

}
void dec::ProsmD()
{
	if (dolor.empty() == false)
	{
		cout << "Просмотр элементов дека" << endl;
		j = dolor.size();
		while (j != 0)
		{

			i = dolor.front();
			cout << i << endl;
			dolor.pop_front();
			dolor.push_back(i);
			j--;
		}

	}
	else
	{
		cout << "Дек пуст" << endl;
	}

}


int main()
{
	int stop;
	setlocale(LC_ALL, "RUS");
	stek Opis;
	Ochered Lopis;
	class dec Moli;


	// Индивидуалка
	stack <char> storis;
	char ch[255];
	ifstream file("Pered.txt", ios::in);
	ofstream fili("Posle.txt");
	while (!file.eof())
	{
		j = 0;
		file.getline(ch,sizeof(ch));
		for (i = 0; ch[i] != NULL; i++)
		{
			storis.push(ch[i]);
			j++;		}
		for (i = 0; i != storis.size();)
		{
			fili << storis.top();
			storis.pop();
		}
		fili << endl;
			
		for (i = 0; i <= j; i++)
			{
				ch[i] = NULL;
			}
	};
	
	file.close();

	cin >> stop;
	return 0;

} 