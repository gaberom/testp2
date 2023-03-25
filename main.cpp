#include <iostream>
#include <string>
using namespace std;

extern void test_seq_assembly();
extern void test_3(const string & method);

int main(int argc, const char * argv[])
{
   test_seq_assembly();
   return 0;
}
