// a] 1) ask name? 2) ask age? 3) Grade?
// b] 1) choose class timing eg: 2: pm, then give clas link!
// c] 1) after the class ask rating
// d] 1) then show subcription
// e] 1) then show bill

// 3 categeory - 1) 3 to 5, 2) 6 to 8 3) 9 to 12+
#include <iostream> // c #include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

// #imp Global declaration

int yrage, yrclass, yrrating, password = 765432, newpassword, confirmpassword;
string yrname, username = "test1234", newusername;
char inputrating, inputsubscription, inputplans;

// #1 Ask personal details:

void askpersonaldetails()
{
  cout << "\n\nPersonal Details: " << endl;
  cout << "Name: ";
  getline(cin, yrname);
  cout << "Age: ";
  cin >> yrage;
  cout << "Class (in number): ";
  cin >> yrclass;
}
// printf(""); scanf("");
// #2 time slots to book demo class

int classtimeslots(int yrclass)
{
  string inputslots;
  int inputswislots;
  if (yrclass >= 3 && yrclass <= 5)
  {
    cout << "\n\nCongrats you're in Little champ" << endl;
    cout << "Now press 'ok' to select time slots!\n: ";
    cin >> inputslots;

    if (inputslots == "ok" || inputslots == "OK" || inputslots == "Ok" || inputslots == "oK")
    {
      cout << "Success, Available Slots are:\n1) 2:30 PM\n2) 6:00 PM\n3) 9:00 PM\n: ";
      cin >> inputswislots;
      switch (inputswislots)
      {
      case 1:
        cout << "\n\n>Congrat's " << yrname << "\n> You're 2:30 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%2%30pm\n*Enjoy your class:)" << endl;
        break;
      case 2:
        cout << "\n\n> Congrat's " << yrname << "\n> You're 6:00 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%6pm\n*Enjoy your class:)" << endl;
        break;
      case 3:
        cout << "\n\n> Congrat's " << yrname << "\n> You're 9:00 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%9pm\n*Enjoy your class:)" << endl;
        break;
      }
    }
  }
  else if (yrclass >= 6 && yrclass <= 8)
  {
    cout << "\n\nCongrats you're in Junior champ" << endl;
    cout << "Now press 'ok' to select time slots!\n: ";
    cin >> inputslots;

    if (inputslots == "ok" || inputslots == "OK" || inputslots == "Ok" || inputslots == "oK")
    {
      cout << "Success, Available Slots are:\n1) 10:00 AM\n2) 6:00 PM\n3) 9:00 PM\n: ";
      cin >> inputswislots;
      switch (inputswislots)
      {
      case 1:
        cout << "\n\n>Congrat's " << yrname << "\n> You're 10:00 AM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%10%00pm\n*Enjoy your class:)" << endl;
        break;
      case 2:
        cout << "\n\n> Congrat's " << yrname << "\n> You're 6:00 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%6pm\n*Enjoy your class:)" << endl;
        break;
      case 3:
        cout << "\n\n> Congrat's " << yrname << "\n> You're 9:00 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%9pm\n*Enjoy your class:)" << endl;
        break;
      }
    }
  }

  else if (yrclass >= 9 && yrclass <= 12)
  {
    cout << "\n\nCongrats you're in Senior champ" << endl;
    cout << "Now press 'ok' to select time slots!\n: ";
    cin >> inputslots;

    if (inputslots == "ok" || inputslots == "OK" || inputslots == "Ok" || inputslots == "oK")
    {
      cout << "Success, Available Slots are:\n1) 2:30 PM\n2) 6:00 PM\n3) 9:00 PM\n: ";
      cin >> inputswislots;
      switch (inputswislots)
      {
      case 1:
        cout << "\n\n>Congrat's " << yrname << "\n> You're 2:30 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%2%30pm\n*Enjoy your class:)" << endl;
        break;
      case 2:
        cout << "\n\n> Congrat's " << yrname << "\n> You're 6:00 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%6pm\n*Enjoy your class:)" << endl;
        break;
      case 3:
        cout << "\n\n> Congrat's " << yrname << "\n> You're 9:00 PM slot is Confirmed\n> Joining Link: https://meeting.com.aid/%%class%9pm\n*Enjoy your class:)" << endl;
        break;
      }
    }
  }

  else
  {
    cout << "Sorry, wrong input pls try again";
  }

  cout << "\n\nNext: Enter n or y to proceed\n: ";
  cin >> inputrating;
  return 0;
}

// #3 After demo rating

int askrating(int inputrating)
{
  if (inputrating == 'y' || inputrating == 'Y')
  {

    cout << "How was the class?\nPlease rate from 1 to 10\n: ";
    cin >> yrrating;

    if (yrrating >= 1 && yrrating <= 5)
    {
      cout << "Thank you, we're improving our services!";
    }
    else if (yrrating >= 6 && yrrating <= 10)
    {
      cout << "Thank you, we apriciate your rating!:)";
    }
    cout << "\nNext: Press y / n to view plans!";
    cin >> inputsubscription;
  }
  return 0;
}

// #4 after rating subscription
int asksubcription(char inputsubscription)
{

  if (inputsubscription == 'y' || inputsubscription == 'Y')
  {
    cout << "Latest Plan's (20% OFF)\n* Basic:\n33 Class\nAi & ML\n Special Price 25,999/-\n\n* INtermidiate:\n66 Class\nAi & ML\n Special Price 89,999/-\n\n* Pro:\n120 Class\nAi & ML\n Special Price 1,29,999/-\n\n";
    cout << "Do you want to proceed? (y/n)";
    cin >> inputplans;
  }
  return 0;
}

int subcriptioncredentials(int inputplans)
{
  char inputaccount, inputselectplan;
  int forgotpass, basicplan, interplan, proplan;

  basicplan = 25999 + 0.18;
  interplan = 89999 + 0.18;
  proplan = 129999 + 0.18;

  if (inputplans == 'y' || inputplans == 'Y')
  {
    cout << "You've chosen to procced :)\n* Test Credential\n>Username: test1234\nPassword: 7654321\n\nPlese aknowledge is your account is their or not! (y/n)\n: ";
    cin >> inputaccount;

    if (inputaccount == 'y' || inputaccount == 'Y')
    {
      cout << "Username: " << endl;
      cin >> username;
      cout << "Password: " << endl;
      cin >> password;

      if (username == "test1234" && password == 7654321)
      {
        cout << "Congr's You've entered in your account";
        cout << "\tPLEASE SELECT PLAN\na) Basic\nb) Intermidiate\nc) Pro\n: ";
        cin >> inputselectplan;
        if (inputselectplan == 'a')
        {
          cout << "You've Selected Basic";
          cout << "\t******BILL:*******\nName: " << yrname << "\nAge: " << yrage << "\n Class: " << yrclass << "\nTotal: " << basicplan;
        }
        if (inputselectplan == 'b')
        {
          cout << "You've Selected Intermidiate";
          cout << "\t******BILL:*******\nName: " << yrname << "\nAge: " << yrage << "\n Class: " << yrclass << "\nTotal: " << interplan;
        }
        if (inputselectplan == 'c')
        {
          cout << "You've Selected Pro";
          cout << "\t******BILL:*******\nName: " << yrname << "\nAge: " << yrage << "\n Class: " << yrclass << "\nTotal: " << proplan;
        }
      }
    }

      // $New account


      if (inputaccount == 'n' || inputaccount == 'N')
      {
        cout << "Create your account:\nUsername: ";
        cin >> newusername;
        cout << "Password: " << endl;
        cin >> newpassword;
        cout << "Confirm Password: " << endl;
        cin >> confirmpassword;

        if (newpassword == confirmpassword)
        {
          cout << "Congrat's You've created your account\nSee your credentials:\nUsername: " << newusername << "\nPassword: " << confirmpassword << endl;
          cout << "\tPLEASE SELECT PLAN\na) Basic\nb) Intermidiate\nc) Pro\n: ";
          cin >> inputselectplan;
           if (inputselectplan == 'a')
        {
          cout << "You've Selected Basic";
          cout << "\t******BILL:*******\nName: " << yrname << "\nAge: " << yrage << "\n Class: " << yrclass << "\nTotal: " << basicplan;
        }
        if (inputselectplan == 'b')
        {
          cout << "You've Selected Intermidiate";
          cout << "\t******BILL:*******\nName: " << yrname << "\nAge: " << yrage << "\n Class: " << yrclass << "\nTotal: " << interplan;
        }
        if (inputselectplan == 'c')
        {
          cout << "You've Selected Pro";
          cout << "\t******BILL:*******\nName: " << yrname << "\nAge: " << yrage << "\n Class: " << yrclass << "\nTotal: " << proplan;
        }
        }
      }
  }
  return 0;
}

int main()
{
  cout << "Welcome to Anish Aceademy!\nBook your demo class..";
  askpersonaldetails();
  classtimeslots(yrclass);
  askrating(inputrating);
  asksubcription(inputsubscription);
  subcriptioncredentials(inputplans);

  cout<<"\n\nTHANK YOU FOR USING OUR SERVICES!\nWE'RE IMPROVING DAILY:)";
  return 0;
}