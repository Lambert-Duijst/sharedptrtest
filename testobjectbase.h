#ifndef TESTOBJECTBASE_H
#define TESTOBJECTBASE_H
#include <memory>
#include "testobjectbasebase.h"

class MemberOfWhichDestructorIsNotCalled;

class TestObjectBase : public TestObjectBaseBase
{
public:
    TestObjectBase();

    //virtual ~TestObjectBase();
private:
  std::shared_ptr<MemberOfWhichDestructorIsNotCalled> m_member1;
};

#endif // TESTOBJECTBASE_H
