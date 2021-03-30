#include <string>
using namespace std;

class fiinte
{
public:
	int age;
	double height;
	string name;
	void Enroll_Uni();
	void IsMale();
	void IsFemale();
	fiinte();
	fiinte(string name_select, int age_select, double height_select);
	~fiinte();
private:
	std::string gender;
};

