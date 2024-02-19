#include <iostream>
#include <vector>
#include <string>


using namespace std;


class task{
public:
	string description;
	bool completed;

	task(string des) : description(des), completed(false)
	{}
};

class todo{
private:
	vector<task>tasks;

public:
	void addtask(const string& description){
		tasks.push_back(task(description));
	}

	void removetask(int id){
		if (id >= 0 && id < tasks.size()){
			tasks.erase(tasks.begin() + id);
		}
	}

	void markascompleted(int id){
		if (id >= 0 && id < tasks.size()){
			tasks[id].completed = true;
		}
	}

	void showtasks(){
		if (tasks.empty()){
			cout << "No tasks. " << endl;
			return;
		}

		for (size_t i = 0; i < tasks.size(); ++i){
			cout << i + 1 << ". " << tasks[i].description << " - " << (tasks[i].completed ? "Completed" : "Pending") << endl;
		}
	}

};

int main(){


	todo Todolist;

	while (true){

		cout << endl;
		cout << "--------------------------";
		cout << endl;
		cout << "        TO-DO LIST        ";
		cout << endl;
		cout << "--------------------------" << endl;

		cout << "\n1. Add Task. " << endl;
		cout << "2. View Task. " << endl;
		cout << "3. Mark Task as Completed. " << endl;
		cout << "4. Remove Task. " << endl;
		cout << "5. End Task. " << endl;
		cout << "--------------------------" << endl;

		int choice;
		cout << "\nEnter your choice: ";
		cin >> choice;

		switch (choice){
		case 1:{
				   string description;
				   cout << "Enter task description: ";
				   cin.ignore();
				   getline(cin, description);
				   Todolist.addtask(description);
				   cout << "Task added successfully!" << endl;

				   break;
		}


		case 2:
			cout << "\nAll tasks: " << endl;
			Todolist.showtasks();
			break;

		case 3:{
				   int id;
				   cout << "Enter task number to mark as complete: ";
				   cin >> id;
				   Todolist.markascompleted(id - 1);
				   cout << "Task marked as completed." << endl;
				   break;
		}

		case 4: {
					int id;
					cout << "Enter task to remove: ";
					cin >> id;
					Todolist.removetask(id - 1);
					cout << "Task removed successfully." << endl;
					break;
		}
		case 5:
			cout << "Exiting..." << endl;
			return 0;
		default:
			cout << "Invalid choice. Please try again." << endl;



		}
	}

	system("pause");
	return 0;
}