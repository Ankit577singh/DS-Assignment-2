// leetcode Username-ankit__singh__  //

class BrowserHistory {
private:
    vector<string> hist;
    int curr;
public:
    BrowserHistory(string homepage) {
        hist.push_back(homepage);
        curr = 0;
    }
    
    void visit(string url) {
        hist.resize(curr + 1);
        hist.push_back(url);
        curr = hist.size() - 1;
    }
    
    string back(int steps) {
        curr = max(0, curr - steps);
        return hist[curr];
    }
    
    string forward(int steps) {
        curr = min(static_cast<int>(hist.size()) - 1, curr + steps);
        return hist[curr];
    }
};