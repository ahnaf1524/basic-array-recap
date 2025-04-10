#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// 1. Check if all elements are the same
bool allElementsSame(const vector<int>& arr) {
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] != arr[0]) return false;
  }
  return true;
}

// 2. Check if array is strictly increasing or decreasing
string checkStrictOrder(const vector<int>& arr) {
  bool increasing = true, decreasing = true;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] <= arr[i - 1]) increasing = false;
    if (arr[i] >= arr[i - 1]) decreasing = false;
  }

  if (increasing)
    return "Strictly Increasing";
  else if (decreasing)
    return "Strictly Decreasing";
  else
    return "Neither";
}

// 3. Check if an array is a palindrome
bool isPalindrome(const vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n / 2; i++) {
    if (arr[i] != arr[n - i - 1]) return false;
  }
  return true;
}

// 4. Count how many elements are greater than their neighbors
int countGreaterThanNeighbors(const vector<int>& arr) {
  int count = 0;
  for (int i = 1; i < arr.size() - 1; i++) {
    if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
      count++;
    }
  }
  return count;
}

// 5. Count how many elements are prime numbers
bool isPrime(int num) {
  if (num <= 1) return false;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

int countPrimes(const vector<int>& arr) {
  int count = 0;
  for (int val : arr) {
    if (isPrime(val)) count++;
  }
  return count;
}

int main() {
  vector<int> arr = {2, 3, 5, 7, 6, 5, 3, 2};

  cout << "All elements same? " << (allElementsSame(arr) ? "Yes" : "No")
       << endl;
  cout << "Strict order? " << checkStrictOrder(arr) << endl;
  cout << "Is palindrome? " << (isPalindrome(arr) ? "Yes" : "No") << endl;
  cout << "Greater than neighbors count: " << countGreaterThanNeighbors(arr)
       << endl;
  cout << "Prime numbers count: " << countPrimes(arr) << endl;

  return 0;
}
