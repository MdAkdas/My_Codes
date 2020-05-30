/* mplement a trie with insert, search, and startsWith methods.

Example:

Trie trie = new Trie();

trie.insert("apple");
trie.search("apple");   // returns true
trie.search("app");     // returns false
trie.startsWith("app"); // returns true
trie.insert("app");   
trie.search("app");     // returns true */

class node
{
public:
    char data;
    unordered_map<char, node *> children;
    bool terminal;

    node(char d)
    {
        data = d;
        terminal = false;
    }

    ~node();
};

class Trie {
    
    node *root;
    int cnt;

public:
    Trie()
    {
        root = new node('\0');
        cnt = 0;
    }
    void insert(string w)
    {
        node *temp = root;
        for (int i = 0; w[i] != '\0'; i++)
        {
            char ch = w[i];
            if (temp->children.count(ch))
            {
                temp = temp->children[ch];
            }
            else
            {
                node *n = new node(ch);
                temp->children[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }

    bool search(string w)
    {
        node *temp = root;

        for (int i = 0; w[i] != '\0'; i++)
        {
            char ch = w[i];
            if (temp->children.count(ch) == 0)
            {
                return false;
            }
            else
            {
                temp = temp->children[ch];
            }
        }
        return temp->terminal;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string w) {
        
         node *temp = root;

        for (int i = 0; w[i] != '\0'; i++)
        {
            char ch = w[i];
            if (temp->children.count(ch) == 0)
            {
                return false;
            }
            else
            {
                temp = temp->children[ch];
            }
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */