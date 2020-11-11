/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _UITextInputSessionAccumulator : NSObject {

	unsigned long long _values[7];
	NSString* _name;
	long long _type;
	unsigned long long _depth;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
@property (nonatomic,readonly) id block;                              //@synthesize block=_block - In the implementation block
+(id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(NSString *)name;
-(long long)type;
-(unsigned long long)depth;
-(id)block;
-(void)reset;
-(void)enumerateAnalytics:(/*^block*/id)arg1 ;
-(void)increaseWithActions:(id)arg1 ;
@end
