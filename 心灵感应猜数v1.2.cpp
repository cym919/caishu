#include<iostream>
#include<Windows.h>
using namespace std;
const int N = 1e2;
const int A[][5] = {7, 11, 3, 23, 9, 1, 13, 15, 5, 17, 19, 21, 27, 29, 25};
const int B[][5] = {19, 22, 18, 14, 30, 2, 6, 23, 3, 7, 10, 27, 26, 11, 15};
const int C[][5] = {6, 21, 7, 14, 12, 22, 4, 20, 29, 28, 23, 15, 13, 30, 5};
const int D[][5] = {12, 24, 30, 28, 9, 14, 25, 27, 15, 8, 26, 29, 10, 11, 13};
const int E[][5] = {19, 27, 16, 21, 22, 20, 17, 18, 24, 29, 25, 23, 30, 28, 26};
int a, b, c, d, e;
int x;
char yn;
int main()
{
  system("color 0a");
  cout << "心灵感应猜数 v1.2\nTips:请不要输入要求以外的数，尤其是字符、超出int范围的数！\n本作品在GitHub上开源，https://github.com/cym919/caishu/\n";
  cout << "是否开始？(Y/N)";
  cin >> yn;
  if (yn == 'y' || yn == 'Y')
  {
    system("cls");
    a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
    system("color fc");
    cout << "请想一个30以内的整数（不包括负数）\n";
    system("pause");
    cout << "A\n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << A[i][j] << " ";
      }
      cout << endl;
    }
    cout << "请问这组数中有没有你想的数（输入0代表没有，输入1代表有）：";
    cin >> a;
    if (a != 0 && a != 1)
    {
      system("cls");
      system("color f9");
      cout << "ERR:043 Unknow parameter\n";
      system("pause");
      system("color fc");
      system("cls");
      a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
      main();
      return 0;
    }
    cout << endl;
    cout << "B\n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << B[i][j] << " ";
      }
      cout << endl;
    }
    cout << "请问这组数中有没有你想的数（输入0代表没有，输入1代表有）：";
    cin >> b;
    if (b != 0 && b != 1)
    {
      system("cls");
      system("color f9");
      cout << "ERR:043 Unknow parameter\n";
      system("pause");
      system("color fc");
      system("cls");
      a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
      main();
      return 0;
    }
    cout << endl;
    cout << "C\n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << C[i][j] << " ";
      }
      cout << endl;
    }
    cout << "请问这组数中有没有你想的数（输入0代表没有，输入1代表有）：";
    cin >> c;
    if (c != 0 && c != 1)
    {
      system("cls");
      system("color f9");
      cout << "ERR:043 Unknow parameter\n";
      system("pause");
      system("color fc");
      system("cls");
      a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
      main();
      return 0;
    }
    cout << endl;
    cout << "D\n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << D[i][j] << " ";
      }
      cout << endl;
    }
    cout << "请问这组数中有没有你想的数（输入0代表没有，输入1代表有）：";
    cin >> d;
    if (d != 0 && d != 1)
    {
      system("cls");
      system("color f9");
      cout << "ERR:043 Unknow parameter\n";
      system("pause");
      system("color fc");
      system("cls");
      a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
      main();
      return 0;
    }
    cout << endl;
    cout << "E\n";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << E[i][j] << " ";
      }
      cout << endl;
    }
    cout << "请问这组数中有没有你想的数（输入0代表没有，输入1代表有）：";
    cin >> e;
    if (e != 0 && e != 1)
    {
      system("cls");
      system("color f9");
      cout << "ERR:043 Unknow parameter\n";
      system("pause");
      system("color fc");
      system("cls");
      a = 0, b = 0, c = 0, d = 0, e = 0, x = 0;
      main();
      return 0;
    }
    cout << endl;
    //1 2 4 8 16
    x = a * 1 + b * 2 + c * 4 + d * 8 + e * 16;
    system("color fa");
    cout << "你想的数是：" << x << endl;
    system("pause");
    return 0;
  }
  else if (yn == 'n' || yn == 'N')
  {
  	system("cls");
    cout << "为什么不开始，为什么！！！";
    return 0;
  }
  else
  {
    system("cls");
    system("color f9");
    cout << "ERR:043 Unknow parameter\n";
    system("pause");
    system("color fc");
    system("cls");
    main();
  }
}
//INT_MAX=2147483647
