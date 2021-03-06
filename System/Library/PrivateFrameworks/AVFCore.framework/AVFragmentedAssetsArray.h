/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSArray.h>

@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray {

	unsigned long long _count;
	unsigned long long _firstSequenceNumber;
	NSMutableDictionary* _cachedFragments;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 firstSequenceNumber:(unsigned long long)arg2 ;
@end

