/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServerBTLE;

@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject {

	HAPAccessoryServerBTLE* _accessoryServer;
	double _lastSeen;

}

@property (nonatomic,readonly) HAPAccessoryServerBTLE * accessoryServer;              //@synthesize accessoryServer=_accessoryServer - In the implementation block
@property (assign,nonatomic) double lastSeen;                                         //@synthesize lastSeen=_lastSeen - In the implementation block
+(id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1 ;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(HAPAccessoryServerBTLE *)accessoryServer;
@end

