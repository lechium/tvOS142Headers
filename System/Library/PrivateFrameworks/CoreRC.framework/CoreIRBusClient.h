/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreIRBus.h>

@interface CoreIRBusClient : CoreIRBus
+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteDevice:(id)arg1 error:(id*)arg2 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4 ;
-(BOOL)setPairState:(BOOL)arg1 forAppleRemote:(id)arg2 error:(id*)arg3 ;
@end

