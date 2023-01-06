#include <iomanip>
#include <iostream>
using namespace std;
#ifdef _WIN64
#include <windows.h>
#else
#include <unistd.h>
  #endif
 int main()
 {
   for (int sec = 10; sec < 11; sec--)
 {
      cout << setw(2) << sec;
      cout.flush();

      sleep(1);
      cout <<'\r';
      if (sec == 0)
      {
      cout << "hello akash mishra" << endl;
      cout<<"HAPPY BIRTHDAY TO YOU"<<endl;
      }
      if (sec <1)
      break;
    }
  }
