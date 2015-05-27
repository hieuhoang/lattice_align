#pragma once

#include <string>
#include <vector>

class Vocab
{
public:
  unsigned Convert(const std::string& word, bool frozen = false);
  void ConvertWhitespaceDelimitedLine(const std::string& line, std::vector<unsigned>* out);


};
