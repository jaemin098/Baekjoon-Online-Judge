#include <iostream>

using namespace std;

int main() {
  int y;
  cin >> y;
  
  string winners[3] = {"ITMO", "SPbSU", "PetrSU"};
  
  if(y == 1995 || y == 1998 || y == 1999 || y == 2001 ||
     y == 2002 || y == 2003 || y == 2004 || y == 2005 ||
     y == 2006 || y == 2009 || y == 2010 || y == 2011 ||
     y == 2012 || y == 2014 || y == 2015 || y == 2016 ||
     y == 2017 || y == 2019) {
    if(y == 2006) {
      cout << winners[2] << ", " << winners[0] << endl;
    }
    else {
      cout << winners[0] << endl;
    }
  }
  else if(y == 1996 || y == 1997 || y == 2000 || y == 2007 ||
          y == 2008 || y == 2013 || y == 2018) {
    cout << winners[1] << endl;
  }
  
  return 0;
}
