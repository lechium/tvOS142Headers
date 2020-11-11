/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer> {

	BOOL __wantsNotEqual;
	NSSet* _pidSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual;                                    //@synthesize _wantsNotEqual=__wantsNotEqual - In the implementation block
@property (nonatomic,readonly) NSSet * pidSet;                                         //@synthesize pidSet=_pidSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)init;
-(unsigned long long)_compoundPredicateType;
-(BOOL)passesPIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(BOOL)_wantsNotSubsystem;
-(NSSet *)pidSet;
-(BOOL)_wantsNotEqual;
-(void)addPIDNumber:(id)arg1 ;
-(void)addPIDNumberSet:(id)arg1 ;
@end

