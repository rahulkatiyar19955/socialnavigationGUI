//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.3
//
// <auto-generated>
//
// Generated from file `SocialRules.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __SocialRules_h__
#define __SocialRules_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/GCObject.h>
#include <Ice/Value.h>
#include <Ice/Incoming.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <SocialNavigationGaussian.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 >= 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 3
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace RoboCompSocialRules
{

class SocialRules;
class SocialRulesPrx;

}

namespace RoboCompSocialRules
{

struct SRObject
{
    ::std::string name;
    float x;
    float z;
    bool interacting;
    ::RoboCompSocialNavigationGaussian::SNGPolyline affordance;
    float cost;

    /**
     * Obtains a tuple containing all of the struct's data members.
     * @return The data members in a tuple.
     */
    std::tuple<const ::std::string&, const float&, const float&, const bool&, const ::RoboCompSocialNavigationGaussian::SNGPolyline&, const float&> ice_tuple() const
    {
        return std::tie(name, x, z, interacting, affordance, cost);
    }
};

using SRObjectSeq = ::std::vector<SRObject>;

using Ice::operator<;
using Ice::operator<=;
using Ice::operator>;
using Ice::operator>=;
using Ice::operator==;
using Ice::operator!=;

}

namespace RoboCompSocialRules
{

class SocialRules : public virtual ::Ice::Object
{
public:

    using ProxyType = SocialRulesPrx;

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(::std::string id, const ::Ice::Current& current) const override;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector<::std::string> ice_ids(const ::Ice::Current& current) const override;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual ::std::string ice_id(const ::Ice::Current& current) const override;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual void objectsChanged(SRObjectSeq objectsAffordances, const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_objectsChanged(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    virtual void personalSpacesChanged(::RoboCompSocialNavigationGaussian::SNGPolylineSeq intimateSpaces, ::RoboCompSocialNavigationGaussian::SNGPolylineSeq personalSpaces, ::RoboCompSocialNavigationGaussian::SNGPolylineSeq socialSpaces, const ::Ice::Current& current) = 0;
    /// \cond INTERNAL
    bool _iceD_personalSpacesChanged(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
    /// \endcond
};

}

namespace RoboCompSocialRules
{

class SocialRulesPrx : public virtual ::Ice::Proxy<SocialRulesPrx, ::Ice::ObjectPrx>
{
public:

    void objectsChanged(const SRObjectSeq& objectsAffordances, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        _makePromiseOutgoing<void>(true, this, &SocialRulesPrx::_iceI_objectsChanged, objectsAffordances, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto objectsChangedAsync(const SRObjectSeq& objectsAffordances, const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<void>>().get_future())
    {
        return _makePromiseOutgoing<void, P>(false, this, &SocialRulesPrx::_iceI_objectsChanged, objectsAffordances, context);
    }

    ::std::function<void()>
    objectsChangedAsync(const SRObjectSeq& objectsAffordances,
                        ::std::function<void()> response,
                        ::std::function<void(::std::exception_ptr)> ex = nullptr,
                        ::std::function<void(bool)> sent = nullptr,
                        const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<void>(response, ex, sent, this, &RoboCompSocialRules::SocialRulesPrx::_iceI_objectsChanged, objectsAffordances, context);
    }

    /// \cond INTERNAL
    void _iceI_objectsChanged(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>&, const SRObjectSeq&, const ::Ice::Context&);
    /// \endcond

    void personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        _makePromiseOutgoing<void>(true, this, &SocialRulesPrx::_iceI_personalSpacesChanged, intimateSpaces, personalSpaces, socialSpaces, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto personalSpacesChangedAsync(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Context& context = ::Ice::noExplicitContext)
        -> decltype(::std::declval<P<void>>().get_future())
    {
        return _makePromiseOutgoing<void, P>(false, this, &SocialRulesPrx::_iceI_personalSpacesChanged, intimateSpaces, personalSpaces, socialSpaces, context);
    }

    ::std::function<void()>
    personalSpacesChangedAsync(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces,
                               ::std::function<void()> response,
                               ::std::function<void(::std::exception_ptr)> ex = nullptr,
                               ::std::function<void(bool)> sent = nullptr,
                               const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<void>(response, ex, sent, this, &RoboCompSocialRules::SocialRulesPrx::_iceI_personalSpacesChanged, intimateSpaces, personalSpaces, socialSpaces, context);
    }

    /// \cond INTERNAL
    void _iceI_personalSpacesChanged(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>&, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq&, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq&, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq&, const ::Ice::Context&);
    /// \endcond

    /**
     * Obtains the Slice type ID of this interface.
     * @return The fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:

    /// \cond INTERNAL
    SocialRulesPrx() = default;
    friend ::std::shared_ptr<SocialRulesPrx> IceInternal::createProxy<SocialRulesPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
    /// \endcond
};

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits<::RoboCompSocialRules::SRObject>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 15;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamReader<::RoboCompSocialRules::SRObject, S>
{
    static void read(S* istr, ::RoboCompSocialRules::SRObject& v)
    {
        istr->readAll(v.name, v.x, v.z, v.interacting, v.affordance, v.cost);
    }
};

}
/// \endcond

/// \cond INTERNAL
namespace RoboCompSocialRules
{

using SocialRulesPtr = ::std::shared_ptr<SocialRules>;
using SocialRulesPrxPtr = ::std::shared_ptr<SocialRulesPrx>;

}
/// \endcond

#else // C++98 mapping

namespace IceProxy
{

namespace RoboCompSocialRules
{

class SocialRules;
/// \cond INTERNAL
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< SocialRules>&);
::IceProxy::Ice::Object* upCast(SocialRules*);
/// \endcond

}

}

namespace RoboCompSocialRules
{

class SocialRules;
/// \cond INTERNAL
::Ice::Object* upCast(SocialRules*);
/// \endcond
typedef ::IceInternal::Handle< SocialRules> SocialRulesPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompSocialRules::SocialRules> SocialRulesPrx;
typedef SocialRulesPrx SocialRulesPrxPtr;
/// \cond INTERNAL
void _icePatchObjectPtr(SocialRulesPtr&, const ::Ice::ObjectPtr&);
/// \endcond

}

namespace RoboCompSocialRules
{

struct SRObject
{
    ::std::string name;
    ::Ice::Float x;
    ::Ice::Float z;
    bool interacting;
    ::RoboCompSocialNavigationGaussian::SNGPolyline affordance;
    ::Ice::Float cost;
};

typedef ::std::vector<SRObject> SRObjectSeq;

}

namespace RoboCompSocialRules
{

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 * Create a wrapper instance by calling ::RoboCompSocialRules::newCallback_SocialRules_objectsChanged.
 */
class Callback_SocialRules_objectsChanged_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_SocialRules_objectsChanged_Base> Callback_SocialRules_objectsChangedPtr;

/**
 * Base class for asynchronous callback wrapper classes used for calls to
 * IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 * Create a wrapper instance by calling ::RoboCompSocialRules::newCallback_SocialRules_personalSpacesChanged.
 */
class Callback_SocialRules_personalSpacesChanged_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_SocialRules_personalSpacesChanged_Base> Callback_SocialRules_personalSpacesChangedPtr;

}

namespace IceProxy
{

namespace RoboCompSocialRules
{

class SocialRules : public virtual ::Ice::Proxy<SocialRules, ::IceProxy::Ice::Object>
{
public:

    void objectsChanged(const ::RoboCompSocialRules::SRObjectSeq& objectsAffordances, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        end_objectsChanged(_iceI_begin_objectsChanged(objectsAffordances, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_objectsChanged(const ::RoboCompSocialRules::SRObjectSeq& objectsAffordances, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_objectsChanged(objectsAffordances, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_objectsChanged(const ::RoboCompSocialRules::SRObjectSeq& objectsAffordances, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_objectsChanged(objectsAffordances, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_objectsChanged(const ::RoboCompSocialRules::SRObjectSeq& objectsAffordances, const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_objectsChanged(objectsAffordances, context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_objectsChanged(const ::RoboCompSocialRules::SRObjectSeq& objectsAffordances, const ::RoboCompSocialRules::Callback_SocialRules_objectsChangedPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_objectsChanged(objectsAffordances, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_objectsChanged(const ::RoboCompSocialRules::SRObjectSeq& objectsAffordances, const ::Ice::Context& context, const ::RoboCompSocialRules::Callback_SocialRules_objectsChangedPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_objectsChanged(objectsAffordances, context, cb, cookie);
    }

    void end_objectsChanged(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_objectsChanged(const ::RoboCompSocialRules::SRObjectSeq&, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    void personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        end_personalSpacesChanged(_iceI_begin_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Context& context, const ::Ice::CallbackPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces, context, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::RoboCompSocialRules::Callback_SocialRules_personalSpacesChangedPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces, ::Ice::noExplicitContext, cb, cookie);
    }

    ::Ice::AsyncResultPtr begin_personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Context& context, const ::RoboCompSocialRules::Callback_SocialRules_personalSpacesChangedPtr& cb, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_personalSpacesChanged(intimateSpaces, personalSpaces, socialSpaces, context, cb, cookie);
    }

    void end_personalSpacesChanged(const ::Ice::AsyncResultPtr& result);

private:

    ::Ice::AsyncResultPtr _iceI_begin_personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq&, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq&, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq&, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    /**
     * Obtains the Slice type ID corresponding to this interface.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

protected:
    /// \cond INTERNAL

    virtual ::IceProxy::Ice::Object* _newInstance() const;
    /// \endcond
};

}

}

namespace RoboCompSocialRules
{

class SocialRules : public virtual ::Ice::Object
{
public:

    typedef SocialRulesPrx ProxyType;
    typedef SocialRulesPtr PointerType;

    virtual ~SocialRules();

    /**
     * Determines whether this object supports an interface with the given Slice type ID.
     * @param id The fully-scoped Slice type ID.
     * @param current The Current object for the invocation.
     * @return True if this object supports the interface, false, otherwise.
     */
    virtual bool ice_isA(const ::std::string& id, const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a list of the Slice type IDs representing the interfaces supported by this object.
     * @param current The Current object for the invocation.
     * @return A list of fully-scoped type IDs.
     */
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains a Slice type ID representing the most-derived interface supported by this object.
     * @param current The Current object for the invocation.
     * @return A fully-scoped type ID.
     */
    virtual const ::std::string& ice_id(const ::Ice::Current& current = ::Ice::emptyCurrent) const;

    /**
     * Obtains the Slice type ID corresponding to this class.
     * @return A fully-scoped type ID.
     */
    static const ::std::string& ice_staticId();

    virtual void objectsChanged(const SRObjectSeq& objectsAffordances, const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_objectsChanged(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    virtual void personalSpacesChanged(const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& intimateSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& personalSpaces, const ::RoboCompSocialNavigationGaussian::SNGPolylineSeq& socialSpaces, const ::Ice::Current& current = ::Ice::emptyCurrent) = 0;
    /// \cond INTERNAL
    bool _iceD_personalSpacesChanged(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

    /// \cond INTERNAL
    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&);
    /// \endcond

protected:

    /// \cond STREAM
    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
    /// \endcond
};

/// \cond INTERNAL
inline bool operator==(const SocialRules& lhs, const SocialRules& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const SocialRules& lhs, const SocialRules& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}
/// \endcond

}

/// \cond STREAM
namespace Ice
{

template<>
struct StreamableTraits< ::RoboCompSocialRules::SRObject>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 15;
    static const bool fixedLength = false;
};

template<typename S>
struct StreamWriter< ::RoboCompSocialRules::SRObject, S>
{
    static void write(S* ostr, const ::RoboCompSocialRules::SRObject& v)
    {
        ostr->write(v.name);
        ostr->write(v.x);
        ostr->write(v.z);
        ostr->write(v.interacting);
        ostr->write(v.affordance);
        ostr->write(v.cost);
    }
};

template<typename S>
struct StreamReader< ::RoboCompSocialRules::SRObject, S>
{
    static void read(S* istr, ::RoboCompSocialRules::SRObject& v)
    {
        istr->read(v.name);
        istr->read(v.x);
        istr->read(v.z);
        istr->read(v.interacting);
        istr->read(v.affordance);
        istr->read(v.cost);
    }
};

}
/// \endcond

namespace RoboCompSocialRules
{

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 * Create a wrapper instance by calling ::RoboCompSocialRules::newCallback_SocialRules_objectsChanged.
 */
template<class T>
class CallbackNC_SocialRules_objectsChanged : public Callback_SocialRules_objectsChanged_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_SocialRules_objectsChanged(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_objectsChanged<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_objectsChanged<T>(instance, 0, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_objectsChanged<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_objectsChanged<T>(instance, 0, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 * Create a wrapper instance by calling ::RoboCompSocialRules::newCallback_SocialRules_objectsChanged.
 */
template<class T, typename CT>
class Callback_SocialRules_objectsChanged : public Callback_SocialRules_objectsChanged_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_SocialRules_objectsChanged(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T, typename CT> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_objectsChanged<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T, typename CT> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_objectsChanged<T, CT>(instance, 0, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T, typename CT> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_objectsChanged<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_objectsChanged.
 */
template<class T, typename CT> Callback_SocialRules_objectsChangedPtr
newCallback_SocialRules_objectsChanged(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_objectsChanged<T, CT>(instance, 0, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class used for calls to
 * IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 * Create a wrapper instance by calling ::RoboCompSocialRules::newCallback_SocialRules_personalSpacesChanged.
 */
template<class T>
class CallbackNC_SocialRules_personalSpacesChanged : public Callback_SocialRules_personalSpacesChanged_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_SocialRules_personalSpacesChanged(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_personalSpacesChanged<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_personalSpacesChanged<T>(instance, 0, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_personalSpacesChanged<T>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_SocialRules_personalSpacesChanged<T>(instance, 0, excb, sentcb);
}

/**
 * Type-safe asynchronous callback wrapper class with cookie support used for calls to
 * IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 * Create a wrapper instance by calling ::RoboCompSocialRules::newCallback_SocialRules_personalSpacesChanged.
 */
template<class T, typename CT>
class Callback_SocialRules_personalSpacesChanged : public Callback_SocialRules_personalSpacesChanged_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_SocialRules_personalSpacesChanged(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T, typename CT> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_personalSpacesChanged<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T, typename CT> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_personalSpacesChanged<T, CT>(instance, 0, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param cb The success method of the callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T, typename CT> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_personalSpacesChanged<T, CT>(instance, cb, excb, sentcb);
}

/**
 * Creates a callback wrapper instance that delegates to your object.
 * Use this overload when your callback methods receive a cookie value.
 * @param instance The callback object.
 * @param excb The exception method of the callback object.
 * @param sentcb The sent method of the callback object.
 * @return An object that can be passed to an asynchronous invocation of IceProxy::RoboCompSocialRules::SocialRules::begin_personalSpacesChanged.
 */
template<class T, typename CT> Callback_SocialRules_personalSpacesChangedPtr
newCallback_SocialRules_personalSpacesChanged(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_SocialRules_personalSpacesChanged<T, CT>(instance, 0, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
