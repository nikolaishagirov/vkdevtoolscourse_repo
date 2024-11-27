#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::cout<<"The program is started...\n";
    for(int i=0; i<10; i++)
        std::cout<<"Hello world!\n";

    std::cout<<"std::vector usage: \n";
    std::vector<int> data;
    data.push_back(1);
    data.push_back(2);
    std::cout<<"Size: "<<data.size()<<"\t"<<"Capacity: "<<data.capacity()<<"\n";
    data.push_back(3);
    std::cout<<"Size: "<<data.size()<<"\t"<<"Capacity: "<<data.capacity()<<"\n";
    data.push_back(4);
    std::cout<<"Size: "<<data.size()<<"\t"<<"Capacity: "<<data.capacity()<<"\n";
    data.push_back(5);
    std::cout<<"Size: "<<data.size()<<"\t"<<"Capacity: "<<data.capacity()<<"\n";
    data.reserve(data.size());
    std::cout<<"Size: "<<data.size()<<"\t"<<"Capacity: "<<data.capacity()<<"\n";
    for(int elem: data) {
        std::cout<<elem<<" ";
    }
    std::cout<<"\n";
    std::sort(data.rbegin(), data.rend());
    for(int elem: data) {
        std::cout<<elem<<" ";
    }
    std::cout<<"\n";
    while(!data.empty()) {
        data.pop_back();
    }
    std::cout<<"Size: "<<data.size()<<"\t"<<"Capacity: "<<data.capacity()<<"\n";

    std::cout<<"std::list usage: \n";
    std::list<int> l = {10,15,20};
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    l.push_front(5);
    l.push_front(0);
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    l.push_back(25);
    l.push_back(30);
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    l.pop_front();
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    l.pop_back();
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    auto iter = l.begin();
    ++iter;
    l.insert(iter,4);
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    for(auto iter = l.begin(); iter!=l.end();) {
        if(*iter%2==0) {
            iter = l.erase(iter);
        } else {
            ++iter;
        }
    }
    for(int x: l) {
        std::cout<<x<<" ";
    }
    std::cout<<"\n";

    std::cout<<"VK is a good company\n";
    std::cout<<"The program is finished\n";
    return 0;
}