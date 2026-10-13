class MyHashMap {
    int table[1000001];
public:
    MyHashMap() {
        fill(table, table + 1000001, -1);
    }
    void put(int key, int value) {
        table[key] = value;
    }
    int get(int key) {
        return table[key];
    }
    void remove(int key) {
        table[key] = -1;
    }
};