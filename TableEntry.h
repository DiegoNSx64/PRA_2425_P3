#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>
using namespace std;

template <typename V> 
class TableEntry {
    public:
        string key;
	V value;

	TableEntry(std::string key, V value){
	
		this->key = key;
		this->value = value;
	}

	TableEntry(std::string key){
	
		this->key = key;
		this->value = V();
	}

	TableEntry(){
	
		this->key = "";
		this->value = V();
	}

	friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2){
		return (te1.key == te2.key && te1.value == te2.value);
	
	}
	friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2){
	
		return !(te1 == te2);
	}
	friend ostream& operator<<(ostream &out, const TableEntry<V> &te){
	
		
                 out << "Key: " << te.key << ", Value: " << te.value;
                 return out;

	}
    
};

#endif
