// thread_safe_vector.hpp: starter code -- please refer to in-class example for ThreadSafeQueue

template<typename T>
class ThreadSafeVector
{
public:
    void push_back(const T& value);
    bool empty() const;
    bool try_pop_back(T& popped_value);
    void wait_and_pop_back(T& popped_value);

private:
    std::vector<T> the_vector;
    mutable std::mutex the_mutex;
    std::condition_variable the_condition_variable;
};