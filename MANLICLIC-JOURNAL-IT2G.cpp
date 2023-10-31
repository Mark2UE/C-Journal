#include <iostream>
#include <iomanip>
using namespace std;
class Bank
{
public:
       void getInterest(int principal, int time)
       {
              double interest = principal * 0.15 * time;

              cout << "The Standard is 15%" << endl;
              cout << "Computed interest based on our rate is:" << interest << endl;
       }
};

class BDO : public Bank
{
public:
       void getInterest(int principal, int time)
       {
              double interest = principal * 0.10 * time;

              cout << "Here in BDO, our rate is only 10%" << endl;
              cout << "Computed interest based on our rate is:" << interest << endl;
       }
};

class PNB : public Bank
{
public:
       void getInterest(int principal, int time)
       {

              if (principal <= 50000)
              {
                     double interest = principal * 0.75 * time;

                     cout << "your rate is less than or equal to 50000, your rate is 7.5%" << endl;
                     cout << "Computed interest based on our rate is:" << interest << endl;
              }
              else
              {
                     double interest = principal * 0.05 * time;

                     cout << "your rate is more than 50000, your rate is 5%" << endl;
                     cout << "Computed interest based on our rate is:" << interest << endl;
              }
       }
};
class Example
{

public:
       void payment(int amount)
       {
              cout << "You paid cash in the amount of: " << amount << endl;
       };

       void payment(int dc, int amount)
       {
              cout << "You paid in Debit Card the amount of: " << amount << endl;
              cout << "Your Debit Card " << dc << " Has been deducted" << endl;
       }

       void payment(int creditcard, int amount, int payment_terms)
       {
              cout << "Your Credit Card " << creditcard << " Has been deducted" << endl;
              int paymentTerm = amount / payment_terms;
              cout << "Amount to pay per Payment Term: " << paymentTerm << endl;
       };
};

class Employee
{
public:
       string emp_name;
       int emp_number;

       Employee(string name, int empNumber)
       {
              emp_name = name;
              emp_number = empNumber;
              cout << "The Employee was created." << endl;
       }

       void getAttendance()
       {
              cout << emp_name << " is present." << endl;
       }
};

class Regular_Employee : public Employee
{

public:
       int monthlySalary;

       Regular_Employee(string name, int empNumber, int MonthlySalary) : Employee(name, empNumber) // inheriting method from the parent class
       {
              monthlySalary = MonthlySalary;
              cout << "A Regular Employee was Created." << endl;
       }

       void increaseSalary()
       {
              monthlySalary = monthlySalary * 2;
              cout << "The salary was increase to :" << monthlySalary << endl;
       }
};

class Contractual_Employee : public Employee
{
public:
       int hoursWork,
           hourlySalary;

       Contractual_Employee(string name, int empNumber, int HoursWork, int hourly_salary) : Employee(name, empNumber) // inheriting method from the parent class
       {
              hourlySalary = hourly_salary;
              hoursWork = HoursWork;
              cout << "A Contractual Employee named " << name << " was Created." << endl;
       }

       void computeSalary()
       {
              int ComputedSalary;

              ComputedSalary = hoursWork * hourlySalary;

              cout << "Your Computed Salary as Contractual is: " << ComputedSalary << endl;
       }
};

class employee
{
private:
       string emp_name,
           pos_code,
           tax_code;

public:
       void setName(string Name)
       {
              emp_name = Name;
       };
       void setPCode(string pCode)
       {
              pos_code = pCode;
       };
       void setTCode(string tCode)
       {
              tax_code = tCode;
       };

       void Employee(string name, string pos, string tax)
       {
              setName(name);
              setPCode(pos);
              setTCode(tax);
       };

       string getName()
       {
              return emp_name;
       };
       string getPCode()
       {
              return pos_code;
       };
       string getTCode()
       {
              return tax_code;
       };

       string PositionCodeIdentifier()
       {
              string position;
              if (getPCode() == "M")
              {
                     position = "Manager";
              }
              else if (getPCode() == "S")
              {
                     position = "Supervisor";
              }
              else if (getPCode() == "R")
              {
                     position = "Regular";
              }
              else if (getPCode() == "R")
              {
                     position = "Contractual";
              }
              else
              {
                     position = "Unknown";
              }

              return position;
       };

       int Grosspay()
       {
              int Gross;
              if (PositionCodeIdentifier() == "Manager")
              {
                     Gross = 50000;
              }
              else if (PositionCodeIdentifier() == "Supervisor")
              {
                     Gross = 35000;
              }
              else if (PositionCodeIdentifier() == "Regular")
              {
                     Gross = 25000;
              }
              else if (PositionCodeIdentifier() == "Contractual")
              {
                     Gross = 15000;
              }
              else
              {
                     Gross = 0;
              }

              return Gross;
       };

       double Tax()
       {
              double tax;
              string code = getTCode();

              if (code == "A")
              {
                     tax = 0.10;
              }
              else if (code == "B")
              {
                     tax = 0.20;
              }
              else if (code == "C")
              {
                     tax = 0.30;
              }
              else if (code == "D")
              {
                     tax = 0.40;
              }
              else
              {
                     tax = 0;
              }

              return tax;
       };

       string showTax()
       {
              string tax;
              string code = getTCode();

              if (code == "A")
              {
                     tax = "10%";
              }
              else if (code == "B")
              {
                     tax = "20%";
              }
              else if (code == "C")
              {
                     tax = "30%";
              }
              else if (code == "D")
              {
                     tax = "40%";
              }
              else
              {
                     tax = "0%";
              }

              return tax;
       };

       double netpay()
       {
              double netpay, netpay_1, tax = Tax(), grosspay = Grosspay();

              netpay_1 = grosspay * tax;
              netpay = grosspay - netpay_1;
              return netpay;
       };

       void ShowEmployee()
       {
              cout << endl;
              cout << "Employee Name:" << getName() << endl;
              cout << "Position:" << PositionCodeIdentifier() << endl;
              cout << "Tax:" << showTax() << endl;
              cout << "Gross pay:" << Grosspay() << endl;
              cout << "Net pay:" << netpay() << endl;
       };
};

class student
{
public:
       string Name,
           SNumber;

       int yrLevel;

       double
           Quiz,
           ClassStanding,
           non_acads,
           major_ex;

       void showStudentInfo()
       {
              cout << "Student Name: " << Name << endl;
              cout << "Student Number: " << SNumber << endl;
       };

       void YearLevel()
       {
              if (yrLevel == 1)
              {
                     cout << "You are a: Freshmen" << endl;
              }
              else if (yrLevel == 2)
              {
                     cout << "You are a: Sophomore" << endl;
              }
              else if (yrLevel == 3)
              {
                     cout << "You are a: Junior" << endl;
              }
              else if (yrLevel == 4)
              {
                     cout << "You are a: Senior" << endl;
              }
              else
              {
                     cout << "ERROR" << endl;
              }
       };

       void rating()
       {
              double q1, cs, na, ma, overall;

              q1 = Quiz * .35;
              cs = ClassStanding * .2;
              na = non_acads * .05;
              ma = major_ex * .4;

              overall = q1 + cs + na + ma;
              cout << "Your Grade Rating is: " << overall << endl;
              // POINT SYSTEM

              if (overall >= 98)
              {
                     cout << "Your Equivalent grade is 1.00" << endl;
              }
              else if (overall >= 95)
              {
                     cout << "Your Equivalent grade is 1.25" << endl;
              }
              else if (overall >= 92)
              {
                     cout << "Your Equivalent grade is 1.50" << endl;
              }
              else if (overall >= 89)
              {
                     cout << "Your Equivalent grade is 1.75" << endl;
              }
              else if (overall >= 86)
              {
                     cout << "Your Equivalent grade is 2.00" << endl;
              }
              else if (overall >= 83)
              {
                     cout << "Your Equivalent grade is 2.25" << endl;
              }
              else if (overall >= 80)
              {
                     cout << "Your Equivalent grade is 2.50" << endl;
              }
              else if (overall >= 77)
              {
                     cout << "Your Equivalent grade is 2.75" << endl;
              }
              else if (overall >= 75)
              {
                     cout << "Your Equivalent grade is 3.00" << endl;
              }
              else
              {
                     cout << "Your Equivalent grade is 4.00 FAILED" << endl;
              }
       };
};

// INT FUNCTIONS
int rectangle(int base, int height)
{
       return base * height;
}
int triangle(int base, int height)
{
       int xbase, ybase;
       xbase = base * height;
       ybase = xbase * 1 / 2;
       return ybase;
}
double circle(double radius)
{
       double pi = 3.14, xbase;

       xbase = radius * radius;
       return pi * xbase;
}
double eclipse(int base, int height)
{
       double pi = 3.14;
       double xbase = base * height;
       return xbase * pi;
}
int trapezoid(int area, int base, int height)
{
       int xbase, ybase;

       xbase = area + base;
       ybase = xbase / 2;
       return xbase * height;
}
int square(int xbase)
{
       return xbase * xbase;
}

double grosspay(float hrsworked, float rate)
{
       float value = hrsworked * rate;
       return value;
}

double tax(double gp)
{
       return gp * 0.1;
}
double deductions(double tax, double sss, double pagibig, double philhealth)
{
       return tax + sss + pagibig + philhealth;
}
double netpay(double gp, double deductions)
{
       return gp - deductions;
}

int getAverage(int end, int count)
{
       return end / count;
}

int getodd(int numbers)
{

       if (numbers % 2 == 0)
       {
              return 0;
       }
       else
       {
              return 1;
       }
}

int geteven(int numbers)
{
       if (numbers % 2 == 0)
       {
              return 1;
       }
       else
       {
              return 0;
       }
}

int counter()
{
       return 1;
}

int gettotalPOS(int numbers)
{
       if (numbers >= 0)
       {
              return 1;
       }
       else
       {
              return 0;
       }
}

int gettotalNEG(int numbers)
{
       if (numbers < 0)
       {
              return 1;
       }
       else
       {
              return 0;
       }
}

int sumAll(int numbers)
{
       return numbers;
}
int main()
{

       string options;

       do
       {
              system("cls");
              int labacts;
              cout << "PRELIM JOURNAL" << endl;
              cout << "MARK BENARD A. MANLICLIC" << endl;
              cout << "20191156555" << endl;
              cout << "CCS2102 - IT2G" << endl
                   << endl;

              cout << "laboratory activities:" << endl;
              cout << "   1. Problem 1: Peso Converter" << endl;
              cout << "   2. Problem 2: Temperature Converter" << endl;
              cout << "   3. Problem 3: Data Calculator" << endl;
              cout << "   4. Problem 4: Fine calculator" << endl;
              cout << "   5. Problem 5: Number Evaluator" << endl;
              cout << "   6. Problem 6: Quick Geometry" << endl;
              cout << "Quizzes:" << endl;
              cout << "   7. Quiz#1 : Salary Calculator" << endl;
              cout << "   8. Quiz#2 : Number Evaluator in Function" << endl
                   << endl;
              cout << "MIDTERM JOURNAL" << endl;
              cout << "   9. Problem 9: Student Grade Calculator using OOP" << endl;
              cout << "   10. Problem 10: Employee Activity" << endl;
              cout << "   11. Problem 11: INHERITANCE: Employee with Subclasses (LAB6)" << endl;
              cout << "   12. Problem 12: POLYMORPHISM: Overloading Function (LAB7)" << endl;
              cout << "   13. Problem 13: POLYMORPHISM: Overriding Function (LAB8)" << endl;
              cout << "SELECT ACTIVITY NUMBER:";
              cin >> labacts;

              if (labacts == 1)
              {

                     system("cls");
                     cout << "1. Peso Converte" << endl;
                     double dollar, euro, yen, peso;

                     cout << "enter your peso:";
                     cin >> peso;

                     dollar = peso / 50;
                     euro = peso / 65;
                     yen = peso / 2.2;

                     cout << "dollar: " << dollar << endl;
                     cout << "euro: " << euro << endl;
                     cout << "yen: " << yen << endl;
              }
              else if (labacts == 2)
              {
                     system("cls");
                     cout << "2. Temperature Converter" << endl;
                     double kph_min = 80, kph_max = 100, speed, fine = 0, speedvalue, basefare = 500, additional_max = 50;

                     cout << "Enter speed kph:";
                     cin >> speed;

                     if (speed > kph_min)
                     {

                            fine += basefare;

                            if (speed > kph_max)
                            {

                                   speedvalue = speed - kph_max;
                                   fine += speedvalue * additional_max;
                            }
                     }

                     else if (speed < kph_min)
                     {
                            fine = 0;
                     }
                     else
                     {
                            fine = 0;
                     };

                     cout << "Fine for the speed of: " << speed << " is: " << fine << " Pesos" << endl;
              }
              else if (labacts == 3)
              {
                     system("cls");
                     cout << "3. Data Converter" << endl;
                     double datacons, avedata, DataRemain, amountDue, maxdata = 100;

                     cout << "Data consumed:";
                     cin >> datacons;

                     avedata = datacons / 30;
                     DataRemain = maxdata - datacons;
                     amountDue = datacons * 10;

                     cout << "average data per day: " << avedata << endl;
                     cout << "remaining data: " << DataRemain << endl;
                     cout << "amount due: " << amountDue << endl;
              }
              else if (labacts == 4)
              {
                     system("cls");
                     cout << "4. Speed Meter calculator" << endl;
                     double kph_min = 80, kph_max = 100, speed, fine = 0, speedvalue, basefare = 500, additional_max = 50;

                     cout << "Enter speed kph:";
                     cin >> speed;

                     if (speed > kph_min)
                     {

                            fine += basefare;

                            if (speed > kph_max)
                            {

                                   speedvalue = speed - kph_max;
                                   fine += speedvalue * additional_max;
                            }
                     }

                     else if (speed < kph_min)
                     {
                            fine = 0;
                     }
                     else
                     {
                            fine = 0;
                     };

                     cout << "Fine for the speed of: " << speed << " is: " << fine << " Pesos" << endl;
              }
              else if (labacts == 5)
              {
                     system("cls");
                     cout << "5. Summing all the numbers inputed" << endl;
                     int input, end = 0, novalue = 0;

                     do
                     {
                            cout << "input number:";
                            cin >> input;
                            end += input;
                     } while (input != novalue);
                     cout << "Sum of all the given inputs are :" << end << endl;
              }
              else if (labacts == 6)
              {
                     system("cls");
                     cout << "6. Quick Geometry" << endl;
                     int choices;
                     cout << "Quick Geometry" << endl
                          << endl;
                     cout << "Available Shapes:" << endl;
                     cout << "1. Square" << endl
                          << "2. Triangle" << endl
                          << "3. Circle" << endl
                          << "4. Rectangle"
                          << endl
                          << "5. Eclipse" << endl
                          << "6. Trapezoid" << endl;

                     cout << "Enter Your Choice:";
                     cin >> choices;
                     // square option
                     if (choices == 1)
                     {
                            int input;
                            cout << "You chose Square:" << endl;
                            cout << "Input X:";
                            cin >> input;
                            cout << "the area of Square is:";
                            cout << square(input);
                            // square Triangle
                     }
                     else if (choices == 2)
                     {

                            int base, height;
                            cout << "You chose Triangle" << endl;
                            cout << "Input Base:";
                            cin >> base;
                            cout << "Input height:";
                            cin >> height;
                            cout << "the area of Triangle is:";
                            cout << triangle(base, height);

                            // square Circle
                     }
                     else if (choices == 3)
                     {

                            double radius;
                            cout << "You chose Circle:" << endl;
                            cout << "Input Radius:";
                            cin >> radius;

                            cout << "the area of Circle is:";
                            cout << circle(radius);

                            // square Rectangle
                     }
                     else if (choices == 4)
                     {
                            int base, height;
                            cout << "You chose Rectangle:" << endl;
                            cout << "Input Base:";
                            cin >> base;
                            cout << "Input height:";
                            cin >> height;
                            cout << "the area of rectangle is:";
                            cout << rectangle(base, height);
                            // square Eclipse
                     }
                     else if (choices == 5)
                     {
                            int base, height;
                            cout << "You chose Eclipse:" << endl;
                            cout << "Input Base:";
                            cin >> base;
                            cout << "Input height:";
                            cin >> height;
                            cout << "the area of rectangle is:";
                            cout << eclipse(base, height);
                            // square Trapezoid
                     }
                     else if (choices == 6)
                     {
                            int base, height, area;
                            cout << "You chose Trapezoid" << endl;

                            cout << "Input Area:";
                            cin >> area;

                            cout << "Input Base:";
                            cin >> base;

                            cout << "Input height:";
                            cin >> height;

                            cout << "the area of Trapezoid is:";
                            cout << trapezoid(area, base, height);

                            // Error message when there are no choices has been made
                     }
                     else
                     {
                            cout << "Error please try again";
                     }
              }
              else if (labacts == 7)
              {
                     system("cls");
                     cout << "7. Quiz#1" << endl;
                     int hoursworked, rate, SSS, pagibig, philhealth;

                     // input
                     cout << "Enter Hours Worked: ";
                     cin >> hoursworked;
                     cout << "Enter Rate Per Hour: ";
                     cin >> rate;
                     cout << "" << endl;
                     cout << "" << endl;
                     // dsiplay function
                     cout << "The Gross pay is: ";
                     cout << grosspay(hoursworked, rate) << std::fixed << std::setprecision(1);
                     cout << "" << endl;
                     cout << "The Tax is: ";
                     cout << tax(grosspay(hoursworked, rate));
                     cout << "" << endl;

                     // input sss pagibig philhealth
                     cout << "Enter SSS: ";
                     cin >> SSS;
                     cout << "Enter Pagibig: ";
                     cin >> pagibig;
                     cout << "Enter Philhealth: ";
                     cin >> philhealth;

                     // dsiplay function
                     cout << "" << endl;
                     cout << "" << endl;

                     cout << "The total deduction is: ";
                     cout << deductions(tax(grosspay(hoursworked, rate)), SSS, pagibig, philhealth);
                     cout << "" << endl;
                     cout << "The net pay is: ";
                     cout << netpay(grosspay(hoursworked, rate), deductions(tax(grosspay(hoursworked, rate)), SSS, pagibig, philhealth));
              }
              else if (labacts == 8)
              {
                     system("cls");
                     cout << "8. Quiz#1" << endl;
                     string options;
                     int numbers, end = 0, increment = 0, average, totalOdd = 0, totalEven = 0, totalPos = 0, totalNeg = 0;
                     do
                     {

                            do
                            {
                                   cout << "Enter Number: ";
                                   cin >> numbers;
                                   increment += counter();
                                   end += sumAll(numbers);
                                   totalOdd += getodd(numbers);
                                   totalEven += geteven(numbers);
                                   totalPos += gettotalPOS(numbers);
                                   totalNeg += gettotalNEG(numbers);

                            } while (numbers != 0);

                            cout << "Total numbers entered: " << increment << endl;
                            cout << "Sum of all the numbers entered: " << end << endl;
                            cout << "Averge of all the numbers entered: " << getAverage(end, increment) << endl;
                            cout << "Total odd numbers entered: " << totalOdd << endl;
                            cout << "Total even numbers entered including 0: " << totalEven << endl;
                            cout << "Total positive numbers entered including 0: " << totalPos << endl;
                            cout << "Total negative numbers entered: " << totalNeg << endl;

                            cout << "Manliclic, Mark Bernard A " << endl;
                            cout << "20191156555" << endl;

                            cout << "Do you want to Try again?: [Y,N] ";
                            cin >> options;
                            numbers = 0, end = 0, increment = 0, average = 0, totalOdd = 0, totalEven = 0, totalPos = 0, totalNeg = 0;

                     } while (options != "n");
              }
              else if (labacts == 9)
              {
                     system("cls");
                     cout << "   9. Problem 9: Student Grade Calculator using OOP" << endl;

                     student newStudent;
                     cout << "Enter Student Name: ";
                     cin >> newStudent.Name;
                     cout << "Enter Student Number: ";
                     cin >> newStudent.SNumber;
                     cout << "Enter Year Level: ";
                     cin >> newStudent.yrLevel;
                     cout << "Enter Quiz Grade: ";
                     cin >> newStudent.Quiz;
                     cout << "Enter Class Standing: ";
                     cin >> newStudent.ClassStanding;
                     cout << "Enter Non-Academic Grades: ";
                     cin >> newStudent.non_acads;
                     cout << "Enter Major Exam Quiz: ";
                     cin >> newStudent.major_ex;

                     cout << "==============RESULTS=================" << endl;
                     newStudent.showStudentInfo();
                     newStudent.YearLevel();
                     newStudent.rating();

                     cout << "===============================" << endl;
              }
              else if (labacts == 10)
              {
                     system("cls");
                     cout << "   10. Problem 10: Employee Activity" << endl;
                     string name, pos, tax;
                     employee new_employee;

                     cout << "Enter Name: ";
                     cin >> name;
                     cout << "Enter Position [M,S,R,C]: ";
                     cin >> pos;
                     cout << "Enter Tax [A,B,C,D]: ";
                     cin >> tax;
                     // set
                     new_employee.Employee(name, pos, tax);
                     new_employee.ShowEmployee();
              }
              else if (labacts == 11)
              {
                     system("cls");
                     cout << "11. Problem 11: INHERITANCE: Employee with Subclasses (LAB6)" << endl;
                     cout << "==================================================================" << endl;
                     cout << "FOR REGULAR EMPLOYEES" << endl;
                     Regular_Employee newRE = Regular_Employee("Ryan", 1234, 200);
                     // this part is when the name and pin is required, but you are need to define what is your monthly because you are a regular employee.
                     newRE.getAttendance(); // you can still get the attendance method from the parent class
                     newRE.increaseSalary();
                     cout << "==================================================================" << endl;
                     cout << "FOR CONTRACTUAL EMPLOYEES" << endl;
                     int hoursWork;
                     cout << "Input Hours of work: ";
                     cin >> hoursWork;
                     Contractual_Employee newCE = Contractual_Employee("Manliclic", 8900, hoursWork, 512);
                     // this part is when the name and pin is required, but you are need to define what is your hours work and fixed rate per hour.
                     newCE.getAttendance();
                     newCE.computeSalary();
                     cout << "==================================================================" << endl;
                     cout << "MANLICLIC, MARK BERNARD A." << endl;
                     cout << "20191156555" << endl;
              }
              else if (labacts == 12)
              {
                     system("cls");
                     cout << "   12. Problem 12: POLYMORPHISM: Overloading Function (LAB7)" << endl;
                     Example NewExample;
                     cout << "======================================" << endl;
                     NewExample.payment(600);
                     cout << "======================================" << endl;
                     NewExample.payment(100, 200);
                     cout << "======================================" << endl;
                     NewExample.payment(100, 15000, 3);
                     cout << "======================================" << endl;

                     cout << "MANLICLIC, MARK BERNARD A." << endl;
                     cout << "20191156555" << endl;
              }
              else if (labacts == 13)
              {
                     system("cls");
                     cout << "   13. Problem 13: POLYMORPHISM: Overriding Function (LAB8)" << endl;
                     PNB newPNB;
                     BDO newBDO;
                     Bank newBank;
                     newBank.getInterest(10000, 12);
                     cout << "======================================" << endl;
                     newBDO.getInterest(10000, 12);
                     cout << "======================================" << endl;
                     newPNB.getInterest(10000, 12);
                     cout << "======================================" << endl;
              }

              else
              {
                     cout << "YOU WANT TO GO BACK [YES OR NO]?";
                     cin >> options;
              }

              cout << "main menu? [YES OR NO]?";
              cin >> options;
       } while (options == "YES" || options == "yes" || options == "Y");

       system("PAUSE");
};
