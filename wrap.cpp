#include "wrap.h"


/*
 * Try all combinations of COMPILE_WITH_STD_SHAREDPTR and inclusion of container.h
 * Truth table
 *
 * COMPILE_WITH_STD_SHAREDPTR  inclusion container.h   Result
 *          On                      On                 Working program, destructor is called
 *          On                      Off                Broken program, static assert in std::shared_ptr fires
 *          Off                     On                 Working program, destructor is called
 *          Off                     Off                Broken program, destructor is not called, compiler does not complain
 */
#define COMPILE_WITH_STD_SHAREDPTR
#ifdef COMPILE_WITH_STD_SHAREDPTR
#include <memory>
#else
#include <QSharedPointer>
#endif

#include "container.h"


void wrap(Container* container)
{
#ifdef COMPILE_WITH_STD_SHAREDPTR
    std::shared_ptr<Container> cont(container);
#else
    QSharedPointer<Container> cont(container);
#endif
}
