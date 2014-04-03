#include "wrap.h"
//#include "container.h"
#include <QSharedPointer>
//#include <memory>

void wrap(Container* container)
{
    QSharedPointer<Container> cont(container);
}
