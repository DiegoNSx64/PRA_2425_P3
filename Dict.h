#ifndef DICT_H
#define DICT_H
#include <string>
using namespace std;

template <typename V> 
class Dict {
    public:
          virtual void insert(const string& key, const V& value) = 0;

   	  virtual V search(const string& key) const = 0;

   	  virtual V remove(const :!g++ -fsyntax-only Dict.hstring& key) = 0;

   	  virtual int entries() const = 0;
};

#endif
