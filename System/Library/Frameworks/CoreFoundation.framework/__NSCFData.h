/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface __NSCFData : NSMutableData {

	unsigned long long _cfinfoa;
	long long _length;
	long long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)length;
-(const void*)bytes;
-(Class)classForCoder;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(BOOL)_providesConcreteBacking;
@end

