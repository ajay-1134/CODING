#include<bits/stdc++.h>
using namespace std;
struct animal {
   string animalName;
   struct animal *next;
   int count = 0;
}*startExploration;


class jungleExplorer{
    public:
         //struct animal* startExploration;
        //animal* create_animalfound(String animalName);
        void addAnimal(); //implement this using above struct
        void countAnimal(); // implement this using above struct
        void uniqueAnimalsFound(); //implement this using above struct
        jungleExplorer() 
        {

            startExploration = NULL;

        }

};


//struct animal* startExploration = NULL;
void addAnimal(string animalName) {
   struct animal* new_animal = (struct animal*) malloc(sizeof(struct animal));
   new_animal->animalName = animalName;
   new_animal->next = startExploration;
   startExploration = new_animal;
   cout<<animalName<<" added successfully!!"<<endl<<endl;
 
}



void countAnimal(struct animal* ptr)
{
    int cnt = 0;
    
    while (ptr != NULL) {
       if(ptr->animalName!="0")
       {
          cnt++; 
       }
     
      ptr = ptr->next;
   }
   cout<<"Total number of animals: "<<cnt<<endl;
}


void uniqueAnimalsFound(struct animal* ptr)
{
    
  
    cout<<"The unique animals are : "<<endl;
    for (struct animal *temp1=ptr; temp1!=NULL; temp1=temp1->next)
    {
        int cnt = 0;
        for (struct animal *temp2=ptr; temp2!=NULL; temp2=temp2->next)
       {
 
        if (temp1->animalName==temp2->animalName)
        {
            cnt++;
        }
        
        }
        if(cnt==1&&temp1->animalName!="0")
        {
             cout<<temp1->animalName<<endl;
        }
    
    }
    
     
}

int main() {
    string s;
    int cnt = 0;
    while(s!="0")
    {
        cout<<"Enter 0 to exit if u r out of jungle otherwise keep adding animals by their names"<<endl;
        cin>>s;
        addAnimal(s);
        cnt++;
    }
     
    countAnimal(startExploration);
    uniqueAnimalsFound(startExploration);
   return 0;
}