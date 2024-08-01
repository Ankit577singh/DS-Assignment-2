// leetcode Username-ankit__singh__  //

class RandomizedSet {
private:
    map<int, int> a;   
    vector<int> b;    

public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (a.find(val) != a.end()) {
            return false;
        }
        b.push_back(val);
        a[val] = b.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (a.find(val) == a.end()) {
            return false;
        }
        int le = b.back();
        int idx = a[val];
        b[idx] = le;
        a[le] = idx;
        b.pop_back();
        a.erase(val);
        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % b.size();
        return b[randomIndex];
    }
};
