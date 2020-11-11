/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _PASStringPairs : NSObject {

	NSArray* _keys;
	NSArray* _values;

}

@property (nonatomic,readonly) NSArray * keys;                        //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSArray * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(NSArray *)values;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSArray *)keys;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(id)initWithKeys:(id)arg1 values:(id)arg2 ;
@end

