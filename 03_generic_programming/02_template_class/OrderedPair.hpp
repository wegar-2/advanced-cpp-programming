#ifndef ORDEREDPAIR_HPP
#define ORDEREDPAIR_HPP

template <typename T1, typename T2>
class OrderedPair {
public:
    OrderedPair();
    OrderedPair(T1 arg1, T2 arg2);
    ~OrderedPair();
    void SetElements(T1 arg1, T2 arg2);
    void DisplayElements() const;
private:
    T1* FirstElement;
    T2* SecondElement;
};

#endif // ORDEREDPAIR_HPP
