// Compile with:
// g++ -std=c++17 pointers.cpp -o prog
#include <iostream>
using namespace std;

int main(){

  // Pointers can be tricky.
  // 
  // Feel free to use tools like valgrind and gdb to help you debug.
  int* px = nullptr;

  int x = 100;
  px = &x;

  cout << "px deref is = " << *px << endl;
 
  *px = 200;
  
  cout << "px deref is = " << *px << endl;



	return 0;
}

// Pointers can be 'Tricksy' sometimes--so practice now!
// https://www.asciiart.eu/books/lord-of-the-rings
//         .';:;'.
//        /_' _' /\   __
//        ;a/ e= J/-'"  '.
//        \ ~_   (  -'  ( ;_ ,.
//         L~"'_.    -.  \ ./  )
//         ,'-' '-._  _;  )'   (
//       .' .'   _.'")  \  \(  |
//      /  (  .-'   __\{`', \  |
//     / .'  /  _.-'   "  ; /  |
//    / /    '-._'-,     / / \ (
// __/ (_    ,;' .-'    / /  /_'-._
// `"-'` ~`  ccc.'   __.','     \j\L\
//                 .='/|\7      
//     snd           ' `
