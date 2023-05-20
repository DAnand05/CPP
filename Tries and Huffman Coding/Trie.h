#include<string>
using namespace std;

class TrieNode{
public:
    char data;              //to store the word;
    TrieNode** children;    //to store pointers of data
    bool isTerminal;        //to end a word;

    TrieNode(char data){
        this->data = data;
        children = new TrieNode*[26];
        isTerminal = false;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
    }
};

class Trie{
    TrieNode* root;

public:
    Trie(){
        root = new TrieNode('\0');
    }
private:

    void insertWord(TrieNode *root, string word){
        //base case
        if(word.length()==0){
            root->isTerminal = true;
            return;
        }

        // small calculation
        int index = word[0]-'a';
        TrieNode *child;
        if(root->children[index]!=NULL){
            child = root->children[index];
        }else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursive call
        insertWord(child, word.substr(1));
    }

    void removeWord(TrieNode *root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = false;
            return;
        }

        //small calculation
        int index = word[0]-'a';
        TrieNode *child;
        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            //word not found
            return;
        }

        //recursive call
        removeWord(child, word.substr(1));

        //remove child, if useless
        if(child->isTerminal == false){
            for(int i = 0; i < 26; i++){
                if(child->children[i] != NULL)
                    return;
            }
            delete child;
            root->children[index] = NULL;
        }
    }

    bool search(TrieNode *root, string word){
        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        //small Calculation
        int index = word[0]-'a';
        TrieNode *child;
        if(root->children[index] != NULL){
            child = root->children[index];
        }else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        return search(child, word.substr(1));
    }

public:
    void insertWord(string word){
        insertWord(root, word);
    }

    void removeWord(string word){
        removeWord(root, word);
    }

    bool search(string word){
        return search(root, word);
    }

};
