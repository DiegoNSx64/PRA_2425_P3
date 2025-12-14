#ifndef BSNODE_H
#define BSNODE_H

#include <ostream>
#include <iostream>
template <typename T> 
class BSNode {
    public:
        // miembros públicos
   	T elem;
	BSNode<T>* left;
	BSNode<T>* right;
	BSNode(T elem, BSNode<T>* left=nullptr, BSNode<T>* right=nullptr){
		this->elem = elem;
		this->left = left;
		this->right = right;
	}
	
	friend std::ostream& operator<<(std::ostream &out, const BSNode<T> &bsn){
		std::cout << bsn.elem << std::endl;
		return std::cout;
	} 
};

#endif
