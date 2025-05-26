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
in `lab_6.hpp
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
It's an example of Open/Closed Principle.