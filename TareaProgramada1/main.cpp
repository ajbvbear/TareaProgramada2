/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Javier
 *
 * Created on 12 de mayo de 2018, 11:22 AM
 */

#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b) {
  T result;
  if (a >= b){
    result = a; 
  }else{
      result =b;
  }
  return (result);
}
//holi
int main () {
  int i=5, j=6, k;
  long l=10, m=5, n;
  k=GetMax<int>(i,j);
  n=GetMax<long>(l,m);
  cout << k << endl;
  cout << n << endl;
  return 0;
}