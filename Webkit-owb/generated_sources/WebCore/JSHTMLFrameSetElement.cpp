/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSHTMLFrameSetElement.h"

#include <wtf/GetPtr.h>

#include "AtomicString.h"
#include "HTMLFrameSetElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLFrameSetElementTableValues[4] =
{
    { "cols", (intptr_t)JSHTMLFrameSetElement::ColsAttrNum, DontDelete, 0 },
    { "rows", (intptr_t)JSHTMLFrameSetElement::RowsAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLFrameSetElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementTable = { 7, JSHTMLFrameSetElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLFrameSetElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementConstructorTable = { 0, JSHTMLFrameSetElementConstructorTableValues, 0 };

class JSHTMLFrameSetElementConstructor : public DOMObject {
public:
    JSHTMLFrameSetElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLFrameSetElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLFrameSetElementConstructor::s_info = { "HTMLFrameSetElementConstructor", 0, &JSHTMLFrameSetElementConstructorTable, 0 };

bool JSHTMLFrameSetElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLFrameSetElementConstructor, DOMObject>(exec, &JSHTMLFrameSetElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLFrameSetElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLFrameSetElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLFrameSetElementPrototypeTable = { 0, JSHTMLFrameSetElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLFrameSetElementPrototype::s_info = { "HTMLFrameSetElementPrototype", 0, &JSHTMLFrameSetElementPrototypeTable, 0 };

JSObject* JSHTMLFrameSetElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLFrameSetElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLFrameSetElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLFrameSetElement::s_info = { "HTMLFrameSetElement", &JSHTMLElement::s_info, &JSHTMLFrameSetElementTable , 0 };

JSHTMLFrameSetElement::JSHTMLFrameSetElement(JSObject* prototype, HTMLFrameSetElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLFrameSetElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    if (canGetItemsForName(exec, static_cast<HTMLFrameSetElement*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSHTMLFrameSetElement, Base>(exec, &JSHTMLFrameSetElementTable, this, propertyName, slot);
}

JSValue* JSHTMLFrameSetElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ColsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());
        return jsString(exec, imp->cols());
    }
    case RowsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());
        return jsString(exec, imp->rows());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLFrameSetElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLFrameSetElement, Base>(exec, propertyName, value, &JSHTMLFrameSetElementTable, this);
}

void JSHTMLFrameSetElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ColsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());
        imp->setCols(valueToStringWithNullCheck(exec, value));
        break;
    }
    case RowsAttrNum: {
        HTMLFrameSetElement* imp = static_cast<HTMLFrameSetElement*>(impl());
        imp->setRows(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLFrameSetElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLFrameSetElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLFrameSetElementConstructor>(exec, constructorIdentifier);
}


}
