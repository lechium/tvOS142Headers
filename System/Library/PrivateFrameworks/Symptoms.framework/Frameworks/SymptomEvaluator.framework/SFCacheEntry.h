/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject, NSDate;

@interface SFCacheEntry : NSObject {

	NSObject* _item;
	NSDate* _lastUsed;

}

@property (nonatomic,retain) NSObject * item;                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDate * lastUsed;              //@synthesize lastUsed=_lastUsed - In the implementation block
-(void)setItem:(NSObject *)arg1 ;
-(NSObject *)item;
-(NSDate *)lastUsed;
-(void)setLastUsed:(NSDate *)arg1 ;
-(id)initWithCacheItem:(id)arg1 ;
@end

