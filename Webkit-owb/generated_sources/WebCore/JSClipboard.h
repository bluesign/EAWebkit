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

#ifndef JSClipboard_h
#define JSClipboard_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class Clipboard;

class JSClipboard : public DOMObject {
    typedef DOMObject Base;
public:
    JSClipboard(KJS::JSObject* prototype, Clipboard*);
    virtual ~JSClipboard();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        DropEffectAttrNum, EffectAllowedAttrNum, TypesAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };

    // Custom attributes
    KJS::JSValue* types(KJS::ExecState*) const;

    // Custom functions
    KJS::JSValue* clearData(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* getData(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* setData(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* setDragImage(KJS::ExecState*, const KJS::ArgList&);
    Clipboard* impl() const { return m_impl.get(); }

private:
    RefPtr<Clipboard> m_impl;
};

KJS::JSValue* toJS(KJS::ExecState*, Clipboard*);
Clipboard* toClipboard(KJS::JSValue*);

class JSClipboardPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSClipboardPrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

KJS::JSValue* jsClipboardPrototypeFunctionClearData(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsClipboardPrototypeFunctionGetData(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsClipboardPrototypeFunctionSetData(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsClipboardPrototypeFunctionSetDragImage(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif
