//
// Created by Damir on 11/24/2021.
//

#include "TextPreprocessor.h"

TextPreprocessor::TextPreprocessor(string filename) {
  inFile.open(filename);
  if (!inFile.is_open()) {
    throw invalid_argument("File cannot be opened");
  }
}

TextPreprocessor::~TextPreprocessor() {
  inFile.close();
}
