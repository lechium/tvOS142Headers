/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DCIMServices/DCIMServices-Structs.h>
#import <CoreFoundation/NSData.h>

@interface PLIOSurfaceData : NSData {

	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned long long _length;

}
+(id)dataWithIOSurface:(void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithIOSurface:(void*)arg1 ;
-(id)initWithIOSurface:(void*)arg1 length:(unsigned long long)arg2 ;
@end

