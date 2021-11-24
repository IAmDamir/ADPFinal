//
// Created by Damir on 11/24/2021.
//

#pragma once
#ifndef UNTITLED2_TEXTPREPROCESSOR_H
#define UNTITLED2_TEXTPREPROCESSOR_H

#include <string>
#include <fstream>

using namespace std;

class TextPreprocessor {
public:
  TextPreprocessor(string filename);
  ~TextPreprocessor();

private:
  ifstream inFile;
  string processedText;
};


#endif //UNTITLED2_TEXTPREPROCESSOR_H
