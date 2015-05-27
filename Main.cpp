#include <iostream>
#include <fstream>
#include "Util.h"
#include "Main.h"

using namespace std;

int main(int argc, char **argv)
{
  cerr << "Starting..." << endl;
  
  string input = "prepared.txt";
  ifstream in(input.c_str());
  
  string line;
  while (getline(in, line)) {
    
  }
  
  cerr << "Finished." << endl;
}


void ParseLine(const string& line,
              vector<unsigned>* src,
              vector<unsigned>* trg,
              Vocab &vocab) 
{
  static const unsigned kDIV = vocab.Convert("|||");
  static vector<unsigned> tmp;
  src->clear();
  trg->clear();
  vocab.ConvertWhitespaceDelimitedLine(line, &tmp);
  unsigned i = 0;
  while(i < tmp.size() && tmp[i] != kDIV) {
    src->push_back(tmp[i]);
    ++i;
  }
  if (i < tmp.size() && tmp[i] == kDIV) {
    ++i;
    for (; i < tmp.size() ; ++i)
      trg->push_back(tmp[i]);
  }
}
