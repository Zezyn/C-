#include<iostream>
#include<string>
#include<ctime>

using namespace std;

const int TABLE_SIZE = 128;
const unsigned SALT = time(0);

unsigned hash_function(unsigned SALT,const char* s)
{
  unsigned h = SALT;
  while (*s)
      h = h * 101 + static_cast<unsigned>(*s++);
  return h;
}

class HashMapNode {
    private:
      unsigned key;
      int value;
    public:
      HashMapNode(unsigned _key, int _value) {
            key = _key;
            value = _value;
      }
 
      int get_key() {
            return key;
      }
 
      int get_value() {
            return value;
      }
};

 
class HashMap {
    private:
      HashMapNode **buckets;
    public:
      HashMap() {
            buckets = new HashMapNode*[TABLE_SIZE];
            for (int i = 0; i < TABLE_SIZE; i++)
                  buckets[i] = NULL;
      }

      int get(unsigned key) {
            int hash = (key % TABLE_SIZE);
            while (buckets[hash] != NULL && buckets[hash]->get_key() != key)
                  hash = (hash + 1) % TABLE_SIZE;
            if (buckets[hash] == NULL)
                  return -1;
            else
                  return buckets[hash]->get_value();
      }
 
      int get(string key) {
            unsigned hash_key = hash_function(SALT,key.c_str());
            int hash = (hash_key % TABLE_SIZE);
            while (buckets[hash] != NULL && buckets[hash]->get_key() != hash_key)
                  hash = (hash + 1) % TABLE_SIZE;
            if (buckets[hash] == NULL)
                  return -1;
            else
                  return buckets[hash]->get_value();
      }

      void put(unsigned key, int value) {
            int hash = (key % TABLE_SIZE);
            while (buckets[hash] != NULL && buckets[hash]->get_key() != key)
                  hash = (hash + 1) % TABLE_SIZE;
            if (buckets[hash] != NULL)
                  delete buckets[hash];
            buckets[hash] = new HashMapNode(key, value);
      }     
 
      void put(string key, int value) {
            unsigned hash_key = hash_function(SALT,key.c_str());
            int hash = (hash_key % TABLE_SIZE);
            while (buckets[hash] != NULL && buckets[hash]->get_key() != hash_key)
                  hash = (hash + 1) % TABLE_SIZE;
            if (buckets[hash] != NULL)
                  delete buckets[hash];
            buckets[hash] = new HashMapNode(hash_key, value);
      }     
 
      ~HashMap() {
            for (int i = 0; i < TABLE_SIZE; i++)
                  if (buckets[i] != NULL)
                        delete buckets[i];
            delete[] buckets;
      }
};


int main()
{ 

    cout << "One: " << hash_function(0,"one") << "|" << hash_function(0,"one")%TABLE_SIZE << endl;
    cout << "Two: " << hash_function(0,"two") << "|" << hash_function(0,"two")%TABLE_SIZE << endl;
/*
   HashMap h;

   h.put("one",10);
   h.put("two",20);
   h.put("three",30);
   h.put("three",40);
   h.put("three",45);
   h.put("four",40);
   h.put("five",50);
   h.put("six",60);
   h.put("seven",70);
   cout << h.get("one") << endl;
   cout << h.get("two") << endl;
   cout << h.get("three") << endl;
   cout << h.get("four") << endl;
   cout << h.get("five") << endl;
   cout << h.get("six") << endl;
   cout << h.get("seven") << endl;
  */ return 0;
}
