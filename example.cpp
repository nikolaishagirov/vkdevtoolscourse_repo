#include <iostream>
#include <vector>
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


    std::cout<<"VK is a good company\n";
    std::cout<<"The program is finished\n";
    return 0;
}