#include<iostream>
#include<cstring>
using namespace std;
struct book{
    int accession_number;
    char name_of_author[50];
    char book_title[50];
    int quantity;
};
int main(){
    book library[100];
    int n=0,choice;
    do{
        cout<<"---------Library Menu---------\n";
        cout<<"1.Display book information\n2.Add a new book\n3.Display books of an author\n4.Display number of books of a title\n5.Display total number of books\n6.Issue a book\n0.Exit\n";
        cout<<"Enter choice:";
        cin>>choice;
        cin.ignore();
        if(choice==1){
            if(n==0)cout<<"No books in library\n";
            else{
                for(int i=0;i<n;i++){
                    cout<<"Book "<<i+1<<endl;
                    cout<<"Accession number:"<<library[i].accession_number<<endl;
                    cout<<"Title:"<<library[i].book_title<<endl;
                    cout<<"Author:"<<library[i].name_of_author<<endl;
                    cout<<"Quantity:"<<library[i].quantity<<endl;
                }
            }
        }
        else if(choice==2){
            cout<<"Enter accession number:";
            cin>>library[n].accession_number;
            cin.ignore();
            cout<<"Enter book title:";
            cin.getline(library[n].book_title,50);
            cout<<"Enter author name:";
            cin.getline(library[n].name_of_author,50);
            cout<<"Enter quantity:";
            cin>>library[n].quantity;
            cin.ignore();
            n++;
            cout<<"Book added successfully\n";
        }
        else if(choice==3){
            char searchAuthor[50];
            cout<<"Enter author name:";
            cin.getline(searchAuthor,50);
            int found=0;
            for(int i=0;i<n;i++){
                if(strcmp(library[i].name_of_author,searchAuthor)==0){
                    cout<<"Title:"<<library[i].book_title<<" Quantity:"<<library[i].quantity<<endl;
                    found=1;
                }
            }
            if(!found)cout<<"No books found for this author\n";
        }
        else if(choice==4){
            char searchTitle[50];
            cout<<"Enter book title:";
            cin.getline(searchTitle,50);
            int count=0;
            for(int i=0;i<n;i++){
                if(strcmp(library[i].book_title,searchTitle)==0)count+=library[i].quantity;
            }
            cout<<"Total copies of \""<<searchTitle<<"\": "<<count<<endl;
        }
        else if(choice==5){
            int total=0;
            for(int i=0;i<n;i++)total+=library[i].quantity;
            cout<<"Total number of books:"<<total<<endl;
        }
        else if(choice==6){
            char issueTitle[50];
            cout<<"Enter book title to issue:";
            cin.getline(issueTitle,50);
            int issued=0;
            for(int i=0;i<n;i++){
                if(strcmp(library[i].book_title,issueTitle)==0){
                    if(library[i].quantity>0){
                        library[i].quantity--;
                        cout<<"Book issued successfully\n";
                        issued=1;
                        break;
                    }
                    else{
                        cout<<"Book is out of stock\n";
                        issued=1;
                        break;
                    }
                }
            }
            if(!issued)cout<<"Book not found\n";
        }
        else if(choice==0)cout<<"Exiting program...\n";
        else cout<<"Invalid choice\n";
    }while(choice!=0);
    return 0;
}
