#include <vector>

template<typename K,typename V>
class Skiplist;

//Class template to implement node
template<typename K, typename V> 
class Node {

public:
    
    Node() {} 

    Node(K k, V v, int); 

    ~Node();

    K get_key() const;

    V get_value() const;

    void set_value(V);
    
    // Linear array to hold pointers to next node of different level
    //Node<K, V> **next;
    std::vector<Node<K, V>*> next;

    int node_level;

private:
    K key;
    V value;
};

template<typename K, typename V> 
Node<K, V>::Node(const K k, const V v, int level) : key(k), value(v), node_level(level), next(level + 1, 0){
    //
    //this->key = k;
    //this->value = v;
    //this->node_level = level; 

    // level + 1, because array index is from 0 - level
    //this->next = new Node<K, V>*[level+1];
    //next = std::vector<(Node<K, V>)*>(level + 1, 0);
    
	// Fill next array with 0(NULL) 
    //memset(this->next, 0, sizeof(Node<K, V>*)*(level+1));
};

template<typename K, typename V> 
Node<K, V>::~Node() {
};

template<typename K, typename V> 
K Node<K, V>::get_key() const {
    return key;
};


template<typename K, typename V> 
V Node<K, V>::get_value() const {
    return value;
};
template<typename K, typename V> 
void Node<K, V>::set_value(V value) {
    this->value=value;
};
