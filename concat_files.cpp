#include "concat_files.h"

#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> readlines(const string& fname) {
  ifstream file(fname);
  vector<string> lines;
  string line;
  while(getline(file, line)) {
    lines.push_back(line);
  }
  return lines;
}

void concatFiles(const string& in_fname, const string& out_fname) {
  vector<string> lines = readlines(in_fname);
  string line;
  ofstream out(out_fname);
  for(int i = 0; i < lines.size(); i++) {
    ifstream file(lines.at(i));
    while(getline(file, line)) {
      out << line << endl;
    }

  }

}

int main() {
  // TODO student: Add manual testing code, if desired
  return 0;
}
