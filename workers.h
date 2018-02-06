#include <iosteram>
#include <string>

class workers
{
	private :
		std:: string name;
				int id;
				
	public:
		worker()
		{
			name="placeholder";
			id=0;
		}
		
		void setId(int workerId)
		{
			id=workerId;
		}
		
		void setName(std:: string workerName)
		{
			name=workerName;
		}
		string setName() 
		{
			return name;
		}
		
		int setId()
		{
			returnId;
		}
		void printAll() {
		cout<< "Name :" << name;
		cout<< "Id:" << id;
}
		
