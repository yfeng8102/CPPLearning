typedef int Rank;
#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
protected:
    Rank_size;
    int _capacity;
    T* _elem;

    void copyFrom (T const* A, Rank lo, Rank hi); // copy interval of [lo, hi)
    void expand(); // expand
    void shrink(); // shrink
    bool bubble (Rank lo, Rank hi); // swap for bubble sort
    void bubbleSort (Rank lo, Rank hi); // bubble sort
    Rank max (Rank lo, Rank hi); // maximum
    void selectionSort (Rank lo, Rank hi); // selection sort
    void merge (Rank lo,  Rank mi, Rank hi); // merge for merge sort
    void mergeSort (Rank lo, Rank hi); // merge sort
    Rank partition (Rank lo, Rank hi); // 
    void quickSort (Rank lo, Rank hi); // quick sort
    void heapSort (Rank lo, Rank hi); // heap sort

public:
    // constructors
    Vector (int c = DEFAULT_CAPACITY, int s = 0, T v = 0);
    Vector (T const* A, Rank n);
    Vector (T const* A, Rank lo, Rank hi);
    Vector (Vector<T> const& V);
    Vector (Vector<T> const& V, Rank lo, Rank hi);
    // destructor
    ~Vector();
    // member functions
    // readable only
    Rank size() const; // return size
    bool empty() const; // is empty
    int disordered() const; // is ordered
    Rank find (T const& e) const; // find all in disordered vector
    Rank find (T const& e, Rank lo, Rank hi) const; // find interval of disordered vector
    Rank search (T const& e) const; // find all in ordered vector
    Rank search (T const& e, Rank lo, Rank hi) const; // find interval of ordered vector
    // writable
    T& operator[] (Rank r) const; // 
    Vector<T>& operator= (Vector<T> const&); //
    T remove (Rank r); // remove r
    int remove (Rank lo, Rank hi); // remove interval
    Rank insert (Rank r, T const& e); // insert element at r
    Rank insert (T const& e); // insert at end
    void sort (Rank lo, Rank hi); // sort between [lo, hi)
    void sort(); // sort for all
    void unsort (Rank lo, Rank hi); // unsort in [lo, hi)
    void unsort(); // unsort all
    int deduplicate(); // deduplicate for disordered vector
    int uniquify(); // deduplicate for ordered vector
    // traverse
    void traverse (void (*) (T&)); // traverse using function pointer
    template <typename VST> void traverse (VST&); // traverse using function object
};
