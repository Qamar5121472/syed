#include<iostream>
#include<string>
using namespace std;
int fun(int); 
int books[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
string name_books[] = {"Book Name = Introduction to Computing\nAuthor = Thomas kamron\n","Book Name = Structure of Computer Programs\nAuthor = Harld Ablson\n","Book = C Programming Language\nAuthor = B. Willionson\n","Book = The Art of Computer Programming\nAuthor = Donald Ervin\n","Book = The Logical Programmer\nAuthor = Andy Hurry\n","Book = Design Algorithum:Object-Oriented Software\nAuthor = Frinch Gamma\n","Book = Code\nAuthor = Charles Petzold\n","Book = Introduction to the Theory of Computation\nAuthor = M.Sipser\n","Book = The Man-Month:Software Engineering\nAuthor = Frederick Brooks\n","Book = Code Completeting\nAuthor = Steve M.Connell\n","Book = Artificial Intelligence: A Modern Approach\nAuthor = Andar Russell\n","Book = The Protocols (TCP/IP Illustratetion)\nAuthor = W. Stevens\n","Book = Advanced Programming in the All Environment\nAuthor =  Deiv Stevens\n","Book = Algorithms\nAuthor = Robert Sedgewick\n","Book = Compilers: Principles, Techniques, and Tools\nAuthor = Alfred Aho\n","Book = Introduction to Automata Theory, and Languages\nAuthor = John Hopcroft\n","Book = A Discipline of Programming\nAuthor = E. Dijkstra\n","Book = Learn You a Haskell for Great Good!\nAuthor = Miran Lipovaca\n","Book = Concrete Mathematics: A Foundation for Computer Science\nAuthor = L. Graham\n","Book = Computer Systems: A Programmer's Perspective\nAuthor = E. Bryant\n","Book = The Algorithm Design\nAuthor = S. Skiena\n","Book = Joel on Software\nAuthor = J. Spolsky\n","Book = The Society of Mind\nAuthor = M. Minsky\n","Book = Hacker's Delight\nAuthor = S. Warren Jr.\n","Book = The Elements of Computing: Building a Modern Computer\nAuthor = Nisan\n","Book = Programming\nAuthor = L. Bentley\n","Book = Applied Cryptography in C\nAuthor = B. Schneier\n","Book = The Computer Programming\nAuthor = Gerald Weinberg\n","Book = Introduction to Functional Programming\nAuthor = G. Michaelson\n","Book = Database\nAuthor = Abraham Silschatz\n","\n","\n"};
int issue_book[] = {};
int bookdetail(int x)
{
	for(int i=0;i<=30;i++)
	{
		cout<<name_books[i];
	}
}
int addbook(int x){
	int book_limit,i;
	cout << "Enter Limit of Books you want to enter\n";
	cin >> book_limit;
	for(i=30; i<=29+book_limit; i++)
	{
		cout<<"30 books is already exist\n";
		cout<<"Enter the number\n";
		cin >> books[i];
	}
	for(i=30; i<=29+book_limit; i++)
	{
		cout<<"Books Name\n Auther\n";
		cin >>name_books[i];
	}
	cout << "Books Added Successfully\n"<<endl;

	for (int i=0; i<=29+book_limit; i++) 
	{
//		cout<< books[i]<<endl;
		cout << books[i] <<name_books[i]<<endl;
	}		
}
double return_books(int x)
{
	int re,count;
	cout<<"Enter the return book\n";
	cin>>re;
	for(int i=0;i<=sizeof(x);i++)
	{
		if(re == x)
		{
			count++;
//			issue_book[i] = books[book_num-1];
			break;
		}	
	}
	if(count == 0) {
			cout << "This Book is Not in Issue Books\n";
		} else {
			cout << "Book Return!\n";
//			for(int i=0; i<1; i++){
//				
//			issue_book[i] = books[book_num-1];	
//			}
			
//			cout << issue_book[0]<<name_books[i]<<endl;
		}
}
int issuebook(int x){ 	//Issue Books
	int book_num,i,count=0;
	cout << "Enter Book Number to Search\n"<<endl;
	cin >> book_num;
	for(i=0; i<30; i++) {
		if(books[i] == book_num){
			count++;
			issue_book[i] = books[book_num-1];
			break;
		}
	}
		
		if(count == 0) {
			cout << "This Book is Not Availble\n";
		} else {
			cout << "Book Issued\n";
//			for(int i=0; i<1; i++){
//				
//			issue_book[i] = books[book_num-1];	
//			}
			
			cout << issue_book[0]<<name_books[i]<<endl;
		}
		return issue_book[i];
}
double delrecissbook(int a)
{
	int book_num,i,count=0;
	cout << "Enter Book Number to Search\n";
	cin >> book_num;
	for(i=0; i<30; i++) {
		if(book_num==issue_book[i]){
			count++;
			break;
		}
	}
		
		if(count == 0) {
			cout << "Book is Not Availble\n";
		} else {
			cout << "Book is deleted Suuccesfully\n";
//			cout << name_books[book_num-1];
			cout<<issue_book[i]<<endl;
		}
		return issue_book[i];
	
}
double recissuebook(int x) {
	for(int i=0; i<sizeof(x); i++) 
	{
		cout<<x<<name_books[i]<<endl;
	} 
}
double searchbook(int x) {
	int book_num,i,count=0;
	cout << "Enter Book Number to Search\n";
	cin >> book_num;
	for(i=0; i<30; i++) {
		if(books[i] == book_num){
			count++;
			break;
		}
	}	
		if(count == 0) {
			cout << "Book is Not Availble\n";
		} else {
			cout << "Book is Availble\n";
			cout << name_books[book_num-1];
		}
}


/* 
Main Starts From Here
*/
int main () {
string userinput;
	string password="qamar";
//	string pass="Qamar";
	string name="qamar";
//	string nam="Qamar";
	string username;
	cout<<"***********************Well Come to library System*******************************\n";
	cout<<"Enter the user name\n";
	cin>>username;
	cout<<"enter the password\n";
	cin>>userinput;
	if(username!=name && userinput!=password )
	{	cout<<"Invalid name and password\n";
		cout<<"Enter the user name\n";
		cin>>username;
		cout<<"Enter the password try again\n";
		cin>>username;
		while(username!=name && userinput!=password)
		{
			cout<<"Invalid name and password\n";
			cout<<"Enter the user name\n";
			cin>>username;
			cout<<"Enter the pass\n";
			cin>>username;
		}
	} 
	
//	for(int i=0; i<30; i++){
//		cout << name_books[i] <<endl<<endl;
//	}
	cout << "*****************************************Select the Department *****************************************\n";
	cout<<"\n";
	cout << "\n1 = CS & IT\n2 = Architecture\n3 = Medical\n4 = Mass Communication\n5 = Electrical\n";
	int object,c;
	cin >> object;
	system("cls");
	switch(object)
	{
		case 1:
			cout << "CS & IT\n";
			fun(object);
			break;
		case 2:
			cout << "Architecture\n";
			fun(object);
			break;
		case 3:
			cout << "Medical\n";
			fun(object);
			break;
		case 4:
			cout << "Mass Communication\n";
			fun(object);
			break;
		case 5:
			cout << "Electrical\n";
			fun(object);
			break;
		default:
			
			cout << "Invalid Department\n";
			break;
	}
	return 0;
}
/* 
Main Ends Here
*/


int fun(int x) 
{
	performance:
	cout << "1 = Add Books\n2 = Return Books\n3 = Issue Books\n4 = Delete Record of books issued\n5 = View Record of Books issued\n6 = Search for Books\n7 = Book Detail\n";
	int a,tb,c;
	cin >> a;
	system("cls");
	
	switch(a)
	{
		case 1:
			cout << "Add Books\n";
			addbook(a);
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			break;
		case 2:
			cout << "Return Books\n";
			cout<<return_books(a);
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			break;
		case 3:
			cout << "Issue Books\n";
			cout<<issuebook(a);
			issuebook(a);
			tb=issuebook(a);
			cout<<tb;
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			
//			cout<<issue_book(a);
			break;
		case 4:
			cout << "Delete Record of Books\n";
			cout<<delrecissbook(a);
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			break;
		case 5:
			cout << "View Record of Books\n";
			cout<<recissuebook(tb);
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			break;
		case 6:
			cout << "Search for Books\n";
			cout<<searchbook(a);
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			break;
		case 7:
			cout<<"Book Detail\n";
			cout<<bookdetail(a);
			cout<<"what do you want me to do next\n";
			cout<<"run again = 1		quit = 2";
			cin>>c;
			switch(c)
			{
				case 1:
					goto performance;
				case 2:
					return 0;
			}
			break;
		default :
			cout << "Invalid Command\n";
			break;
	}
	
}
