/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM nsIPop3IncomingServer.idl
 */

#ifndef __gen_nsIPop3IncomingServer_h__
#define __gen_nsIPop3IncomingServer_h__

#include "nsISupports.h" /* interface nsISupports */
#include "nsrootidl.h" /* interface nsrootidl */

/* starting interface:    nsIPop3IncomingServer */

/* {758a8970-e628-11d2-b7fc-00805f05ffa5} */
#define NS_IPOP3INCOMINGSERVER_IID_STR "758a8970-e628-11d2-b7fc-00805f05ffa5"
#define NS_IPOP3INCOMINGSERVER_IID \
  {0x758a8970, 0xe628, 0x11d2, \
    { 0xb7, 0xfc, 0x00, 0x80, 0x5f, 0x05, 0xff, 0xa5 }}

class nsIPop3IncomingServer : public nsISupports {
 public: 
  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IPOP3INCOMINGSERVER_IID)

  /* attribute boolean leaveMessagesOnServer; */
  NS_IMETHOD GetLeaveMessagesOnServer(PRBool *aLeaveMessagesOnServer) = 0;
  NS_IMETHOD SetLeaveMessagesOnServer(PRBool aLeaveMessagesOnServer) = 0;

  /* attribute boolean deleteMailLeftOnServer; */
  NS_IMETHOD GetDeleteMailLeftOnServer(PRBool *aDeleteMailLeftOnServer) = 0;
  NS_IMETHOD SetDeleteMailLeftOnServer(PRBool aDeleteMailLeftOnServer) = 0;
};

#endif /* __gen_nsIPop3IncomingServer_h__ */
