#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    /* NOMOR 1
    Find the value of sin37, cos53, tan60
    Ubah derajat menjadi radian (C * PI / 180)
    masukkan dalam rumus sin(x), cos(x), tan(x)
    */

    //Variable declaration derajat = c;
    double c1 = 37, c2 = 53, c3 = 60;

    //Operate the trigonometry function and display the result
    cout << "The answer for Exercise 1 No.1\n" << "a. sin(37) = " << sin(c1 * M_PI / 180) << "\n" 
         << "b. cos(53) = " << cos(c2 * M_PI / 180) << "\n" << "c. tan(60) = " <<  tan(c3 * M_PI / 180) << endl;

    /* NOMOR 2
    Find the value of asin 0.58, acos 0.29, atan 0.72
    Karena sudah berbentuk radian, langsung masukkin ke rumus asin(x), acos (x), atan(x)
    lalu setelah dapat hasilnya, ubah ke derajat (rad * 180 / PI)

    sedangkan bagian d yang dicari sqrt (156 -12)
    */

    //Variable Declaration
    double rad1 = 0.58, rad2 = 0.29, rad3 = 0.72;

    //Operate the trigonometry function
    double result1 = asin (rad1);
    double result2 = acos (rad2);
    double result3 = atan (rad3);
    double result4 = sqrt (156 - 12);

    // Display the result
    cout << "\nThe answer for Exercise 1 No. 2\n" << "a. asin(0.58) = " << result1 * 180 / M_PI << "\n" 
         << "b. acos(0.29) = " << result2 * 180 / M_PI << "\n" << "c. atan(0.72) = " << result3 * 180 / M_PI << "\n"
         << "d. sqrt(156 - 12) = " << result4 << endl;

    /* NOMOR 3
    For x = (x | 0 < x < 5), find the value of y.
    y = 2x^2 - x + 7
    Gunakan loop for, untuk memenuhi kondisi lalu
    use pow (untuk perpangkatan)
    */

    //Variable Declaration
    int x, y;

    //Display pernyataan
    cout << "\nThe answer for Exercise 1 No. 3\n" << "if y = 2x^2 - x + 7\n\n";

    //Loop for (x > 0 && x << 5) and display the result
    for (x = 1; x < 5; x++){
        y = (2 * pow (x,2)) - x + 7;
        cout << "for x = " << x << ", y = " << y << endl;
    }

    /* NOMOR 4
    Round up and down the value of (5.89, 7.2, 12.05, 0.03)
    use ceil(x) for round up
    use floor(x) for round down
    */

    //Variable Declaration
    double x1 = 5.89, x2 = 7.2, x3 = 12.05, x4 = 0.03;

    //Use ceil(x) and floor(x) then display the result
    cout << "\nThe result of Exercise 1 No.4\n" << "a. x = 5.89\n" << "   round up = " << ceil(5.89) << "\n   round down = " << floor(5.89)
         << "\nb. x = 7.2\n" << "   round up = " << ceil(7.2) << "\n   round down = " << floor(7.2)
         << "\nc. x = 12.05\n" << "   round up = " << ceil(12.05) << "\n   round down = " << floor(12.05)
         << "\nd. x = 0.03\n" << "   round up = " << ceil(0.03) << "\n   round down = " << floor(0.03) << endl;


    return 0;
}