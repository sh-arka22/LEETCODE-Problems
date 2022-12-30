class Foo {
public:
    mutex m1, m2;
    Foo() {
        m1.lock(), m2.lock();
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        m1.unlock();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        m1.lock();
        printSecond();
        m2.unlock();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        m2.lock();
        printThird();
        m2.unlock();
    }
};