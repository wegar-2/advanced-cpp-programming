#include "MySingletonClass.hpp"

MySingletonClass* MySingletonClass::pObject = 0;


MySingletonClass* MySingletonClass::Instance() {
    if (pObject == 0) {
        pObject = new MySingletonClass();
        return pObject;
    }
    else {
        return pObject;
    }
}
