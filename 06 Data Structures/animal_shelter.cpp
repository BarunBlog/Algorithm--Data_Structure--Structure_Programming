// Problem: An animal shelter, which holds only dogs and cat, operates on a strictly "first in first out" basis. People must adopt either the "oldest" (based on
// arrival time) of all animals at the shelter, or they can select dog or a cat.
// Create functions like enqueue, dequeueAny, dequeueDog, dequeueCat. You may use LinkedList data structure

#include<bits/stdc++.h>
using namespace std;

class AnimalNode {
    public:
        int animalId;
        string animalType;
        AnimalNode* next;

        AnimalNode(int id, string animal) {
            animalId = id;
            animalType = animal;
            next = NULL;
        }
};

class MyQueue {
    public:
        
        AnimalNode* front;
        AnimalNode* rear;
    
        MyQueue() {
            front = NULL;
            rear = NULL;
        }

        void enqueue(int id, string animal) {
            AnimalNode* newAnimal = new AnimalNode(id, animal);

            if (front == NULL) {
                front = newAnimal;
            } else {
                rear->next = newAnimal;
            }

            rear = newAnimal;
        }

        AnimalNode* dequeueAny() {
            AnimalNode* temp = front;
            front = front->next;
            return temp;
        }

        // function to remove oldest dog
        AnimalNode* dequeueDog() {
            AnimalNode* currentAnimal = front;

            if (front->animalType == "Dog") {
                front = front->next;
                return currentAnimal;
            }

            AnimalNode* prevAnimal = currentAnimal;
            currentAnimal = currentAnimal->next;
            
            while(currentAnimal != NULL) {
                if (currentAnimal->animalType == "Dog") {
                    prevAnimal->next = currentAnimal->next;
                    return currentAnimal;
                }
                prevAnimal->next = currentAnimal;

                prevAnimal = prevAnimal->next;
                currentAnimal = currentAnimal->next;
            }

            cout<<"Dog not found in the queue"<<endl;
            return NULL;
        }

        // function to remove oldest cat
        AnimalNode* dequeueCat() {
            AnimalNode* currentAnimal = front;

            if (front->animalType == "Cat") {
                front = front->next;
                return currentAnimal;
            }

            AnimalNode* prevAnimal = currentAnimal;
            currentAnimal = currentAnimal->next;
            
            while(currentAnimal != NULL) {
                if (currentAnimal->animalType == "Cat") {
                    prevAnimal->next = currentAnimal->next;
                    return currentAnimal;
                }
                prevAnimal->next = currentAnimal;
                
                prevAnimal = prevAnimal->next;
                currentAnimal = currentAnimal->next;
            }

            cout<<"Cat not found in the queue"<<endl;
            return NULL;
        }
};

int main() {
    MyQueue mq;
    mq.enqueue(1, "Cat");
    mq.enqueue(2, "Cat");
    mq.enqueue(3, "Dog");
    mq.enqueue(4, "Cat");
    mq.enqueue(5, "Dog");

    AnimalNode* animal;
    
    animal = mq.dequeueAny();
    cout<<animal->animalId<<" "<<animal->animalType<<endl;

    animal = mq.dequeueDog();
    cout<<animal->animalId<<" "<<animal->animalType<<endl;

    animal = mq.dequeueDog();
    cout<<animal->animalId<<" "<<animal->animalType<<endl;

    animal = mq.dequeueCat();
    cout<<animal->animalId<<" "<<animal->animalType<<endl;

    animal = mq.dequeueDog();
    cout<<animal->animalId<<" "<<animal->animalType<<endl;
}