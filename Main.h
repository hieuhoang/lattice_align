#pragma once

#include "Vocab.h"

void ParseLine(const std::string& line,
              std::vector<unsigned>* src,
              std::vector<unsigned>* trg,
              Vocab &vocab);

              