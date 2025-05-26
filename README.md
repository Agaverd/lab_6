# lab_6

## SOLID Principles explanation

**S — Single Responsibility Principle**  
A class should have only one reason to change, meaning it should have only one job or responsibility.

**O — Open/Closed Principle**  
Software entities should be open for extension, but closed for modification.

**L — Liskov Substitution Principle**  
Objects of a superclass should be replaceable with objects of a subclass without affecting the correctness of the program. 

**I — Interface Segregation Principle**  
Clients should not be forced to depend on interfaces they do not use.

**D — Dependency Inversion Principle**  
High-level modules should not depend on low-level modules. Both should depend on abstractions. Abstractions should not depend on details; details should depend on abstractions.

## Usage in this code
### Open/Closed Principle
in `lab_6.hpp`
```
// Sorter
    class Sorter
    {
    public:
        Sorter(const SortingStrategy* strategy);
        void sortData(std::vector<int>& data) const;

    private:
        const SortingStrategy* strategy_;
    };
```
This is a sorter class, which getting a sorting strategy via parameters. So it lets me to make another strategy like std::sort like an another class and continue using my class `Sorter`
```
    // StdSort
    class StdSortStrategy : public SortingStrategy
    {
    public:
        void sort(std::vector<int>& data) const override;
    };
```
It's an example of Open/Closed Principle.

### Single Responsibility Principle
in `lab_6_test_.hpp`
```
    void print_vector(const std::vector<int>& data);
    bool is_equal(const std::vector<int>& data1, const std::vector<int>& data2);
```
These functions are responsible for printing a vector and checking equality of two vectors. Each of them has a single responsibility.
This is an example of Single Responsibility Principle.