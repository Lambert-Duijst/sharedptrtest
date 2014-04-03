#include "testobjectbase.h"
#include <iostream>
#include "memberofwhichdestructorisnotcalled.h"

TestObjectBase::TestObjectBase() : m_member1(new MemberOfWhichDestructorIsNotCalled)
{
}

//TestObjectBase::~TestObjectBase()
//{

//}
