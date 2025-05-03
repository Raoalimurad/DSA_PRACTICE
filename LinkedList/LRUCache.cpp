class LRUCache {
    ///least recent use
    public:
        class Node{
            public:
             int key,val;
             Node* next;
             Node* prev;
             Node(int k,int v){
                key = k;
                val = v;
                next = prev = NULL;
             }
        };
        Node* head = new Node(-1,-1); /// dummy Nodes
        Node* tail = new Node(-1,-1);
        unordered_map<int,Node*>m;
        int limit;
        //  add Node 
         void addNode(Node* newNode){
            Node* oldNode = head->next;
             head->next = newNode;
             newNode->next = oldNode;
             newNode->prev = head;
             oldNode->prev = newNode;
         }
        //  delete NODE;
        void delNode(Node* oldNode){
            Node* oldPrev = oldNode->prev;
            Node* oldNext = oldNode->next;
            oldPrev->next  = oldNext;
            oldNext->prev = oldPrev;
        }
    
       
        LRUCache(int capacity) {
             head->next = tail;
             tail->prev = head;
             limit = capacity;
        }
        
        int get(int key) {
            if(m.find(key) == m.end()){
                return -1;
            }
            Node* ansNode = m[key];
            int ans = ansNode->val;
             m.erase(key);
             delNode(ansNode);
             addNode(ansNode);
             m[key] = ansNode;
    
            return ans;
        }
        
        void put(int key, int value) {
            if(m.find(key) != m.end()){
                Node* findNode = m[key];
                m.erase(key);
                delNode(findNode);
            }
            // check limit
            if(m.size() == limit){
                m.erase(tail->prev->key);
                delNode(tail->prev);
            }
            Node* newNode = new Node(key,value);
            addNode(newNode);
            m[key] = newNode;
        }
    };
    
    /**
     * Your LRUCache object will be instantiated and called as such:
     * LRUCache* obj = new LRUCache(capacity);
     * int param_1 = obj->get(key);
     * obj->put(key,value);
     */