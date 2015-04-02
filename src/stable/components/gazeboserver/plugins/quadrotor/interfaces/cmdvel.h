// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `cmdvel.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __cmdvel_h__
#define __cmdvel_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace jderobot
{

class CMDVelData;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::CMDVelData>&);
::IceProxy::Ice::Object* upCast(::IceProxy::jderobot::CMDVelData*);

class CMDVel;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::CMDVel>&);
::IceProxy::Ice::Object* upCast(::IceProxy::jderobot::CMDVel*);

}

}

namespace jderobot
{

class CMDVelData;
bool operator==(const CMDVelData&, const CMDVelData&);
bool operator<(const CMDVelData&, const CMDVelData&);
::Ice::Object* upCast(::jderobot::CMDVelData*);
typedef ::IceInternal::Handle< ::jderobot::CMDVelData> CMDVelDataPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::CMDVelData> CMDVelDataPrx;
void __patch(CMDVelDataPtr&, const ::Ice::ObjectPtr&);

class CMDVel;
bool operator==(const CMDVel&, const CMDVel&);
bool operator<(const CMDVel&, const CMDVel&);
::Ice::Object* upCast(::jderobot::CMDVel*);
typedef ::IceInternal::Handle< ::jderobot::CMDVel> CMDVelPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::jderobot::CMDVel> CMDVelPrx;
void __patch(CMDVelPtr&, const ::Ice::ObjectPtr&);

}

namespace jderobot
{

class Callback_CMDVel_setCMDVelData_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_CMDVel_setCMDVelData_Base> Callback_CMDVel_setCMDVelDataPtr;

}

namespace IceProxy
{

namespace jderobot
{

class CMDVelData : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_secure(bool __secure) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_twoway() const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_oneway() const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_batchOneway() const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_datagram() const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_batchDatagram() const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_compress(bool __compress) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVelData> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<CMDVelData*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class CMDVel : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr& data)
    {
        return setCMDVelData(data, 0);
    }
    ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context& __ctx)
    {
        return setCMDVelData(data, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::IceInternal::Function<void (::Ice::Int)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_setCMDVelData(data, 0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setCMDVelData(data, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (::Ice::Int)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_setCMDVelData(data, &__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setCMDVelData(data, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (::Ice::Int)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (::Ice::Int)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::jderobot::CMDVelPrx __proxy = ::jderobot::CMDVelPrx::uncheckedCast(__result->getProxy());
                ::Ice::Int __ret;
                try
                {
                    __ret = __proxy->end_setCMDVelData(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (::Ice::Int)> _response;
        };
        return begin_setCMDVelData(data, __ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data)
    {
        return begin_setCMDVelData(data, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context& __ctx)
    {
        return begin_setCMDVelData(data, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCMDVelData(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCMDVelData(data, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::jderobot::Callback_CMDVel_setCMDVelDataPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCMDVelData(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr& data, const ::Ice::Context& __ctx, const ::jderobot::Callback_CMDVel_setCMDVelDataPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCMDVelData(data, &__ctx, __del, __cookie);
    }

    ::Ice::Int end_setCMDVelData(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setCMDVelData(const ::jderobot::CMDVelDataPtr&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<CMDVel> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_secure(bool __secure) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_twoway() const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_oneway() const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_batchOneway() const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_datagram() const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_batchDatagram() const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_compress(bool __compress) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<CMDVel> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<CMDVel*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace jderobot
{

class CMDVelData : virtual public ::IceDelegate::Ice::Object
{
public:
};

class CMDVel : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace jderobot
{

class CMDVelData : virtual public ::IceDelegate::jderobot::CMDVelData,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class CMDVel : virtual public ::IceDelegate::jderobot::CMDVel,
               virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace jderobot
{

class CMDVelData : virtual public ::IceDelegate::jderobot::CMDVelData,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class CMDVel : virtual public ::IceDelegate::jderobot::CMDVel,
               virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace jderobot
{

class CMDVelData : virtual public ::Ice::Object
{
public:

    typedef CMDVelDataPrx ProxyType;
    typedef CMDVelDataPtr PointerType;

    CMDVelData()
    {
    }

    CMDVelData(::Ice::Float __ice_linearX, ::Ice::Float __ice_linearY, ::Ice::Float __ice_linearZ, ::Ice::Float __ice_angularX, ::Ice::Float __ice_angularY, ::Ice::Float __ice_angularZ) :
        linearX(__ice_linearX),
        linearY(__ice_linearY),
        linearZ(__ice_linearZ),
        angularX(__ice_angularX),
        angularY(__ice_angularY),
        angularZ(__ice_angularZ)
    {
    }

    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif

public:

    ::Ice::Float linearX;

    ::Ice::Float linearY;

    ::Ice::Float linearZ;

    ::Ice::Float angularX;

    ::Ice::Float angularY;

    ::Ice::Float angularZ;

protected:

    virtual ~CMDVelData() {}

    friend class CMDVelData__staticInit;
};

class CMDVelData__staticInit
{
public:

    ::jderobot::CMDVelData _init;
};

static CMDVelData__staticInit _CMDVelData_init;

inline bool operator==(const CMDVelData& l, const CMDVelData& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const CMDVelData& l, const CMDVelData& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class CMDVel : virtual public ::Ice::Object
{
public:

    typedef CMDVelPrx ProxyType;
    typedef CMDVelPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int setCMDVelData(const ::jderobot::CMDVelDataPtr&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCMDVelData(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const CMDVel& l, const CMDVel& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const CMDVel& l, const CMDVel& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace jderobot
{

template<class T>
class CallbackNC_CMDVel_setCMDVelData : public Callback_CMDVel_setCMDVelData_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(::Ice::Int);

    CallbackNC_CMDVel_setCMDVelData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::jderobot::CMDVelPrx __proxy = ::jderobot::CMDVelPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_setCMDVelData(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_CMDVel_setCMDVelDataPtr
newCallback_CMDVel_setCMDVelData(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CMDVel_setCMDVelData<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_CMDVel_setCMDVelDataPtr
newCallback_CMDVel_setCMDVelData(T* instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_CMDVel_setCMDVelData<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_CMDVel_setCMDVelData : public Callback_CMDVel_setCMDVelData_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(::Ice::Int, const CT&);

    Callback_CMDVel_setCMDVelData(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::jderobot::CMDVelPrx __proxy = ::jderobot::CMDVelPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_setCMDVelData(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_CMDVel_setCMDVelDataPtr
newCallback_CMDVel_setCMDVelData(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CMDVel_setCMDVelData<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_CMDVel_setCMDVelDataPtr
newCallback_CMDVel_setCMDVelData(T* instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_CMDVel_setCMDVelData<T, CT>(instance, cb, excb, sentcb);
}

}

#endif
