/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {

	sockaddr_storage address;
	ether_addr ethernet_address;
	char* hostname;
	int original_fd;
	unsigned short priority;
	unsigned calculated_hostname : 1;

}
-(void)dealloc;
-(id)copyDictionary;
-(unsigned short)port;
-(unsigned)type;
-(unsigned short)priority;
-(void)setPriority:(unsigned short)arg1 ;
-(char*)createDescription:(BOOL)arg1 ;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(id)copyEndpoint;
-(unsigned long long)getHash;
-(const char*)hostname;
@end

