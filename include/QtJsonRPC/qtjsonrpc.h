/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_JSONRPC_H
#define QT_JSONRPC_H

#include <QtCore>
#include <QtNetwork>
#include <QtSql>
#include <QtScript>
#include <Essentials>
#include <NetProtocol>
#include <QtRPC>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTJSONRPC_LIB)
#      define Q_JSONRPC_EXPORT Q_DECL_EXPORT
#    else
#      define Q_JSONRPC_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_JSONRPC_EXPORT
#endif

namespace N   {
namespace RPC {

class Q_JSONRPC_EXPORT JsonClient ;
class Q_JSONRPC_EXPORT JsonServer ;

class Q_JSONRPC_EXPORT JsonClient : public Client
{
  public:

    explicit JsonClient (QObject * parent = NULL) ;
    virtual ~JsonClient (void) ;

  protected:

  private:

};

class Q_JSONRPC_EXPORT JsonServer : public Server
{
  public:

    explicit JsonServer (QObject * parent = NULL) ;
    virtual ~JsonServer (void) ;

  protected:

  private:

};

}
}

QT_END_NAMESPACE

#endif
