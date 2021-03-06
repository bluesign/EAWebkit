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
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSStyleSheet.h"

#include <wtf/GetPtr.h>

#include "JSMediaList.h"
#include "JSNode.h"
#include "JSStyleSheet.h"
#include "KURL.h"
#include "MediaList.h"
#include "Node.h"
#include "StyleSheet.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSStyleSheetTableValues[9] =
{
    { "type", (intptr_t)JSStyleSheet::TypeAttrNum, DontDelete|ReadOnly, 0 },
    { "disabled", (intptr_t)JSStyleSheet::DisabledAttrNum, DontDelete, 0 },
    { "ownerNode", (intptr_t)JSStyleSheet::OwnerNodeAttrNum, DontDelete|ReadOnly, 0 },
    { "parentStyleSheet", (intptr_t)JSStyleSheet::ParentStyleSheetAttrNum, DontDelete|ReadOnly, 0 },
    { "href", (intptr_t)JSStyleSheet::HrefAttrNum, DontDelete|ReadOnly, 0 },
    { "title", (intptr_t)JSStyleSheet::TitleAttrNum, DontDelete|ReadOnly, 0 },
    { "media", (intptr_t)JSStyleSheet::MediaAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSStyleSheet::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetTable = { 31, JSStyleSheetTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSStyleSheetConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetConstructorTable = { 0, JSStyleSheetConstructorTableValues, 0 };

class JSStyleSheetConstructor : public DOMObject {
public:
    JSStyleSheetConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSStyleSheetPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSStyleSheetConstructor::s_info = { "StyleSheetConstructor", 0, &JSStyleSheetConstructorTable, 0 };

bool JSStyleSheetConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSStyleSheetConstructor, DOMObject>(exec, &JSStyleSheetConstructorTable, this, propertyName, slot);
}

JSValue* JSStyleSheetConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSStyleSheetPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSStyleSheetPrototypeTable = { 0, JSStyleSheetPrototypeTableValues, 0 };

const ClassInfo JSStyleSheetPrototype::s_info = { "StyleSheetPrototype", 0, &JSStyleSheetPrototypeTable, 0 };

JSObject* JSStyleSheetPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSStyleSheet.prototype]]");
    return KJS::cacheGlobalObject<JSStyleSheetPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSStyleSheet::s_info = { "StyleSheet", 0, &JSStyleSheetTable , 0 };

JSStyleSheet::JSStyleSheet(JSObject* prototype, StyleSheet* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSStyleSheet::~JSStyleSheet()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSStyleSheet::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSStyleSheet, Base>(exec, &JSStyleSheetTable, this, propertyName, slot);
}

JSValue* JSStyleSheet::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TypeAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return jsStringOrNull(exec, imp->type());
    }
    case DisabledAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return jsBoolean(imp->disabled());
    }
    case OwnerNodeAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return toJS(exec, WTF::getPtr(imp->ownerNode()));
    }
    case ParentStyleSheetAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return toJS(exec, WTF::getPtr(imp->parentStyleSheet()));
    }
    case HrefAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return jsStringOrNull(exec, imp->href());
    }
    case TitleAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return jsStringOrNull(exec, imp->title());
    }
    case MediaAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        return toJS(exec, WTF::getPtr(imp->media()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSStyleSheet::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSStyleSheet, Base>(exec, propertyName, value, &JSStyleSheetTable, this);
}

void JSStyleSheet::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case DisabledAttrNum: {
        StyleSheet* imp = static_cast<StyleSheet*>(impl());
        imp->setDisabled(value->toBoolean(exec));
        break;
    }
    }
}

JSValue* JSStyleSheet::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[StyleSheet.constructor]]");
    return KJS::cacheGlobalObject<JSStyleSheetConstructor>(exec, constructorIdentifier);
}

StyleSheet* toStyleSheet(KJS::JSValue* val)
{
    return val->isObject(&JSStyleSheet::s_info) ? static_cast<JSStyleSheet*>(val)->impl() : 0;
}

}
