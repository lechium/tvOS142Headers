/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject {

	NSMutableDictionary* _cacheWithoutInputMode;
	NSMutableDictionary* _cacheWithInputMode;

}
+(id)sharedInstance;
-(id)init;
-(id)flush;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3 ;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3 ;
@end

