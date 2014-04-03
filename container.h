#include <memory>
class TestObject;

class Container
{
public:
   explicit Container();

   //Remove this destructor and things go wrong !
   virtual ~Container();
private:
   std::shared_ptr<TestObject> m_testObj;
};


