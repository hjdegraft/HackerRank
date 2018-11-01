#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
    
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
    
        Student(
            string firstName, string lastName, int id, vector<int> scores
        	):Person(firstName, lastName, id) // since only the base has access to its protected memebers
        {
            firstName = firstName; // set the base's protected members to vars called via the derived constructor
            lastName = lastName;
            id = id; 
            
            testScores = scores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate () {
            int sum = 0;
            int average;
            char grade;
            
            for (int i = 0; i < testScores.size(); i++) {
                sum = testScores[i]+sum;
            }
  
            average = sum/testScores.size();
            
            if (average < 40) {
                grade = 'T';
            } else if ((average >= 40) && (average < 55)){
                grade = 'D';
            } else if ((average >= 55) && (average < 70)) {
                grade = 'P';
            } else if ((average >= 70) && (average < 80)) {
                grade = 'A';
            } else if ((average >= 80) && (average < 90)) {
                grade = 'E';
            } else if ((average >= 90) && (average <= 100)) {
                grade = 'O';
            }
            
            return grade;
        }
};
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
