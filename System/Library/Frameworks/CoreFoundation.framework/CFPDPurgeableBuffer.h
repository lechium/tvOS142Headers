/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	BOOL safe;
	BOOL usedMalloc;

}
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(id)initWithPropertyList:(void*)arg1 ;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(BOOL)purgable;
@end

