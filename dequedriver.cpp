#include <iostream>
#include "deque.cpp"
#include <string>

int main(){
	std::string command;
	int input;
	queue list;
	while (1){
		std::cin >> command;
		if (command=="enqueue_front"){
			std::cin >> input;
			list.enqueue_front(input);
		}else if(command=="enqueue_back"){
			std::cin >> input;
			list.enqueue_back(input);
		}else if(command=="dequeue_front"){
			try{
				list.dequeue_front();
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="dequeue_back"){
			try{
				list.dequeue_back();
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="clear"){
			try{
				list.clear();
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="front"){
			std::cin >> input;
			try{
				list.front(input);
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="back"){
			std::cin >> input;
			try{
				list.back(input);
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="empty"){
			try{
				list.empty();
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="size"){
			try{
				list.sizeoflist();
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="print"){
			try{
				list.print();
			}
			catch(const char *signal){
				std::cout << signal << std::endl;
			}
		}else if(command=="exit"){
			return 0;
		}else{
			std::cout << "wrong command" << std::endl;
		}
	}
	return 0;
}
