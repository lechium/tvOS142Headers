/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libxpc_datastores.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libxpc_datastores.dylib/OS_xpc_datastore_object.h>
#import <libobjc.A.dylib/XDS_xpc_datastore_subscriber.h>

@class NSString;

@interface OS_xpc_datastore_subscriber : OS_xpc_datastore_object <XDS_xpc_datastore_subscriber> {

	unsigned recvp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyCurrentStateWithReqType:(unsigned long long)arg1 ;
@end

