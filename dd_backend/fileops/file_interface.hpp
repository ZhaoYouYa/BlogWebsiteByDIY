#include <bits/types/FILE.h>
#include <string>
#include <vector>

struct Dir {
    std::string _name;
    std::vector<std::string> _files;
    std::vector<Dir> _dirs;
};

class FileInterFace {

public:
  FileInterFace(const std::string &file_root_) : _file_root(file_root_) {}

  const Dir getDirTree(){ 
    return Dir();
  }

  const std::string getFileContent(const std::string& path_) {
    return  std::string();
  }
  

private:
  std::string _file_root;
};