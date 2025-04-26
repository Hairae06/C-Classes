#include <string>
#include <vector>

class BaseClassName
{
public:
	~Database(); // Destructor
	void Create(BaseClassName::eType type);
	void DisplayAll();
	void Display(const std::string& name);
	void Display(BaseClassName::eType type);


	std::string name;
	std::int16_t lifespan;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	std::string GetName();

	eType GetType();

	std::vector<BaseClassName*> objects;

};

enum class eType
{
	CAT,
	DOG,
	BIRD
}; // example animal based classes

void BaseClassName::Read(std::ostream& ostream, std::istream& istream)
{
	BaseClassName::Read(ostream, istream); // Call base class Read 
	ostream << "Enter speed: ";
	istream >> speed;
}

void BaseClassName::Write(std::ostream& ostream)
{
	BaseClassName::Write(ostream); // Call base class Write 
	ostream << "Speed: " << speed << std::endl;
}

std::string BaseClassName::GetName()
{
	return std::string(name);
}

eType BaseClassName::GetType() 
{
	return eType::CAT; 
} // or DOG
