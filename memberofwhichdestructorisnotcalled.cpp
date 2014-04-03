#include "memberofwhichdestructorisnotcalled.h"
#include <iostream>

MemberOfWhichDestructorIsNotCalled::MemberOfWhichDestructorIsNotCalled()
{
}

MemberOfWhichDestructorIsNotCalled::~MemberOfWhichDestructorIsNotCalled()
{
    std::cout << "TestObjectBase destructor !\n";
}
