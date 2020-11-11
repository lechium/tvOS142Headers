/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EKObject;

@interface EKObjectValidationContext : NSObject {

	BOOL _reachedMaxDepth;
	EKObject* _rootObject;
	unsigned long long _depth;

}

@property (nonatomic,readonly) EKObject * rootObject;               //@synthesize rootObject=_rootObject - In the implementation block
@property (assign,nonatomic) unsigned long long depth;              //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) BOOL reachedMaxDepth;                  //@synthesize reachedMaxDepth=_reachedMaxDepth - In the implementation block
-(EKObject *)rootObject;
-(unsigned long long)depth;
-(void)setDepth:(unsigned long long)arg1 ;
-(BOOL)reachedMaxDepth;
-(id)initWithRootObject:(id)arg1 ;
-(void)faultIfNeededForObject:(id)arg1 ;
-(void)setReachedMaxDepth:(BOOL)arg1 ;
@end

