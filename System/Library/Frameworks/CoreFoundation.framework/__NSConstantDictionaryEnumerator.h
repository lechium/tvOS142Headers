/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@class NSConstantDictionary;

@interface __NSConstantDictionaryEnumerator : NSEnumerator {

	NSConstantDictionary* _underlyingDictionary;
	unsigned long long _currentIndex;
	BOOL _isForKeys;

}
-(id)nextObject;
-(id)initWithConstantDictionary:(id)arg1 enumerateKeys:(BOOL)arg2 ;
@end

