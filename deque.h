class Node{
    public:
        int num;
        Node *next;
        Node *pre;
};

class queue {
	private:
		Node *head;
        Node *tail;
        int size;
		
    public:
        queue();
        ~queue();
        void enqueue_front(int i);
        void enqueue_back(int i);
        void dequeue_front();
        void dequeue_back();
		void clear();
		void front(int i);
        void back(int i);
		void empty();
		void sizeoflist();
		void print(); 
};
