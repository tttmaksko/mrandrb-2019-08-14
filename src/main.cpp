#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int mt = 0;
    string answer=" ";
    std::vector <std::string> a = {
        "70590","999","6:50","kindergarden","11","2010","4300",
        "Mustachioed-striped","3","11015","Teacher","150880","10055","7","10","2018"
    };

    std::vector <std::string> q = {
        "Enter password",
        "Number of thing which always helps you",
        "Your birth time(hours:minutes)",
        "What is a 'Solnyshko' for you in your life ",
        "how old were you when you first time visited Kushva(month)",
        "Find Nastya and discover the question",
        "Your birth weight,гр",
        "what was your favourite book, when you were young",
        "How long have you studied in musical school",
        "Search for it on the first floor of a house",
        "Who had initials M.V.I. in your life",
        "Go to the bathhouse(Idi ty v banyu)",
        "the number of your cars multiplied by the year in which you posted avatar in VK",
        "How many doors were in the flat on the Narodnaya Street 9/1",
        "How many photos hangs on the wall above your bed",
        "in what year the TV tower was destructed"
    };
    cout<<"If you need a hint,find us\n";
    for(int i = 0; i<a.size();i++){
        cout<<"Task №"<<i+1<<endl;
        cout<<q[i]<<"\nAnswer: ";
        cin>>answer;
       
        while(answer!=a[i]){
            mt++;
            cout<<"Wrong :(\n";
            cout<<q[i]<<"\nAnswer: ";
            cin>>answer;  
        }
        cout<<"Correct!!! :)(:\n";
    }  
    cout<<"Congratulations!!! "<<mt<<" mistakes\n";    
}