
#include<iostream>
//#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main(){
    
    int storage=getpid(); //BECAUSE THE PARENT IS THIS ORIGINAL PROCESS ONLY NA

    //OKAY, MY TASK IS TO DO LETS SAY 2 FORKS. SO MY AIM IS TO GET 1 PARENT, 3 CHILD 
    //PROCESSES AND THEN PRINT parent ID
    for(int i=0;i<2;i++){
        //pid_t prox = fork();
        //now we are using pid_t, for thats the standard across all unix systems. 
        //not really necessary waise. we could have still used getpid()

        //U KNOW WHAT, LETS JUST USE GETPID ONLY
        int prox = fork();
//forking is done

        if(prox==0){
            cout<<"Hi, I am a child process. My PID is: "<<getpid()<<"\n";
        }
        
        cout<<"\n";
    }

    
    if(storage==getpid()){
        cout<<"Now we are out of the loop: I am the parent process : PID : "<<storage<<"\n";
    }
}