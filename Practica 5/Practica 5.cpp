#include <iostream>
#include <Windows.h>
#include<conio.h>
#include <cwchar>
#include <ctime>
#include <random>

using namespace std;
void demon()
{
	cout << "                  ``...-......`                   " << endl;
	cout << "               ..--::::::::::::--.`           `.  " << endl;
	cout << " .:`        `.-:::::::::::::::::::--.`       ./- " << endl;
	cout << " `/o:`    `.-:::::::::::::::::::::::--`    `/++`  " << endl;
	cout << "  .+yy/-``--..---:::::::::::::::--.-://.`-+yoo.   " << endl;
	cout << " ``-+sysyyysy+-...-:::::::::::-..`-+odhsys+/o- `` " << endl;
	cout << "`.` .++:s/ssyo+.`...:::::::::...-.:-so+--.++. `.-`" << endl;
	cout << "`-.` `-++./:+:o..:--.-::::::.-.:..--.-.:++:`  `-.`" << endl;
	cout << "`.-.` `-:++//+-:::::-.-::::.::::-::--.-//--` .-..`" << endl;
	cout << "`-.--``-:::::----:::::.-::.:::::::---::::::.`-`.-`" << endl;
	cout << "`--`:.`::::::-`..-:::::.-.-::::::-.`.::::::.---`-." << endl;
	cout << "`-``::`::.::-`.```-:::::..::::::. `...----:.:.:`-.	" << endl;
	cout << "`-.-.:.---:::-.---`-:::-::.:::-`.::--::::.:.-.:`-`" << endl;
	cout << " .-.-.:::.:---oysss:---.--.-:-.+ssys+-::--::.-:.` " << endl;
	cout << " `..-.-::.:-`+yy-ohs:`--.-.-..oy+/shs-.-:.::.:-`  " << endl;
	cout << "   `-:::.-:::-+ssss+--..---.--:ososo:-::::.:--`   " << endl;
	cout << "   `.::.-::----:::---:-`::-`::---::-----::-.:-`   " << endl;
	cout << "    .-:`:::.-.----.--:..::::-::..----.--::-`-`.   " << endl;
	cout << "     ```-:::-.`-::.--...:::.---.-:-.`--:::.:. :-  " << endl;
	cout << "        `-:::-  /-:----.---.----::. `-:::.`+` :/  " << endl;
	cout << "         `-::-. ssy+yo:+/./+:+o:y+:`.-:-.``+- //  " << endl;
	cout << "          `.:.-`shyydhhmmommhydshs/.-::.`  -+:+`  " << endl;
	cout << "          `.::..-ysdmdhNmsmNmdmdy+:-:::-`   `.`   " << endl;
	cout << "          `-:::-.-:ydymmNdNNmyds::-::::-`         " << endl;
	cout << "          `-:::::..-/:syy+yyo:/---:::::-`         " << endl;
	cout << "           `-:::::-..-::::::....-::::-.`          " << endl;
	cout << "            `.-::::::---.-..--:::::-.`           " << endl;
	cout << "             ``-::::::` `` .:::::.`              " << endl;
	cout << "               ``-::::.``.`-:::-.                " << endl;
	cout << "                 `-:::::-:::::-`                 " << endl;
	cout << "                   `-````..`.`.`                  " << endl;
	cout << "                    ` ``````  `                   " << endl;
	cout << "                    ` `````` `                    " << endl;
	cout << "                     `````` ``                    " << endl;
	cout << "                     .`` ``                      " << endl;
	cout << "                      `.                        " << endl;


}

void a1()

{
	int a, b; int c;
	setlocale (LC_ALL,"rus"); 
	cout<< "\n1 — синий\n"
		<< "2 — зеленый\n"
		<< "3 — голубой\n"
		<< "4 — красный\n"
		<< "5 — лиловый\n"
		<< "6 — желтый\n"
		<< "7 — белый\n"
		<< "8 — серый\n";
	cout << "Какой цвет фона хотите выбрать: ";
	cin >> a;
	cout << "Какой цвет шрифта хотите выбрать: ";
	cin >> b;
	
	

	if (a == 1 && b == 1)
	{
		c = system("color 11");
	}
	else if (a == 1 && b == 2)
	{
		c = system("color 12");
	}
	else if (a == 1 && b == 3)
	{
		c = system("color 13");
	}
	else if (a == 1 && b == 4)
	{
		c = system("color 14");
	}
	else if (a == 1 && b == 5)
	{
		c = system("color 15");
	}
	else if (a == 1 && b == 6)
	{
		c = system("color 16");
	}
	else if (a == 1 && b == 7)
	{
		c = system("color 17");
	}
	else if (a == 1 && b == 8)
	{
		c = system("color 18");
	}
	else if (a == 2 && b == 1)
	{
		c = system("color 21");
	}
	else if (a == 2 && b == 2)
	{
		c = system("color 22");
	}
	else if (a == 2 && b == 3)
	{
		c = system("color 23");
	}
	else if (a == 2 && b == 4)
	{
		c = system("color 24");
	}
	else if (a == 2 && b == 5)
	{
		c = system("color 25");
	}
	else if (a == 2 && b == 6)
	{
		c = system("color 26");
	}
	else if (a == 2 && b == 7)
	{
		c = system("color 27");
	}
	else if (a == 2 && b == 8)
	{
		c = system("color 28");
	}
	else if (a == 3 && b == 1)
	{
		c = system("color 31");
	}
	else if (a == 3 && b == 2)
	{
		c = system("color 32");
	}
	else if (a == 3 && b == 3)
	{
		c = system("color 33");
	}
	else if (a == 3 && b == 4)
	{
		c = system("color 34");
	}
	else if (a == 3 && b == 5)
	{
		c = system("color 35");
	}
	else if (a == 3 && b == 6)
	{
		c = system("color 36");
	}
	else if (a == 3 && b == 7)
	{
		c = system("color 37");
	}
	else if (a == 3 && b == 8)
	{
		c = system("color 38");
	}
	else if (a == 4 && b == 1)
	{
		c = system("color 41");
	}
	else if (a == 4 && b == 2)
	{
		c = system("color 42");
	}
	else if (a == 4 && b == 3)
	{
		c = system("color 43");
	}
	else if (a == 4 && b == 3)
	{
		c = system("color 43");
	}
	else if (a == 4 && b == 4)
	{
		c = system("color 44");
	}
	else if (a == 4 && b == 5)
	{
		c = system("color 45");
	}
	else if (a == 4 && b == 6)
	{
		c = system("color 46");
	}
	else if (a == 4 && b == 7)
	{
		c = system("color 47");
	}
	else if (a == 4 && b == 8)
	{
		c = system("color 48");
	}
	else if (a == 5 && b == 1)
	{
		c = system("color 51");
	}
	else if (a == 5 && b == 2)
	{
		c = system("color 52");
	}
	else if (a == 5 && b == 3)
	{
		c = system("color 53");
	}
	else if (a == 5 && b == 4)
	{
		c = system("color 54");
	}
	
	else if (a == 5 && b == 5)
	{
		c = system("color 55");
	}
	else if (a == 5 && b == 6)
	{
		c = system("color 56");
	}
	else if (a == 5 && b == 7)
	{
		c = system("color 57");
	}
	else if (a == 5 && b == 8)
	{
		c = system("color 58");
	}
	else if (a == 6 && b == 1)
	{
	c = system("color 61");
	}
	else if (a == 6 && b == 2)
	{
	c = system("color 62");
	}
	else if (a == 6 && b == 3)
	{
	c = system("color 63");
	}
	else if (a == 6 && b == 4)
	{
	c = system("color 64");
	}
	else if (a == 6 && b == 5)
	{
	c = system("color 65");
	}
	else if (a == 6 && b ==6)
	{
	c = system("color 66");
	}
	else if (a == 6 && b == 7)
	{
	c = system("color 67");
	}
	else if (a == 6 && b == 8)
	{
	c = system("color 68");
	}
	else if (a == 7 && b == 1)
	{
	c = system("color 71");
	}
	else if (a == 7 && b == 2)
	{
	c = system("color 72");
	}
	else if (a == 7 && b == 3)
	{
	c = system("color 73");
	}
	else if (a == 7 && b == 4)
	{
	c = system("color 74");
	}
	else if (a == 7 && b == 5)
	{
	c = system("color 75");
	}
	else if (a == 7 && b == 6)
	{
	c = system("color 76");
	}
	else if (a == 7 && b == 7)
	{
	c = system("color 77");
	}
	else if (a == 7 && b == 8)
	{
	c = system("color 78");
	}
	else if (a == 8 && b == 1)
	{
	c = system("color 81");
	}
	else if (a == 8 && b == 2)
	{
	c = system("color 82");
	}
	else if (a == 8 && b == 3)
	{
	c = system("color 83");
	}
	else if (a == 8 && b == 4)
	{
	c = system("color 84");
	}
	else if (a == 8 && b == 5)
	{
	c = system("color 85");
	}
	else if (a == 8 && b == 6)
	{
	c = system("color 86");
	}
	else if (a == 8 && b == 7)
	{
	 c = system("color 87");
	}
	else if (a == 8 && b == 8)
	{
	 c = system("color 88");
	}
}

void a2()
{
	double a, b, c = 1; int h = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите число: "; cin >> a;
	cout << "До какой степень возвести: "; cin >> b;
	for (int i = 0; i < b; i++)
	{
		
		h++;
		c *= a;
		cout << "Число "<< a<<" в степени "<< h <<" равно "<<  c <<" \n";
	}
	

	
}

void a3()
{  
	int a;
	setlocale(LC_ALL, "rus");
	cout << "Введите число: ";
	cin >> a;
	for (int i = 0; i < a+1; i++)
	{
		cout <<"Число "<< i << " \n";
	}
}

void a4()
{
	int a, b, i, c;
	cout << "Введите начало диапозона: "; cin >> a;
	cout << "Введите конец диапозона: "; cin >> b;
	cout << "Все числа:\n ";
	c = b + 1;
	for (int i = a; i<c; i++)
	{
		cout <<i<< " ";
	}
	cout <<"\n\n Четные числа:\n";
	for (int i = a; i < c; i++)
	{
		if (i % 2==0)
		cout << i << " ";
	}
	cout << "\n\n Нечетные числа:\n";
	for (int i = a; i < c; i++)
	{
		if (i % 2 == 1)
			cout << i << " ";
	}
	cout << "\n\n Числа кратные 7:\n";
	for (int i = a; i < c; i++)
	{
		if (i % 7 == 0)
			cout << i << " ";
	}
}

void a5()
{
	int a, b,sum = 0;
	cout << "Введите начало диапозона: "; cin >> a;
	cout << "Введите конец диапозона: "; cin >> b;
	for (int i = a; i < b + 1; i++)
	{
		sum = sum + i;
	}
	cout << "Сумма чисел в диапозоне от " << a <<" до "<<b<<" равна "<<sum ;;

}

void a6()
{
	int a,c = 0;
	do
	{
		cout << "Введите число: "; cin >> a;
		c = c + a;
		cout <<"Сумма >> "<< c<<"\n";
	} while (a != 0);
}

void ifel()
{
	int a, b, c = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	a = rand() % 16;
	cout << "Вы выбрали легкий режим, где числа загадываются в диапозоне от 1 до 15 и у вас 5 попыток\n";
	cout << "Введите число и если вы не угадали, то программа выдаст подсказку!!!\n";
	cin >> b;
	c += 1;
	while (c <= 5) {
		if (a > b) {
			cout << "Число меньше загадонного числа\n\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> b;
			c += 1;
		}
		else if (a < b) {
			cout << "Число больше загадонного числа\n\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> b;
			c += 1;
		}
		else if (a == b) { cout << "Вы угадали число, на это у вас ушло " << c << " попыток!!!"; break; }
		if (c == 5) { cout << "У вас кончились попытки :) \n"; break; }
	}
}

void ifel1()
{
	int a, b, c = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	a = rand() % 51;
	cout << "Вы выбрали средний режим, где числа загадываются в диапозоне от 1 до 50 и у вас 6 попыток\n";
	cout << "Введите число и если вы не угадали, то программа выдаст подсказку!!!\n";
	cin >> b;
	c += 1;
	while (c <= 6) {
		if (a > b) {
			cout << "Число меньше загадонного числа\n\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> b;
			c += 1;
		}
		else if (a < b) {
			cout << "Число больше загадонного числа\n\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> b;
			c += 1;
		}
		else if (a == b) { cout << "Вы угадали число, на это у вас ушло " << c << " попыток!!!"; break; }
		if (c == 6) { cout << "У вас кончились попытки :) \n"; break; }
	}
}

void ifel2()
{
	int a, b, c = 0;
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	a = rand() % 101;
	cout << "Вы выбрали средний режим, где числа загадываются в диапозоне от 1 до 100 и у вас 7 попыток\n";
	cout << "Введите число и если вы не угадали, то программа выдаст подсказку!!!\n";
	cin >> b;
	c += 1;
	while (c <= 7) {
		if (a > b) {
			cout << "Число меньше загадонного числа\n\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> b;
			c += 1;
		}
		else if (a < b) {
			cout << "Число больше загадонного числа\n\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> b;
			c += 1;
		}
		else if (a == b) { cout << "Вы угадали число, на это у вас ушло " << c << " попыток!!!"; break; }
		if (c == 7) { cout << "У вас кончились попытки :) \n"; break; }
	}
}

void hell()
{
	srand(time(NULL));
	int a, a1, a2, c = 0, c1 = 0, c2 = 0, c3 = 0, v = 0, v1 = 0, v2 = 0;
	double ar[5];
	cout << "Вы выбрали АдСкИй режим, в которором должны угадать ряд чисел состоящий из 3 числа, \nкоторые находяться в дипозоне от 1 до 30 и они могут повторяться. \n";
	for (int i = 0; i < 3; i++)
	{
		ar[i] = rand() % (30 - 1 + 1) + 1;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << ar[i] << " ";;
	}
	cout << "\t\t%% Угадывайте первое число, на это у вас 6 попыток. %%\n";
	cout << "Введите число: ";
	cin >> a;
	v1 = 1;
	while (v1 != 6 || a != ar[0])
	{
		if (a < ar[0]) {
			cout << "Число меньше загадонного числа\n\n";
			cout << "Введите первое число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> a;

		}
		else if (a > ar[0]) {
			cout << "Число больше загадонного числа\n\n";
			cout << "Введите первое число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> a;

		}
		if (a == ar[0]) { cout << "Вы угадали первое число, на это у вас ушло(a) " << v1 << " попыток и вы переходите ко второму :)\n"; c1 = 1; break; }
		v1++;
		if (v1 == 6) { cout << "У вас кончились попытки :) \n"; break; }
	}
	cout << "\t\t%% Угадывайте второе число число, на это у вас 4 попыток. %%\n";
	cout << "Введите число: ";

	cin >> a1;
	v = 1;
	while (v != 4 || a1 != ar[1])
	{
		if (a1 < ar[1]) {
			cout << "Число меньше загадонного числа\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> a;
		}
		else if (a1 > ar[1]) {
			cout << "Число больше загадонного числа\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> a;
		}
		if (a1 == ar[1]) { cout << "Вы угадали второе число, на это у вас ушло(a) " << v << " попыток и вы переходите ко третьему :)\n"; c2 = 1; break; }
		v++;
		if (v == 4) { cout << "У вас кончились попытки :)  P/S: Как и всегда *=*\n"; break; }
	}
	cout << "\t\t%% Угадывайте третье число, на это у вас 3 попытки и без подсказок. %%\n";
	cout << ar[2] << endl;
	cout << "Введите число: ";
	cin >> a2;
	v2 = 1;
	while (v2 != 3 || a2 != ar[2])
	{
		if (a2 < ar[2]) {
			cout << "Вы ввели неверное число, но и подсказыать я не собираюсь\n";
			cout << "Введите третье число\n";
			cin >> a;

		}
		else if (a2 > ar[2]) {
			cout << "Вы ввели неверное число, но и подсказыать я не собираюсь\n";
			cout << "Введите число и если вы не угадали, то вам программа выдаст подсказку!!!\n";
			cin >> a;

		}
		if (a2 == ar[2]) { cout << "Вы угадали третье число, на это у вас ушло(a) " << v2 << " попыток и вы переходите к итогам :)\n"; c3 = 1; break; }
		v2++;
		if (v2 == 3) { cout << "У вас кончились попытки :) P/S: Как и всегда *=* \n"; break; }
	}


	if (c1 == 1 && c2 == 1 && c3 == 1) { cout << "Вы угадали все числа и стали демоном \n"; demon(); }
	else if (c1 == 1 && c2 == 1) { cout << "Вы угадали два числа и стали просто чертом "; }
	else if (c1 == 1 && c3 == 1) { cout << "Вы угадали два числа и стали просто чертом "; }
	else if (c2 == 1 && c3 == 1) { cout << "Вы угадали два числа и стали просто чертом "; }
	else if (c2 == 1 && c1 == 1) { cout << "Вы угадали два числа и стали просто чертом "; }
	else if (c3 == 1 && c1 == 1) { cout << "Вы угадали два числа и стали просто чертом "; }
	else if (c3 == 1 && c2 == 1) { cout << "Вы угадали два числа и стали просто чертом "; }
	else if (c1 == 1) { cout << "Вы угадали одно число и стали темным духом общества"; }
	else if (c2 == 1) { cout << "Вы угадали одно число и стали темным духом общества"; }
	else if (c3 == 1) { cout << "Вы угадали одно число и стали темным духом общества"; }
	else cout << "Вы не угадали ни одного числа, вы /////////";
}

void a7()
{
	setlocale(LC_ALL, "rus");
	int a, b, c = 0, n = 0, x;
	//\nЧисло находится в диапозлоне от 0 до 15\nУ вас 5 попыток на отгадывание числа!!!\n";
	cout << "Вы выбрали игру УгАдАй число!!!\n";
	cout << "В этой игре есть четыре уровня сложности легкий - 1, средней - 2, сложный - 3, адский - 4 \n";
	cout << "Какой режим вы предпочитаете выбирать? -  ";
	cin >> x;
	switch (x) {
	case 1:
		ifel();
		break;
	case 2:
		ifel1();
		break;
	case 3:
		ifel2();
		break;
	case 4:
		hell();
		break;
	default:
		cout << "Вы выбрали неправильный выбор, поэтому вы будете проходить на адском уровне\n\n\n";
		hell();
	}
}

void a8()
{
	int a, b, c, x; double z;
	cout << "Какую валюту хотите конвертировать рубль - 1, доллар - 2, евро - 3, гривни - 4: "; cin >> a;
	cout << "В какую валюту хотите конвертировать рубль - 1, доллар - 2, евро - 3, гривни - 4: "; cin >> b;
	cout << "Сумма: "; cin >> x;
	if (a == 1 && b == 1)c = 0;
	if (a == 1 && b == 2)c = 1;
	if (a == 1 && b == 3)c = 2;
	if (a == 1 && b == 4)c = 3;
	if (a == 2 && b == 1)c = 4;
	if (a == 2 && b == 2)c = 0;
	if (a == 2 && b == 3)c = 5;
	if (a == 2 && b == 4)c = 6;
	if (a == 3 && b == 1)c = 7;
	if (a == 3 && b == 2)c = 8;
	if (a == 3 && b == 3)c = 0;
	if (a == 3 && b == 4)c = 9;
	if (a == 4 && b == 1)c = 10;
	if (a == 4 && b == 2)c = 11;
	if (a == 4 && b == 3)c = 12;
	if (a == 4 && b == 4)c = 0;
	switch (c)
	{
	case 0:
		cout << "Конвертация внутри валюты, стоимость не измениться "<<x;
		break;
	case 1:
		cout << "Конвертация из рублей в доллары\n";
		z = x * 0.01360;
		cout << "Сумма: " << z<<" $";
		break;
	case 2:
		cout << "Конвертация из рублей в евро\n";
		z = x * 0.01114;
		cout << "Сумма: " << z<<" евро";
		break;
	case 3:
		cout << "Конвертация из рублей в гривни\n";
		z = x * 0.37142;
		cout << "Сумма: " << z<<" гривней";
		break;
	case 4:
		cout << "Конвертация из долларов в рубли\n";
		z = x * 73.5036;
		cout << "Сумма: " << z << " рублей\n";
		break;
	case 5:
		cout << "Конвертация из долларов в евро\n";
		z = x * 0.81925;
		cout << "Сумма: " << z << " евро";
		break;
	case 6:
		cout << "Конвертация из долларов в гривни\n";
		z = x * 27.3199;
		cout << "Сумма: " << z << " гривней";
		break;
	case 7:
		cout << "Конвертация из евро в рубли\n";
		z = x * 89.7095;
		cout << "Сумма: " << z << " рублей";
		break;
	case 8:
		cout << "Конвертация из евро в доллары\n";
		z = x * 1.22048;
		cout << "Сумма: " << z << " долларов";
		break;
	case 9:
		cout << "Конвертация из евро в гривни\n";
		z = x * 33.3434;
		cout << "Сумма: "  << z << " гривней";
		break;
	case 10:
		cout << "Конвертация из гривней в рубли\n";
		z = x * 2.66523;
		cout << "Сумма: " << z << " рублей";
		break;
	case 11:
		cout << "Конвертация из гривней в доллары\n";
		z = x * 0.03626;
		cout << "Сумма: " << z << " долларов";
		break;
	case 12:
		cout << "Конвертация из гривней в евро\n";
		z = x * 0.02971;
		cout << "Сумма: " << z << " евро";
		break;
	default:
		cout << "Что-то не то!!!\n";
	}
	
}

void main()
{
	int a;
	setlocale(LC_ALL, "rus");
	cout << "1 - 8 > > > ";
	cin >> a;
	switch (a)
	{
	case 1:
		a1();
		break;
	case 2:
		a2();
		break;
	case 3:
		a3();
		break;
	case 4:
		a4();
		break;
	case 5:
		a5();
		break;
	case 6:
		a6();
		break;
	case 7:
		a7();
		break;
	case 8:
		a8();
		break;
    }
}