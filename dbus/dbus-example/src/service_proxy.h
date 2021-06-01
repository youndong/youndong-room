
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__service_proxy_h__PROXY_MARSHAL_H
#define __dbusxx__service_proxy_h__PROXY_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace com {
namespace example {

class SampleInterface_proxy
: public ::DBus::InterfaceProxy
{
public:

    SampleInterface_proxy()
    : ::DBus::InterfaceProxy("com.example.SampleInterface")
    {
        connect_signal(SampleInterface_proxy, Changed, _Changed_stub);
        connect_signal(SampleInterface_proxy, PropertyChanged, _PropertyChanged_stub);
    }

public:

    /* properties exported by this interface */
        const uint8_t Bar() {
            ::DBus::CallMessage call ;
             call.member("Get"); call.interface("org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            const std::string interface_name = "com.example.SampleInterface";
            const std::string property_name  = "Bar";
            wi << interface_name;
            wi << property_name;
            ::DBus::Message ret = this->invoke_method (call);
            ::DBus::MessageIter ri = ret.reader ();
            ::DBus::Variant argout; 
            ri >> argout;
            return argout;
        };
        void Bar( const uint8_t & input) {
            ::DBus::CallMessage call ;
             call.member("Set");  call.interface( "org.freedesktop.DBus.Properties");
            ::DBus::MessageIter wi = call.writer(); 
            ::DBus::Variant value;
            ::DBus::MessageIter vi = value.writer ();
            vi << input;
            const std::string interface_name = "com.example.SampleInterface";
            const std::string property_name  = "Bar";
            wi << interface_name;
            wi << property_name;
            wi << value;
            ::DBus::Message ret = this->invoke_method (call);
        };
public:

    /* methods exported by this interface,
     * this functions will invoke the corresponding methods on the remote objects
     */
    std::vector< uint8_t > fbs(const std::vector< uint8_t >& payload)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << payload;
        call.member("fbs");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        std::vector< uint8_t > argout;
        ri >> argout;
        return argout;
    }

    void Method_A(const int32_t& foo, std::string& bar, std::map< uint32_t, std::string >& baz)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << foo;
        call.member("Method_A");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        ri >> bar;
        ri >> baz;
    }

    ::DBus::Variant Method_B(const ::DBus::Struct< int32_t, int32_t, uint32_t >& bar)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << bar;
        call.member("Method_B");
        ::DBus::Message ret = invoke_method (call);
        ::DBus::MessageIter ri = ret.reader();

        ::DBus::Variant argout;
        ri >> argout;
        return argout;
    }

    void Method_C(const ::DBus::Struct< int32_t, int32_t, std::vector< ::DBus::Variant > >& bar)
    {
        ::DBus::CallMessage call;
        ::DBus::MessageIter wi = call.writer();

        wi << bar;
        call.member("Method_C");
        ::DBus::Message ret = invoke_method (call);
    }


public:

    /* signal handlers for this interface
     */
    virtual void Changed(const bool& new_value) = 0;
    virtual void PropertyChanged(const std::string& argin0, const ::DBus::Variant& argin1) = 0;

private:

    /* unmarshalers (to unpack the DBus message before calling the actual signal handler)
     */
    void _Changed_stub(const ::DBus::SignalMessage &sig)
    {
        ::DBus::MessageIter ri = sig.reader();

        bool new_value;
        ri >> new_value;
        Changed(new_value);
    }
    void _PropertyChanged_stub(const ::DBus::SignalMessage &sig)
    {
        ::DBus::MessageIter ri = sig.reader();

        std::string arg0;
        ri >> arg0;
        ::DBus::Variant arg1;
        ri >> arg1;
        PropertyChanged(arg0, arg1);
    }
};

} } 
#endif //__dbusxx__service_proxy_h__PROXY_MARSHAL_H
