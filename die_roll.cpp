#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main(int argc, char* argv[]){int d=(argc>1)?atoi(argv[1]):20;int n=(argc>2)?atoi(argv[2]):1;srand(time(NULL));while(n-->0){cout<<(n+1)<<": "<<(rand()%d+1)<<"\n";}}