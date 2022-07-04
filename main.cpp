#include <iostream>

using namespace std;

int main() {
  int vector[] = {1, 7, 3, 8, 3, 7, 1};

  bool ispalindrome = true;

  int n  = sizeof(vector) / sizeof(vector[9]);

  for(int dec = 6, inc = 0; dec > 0; dec--, inc++){
    if(vector[inc] != vector[dec]){
      ispalindrome = false;
    }
  }

  if(ispalindrome)
    cout << "It's a palindrome";
  else
    cout << "It's not a palindrome";
  cout << endl;
  return 0;
} 