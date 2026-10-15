

#include <iostream>
using namespace std;
void ascSert(int, int, int);
int main()
{
    int num1, num2, num3, choice;
    do {
       
        cout << "enter three numbers";
        cin >> num1 >> num2 >> num3;
        ascSert(num1, num2, num3);
        cout << "\nDo you want to continue(Enter a negative number to exit :";
            cin >> choice;
    } while (choice >= 0);

      



    return 0;
}

void ascSert(int a, int b, int c);