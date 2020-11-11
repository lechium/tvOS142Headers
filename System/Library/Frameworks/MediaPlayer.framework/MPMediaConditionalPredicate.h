/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class MPMediaPredicate, NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	MPMediaPredicate* _conditionPredicate;
	MPMediaPredicate* _thenPredicate;
	MPMediaPredicate* _elsePredicate;

}

@property (nonatomic,copy,readonly) MPMediaPredicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(MPMediaPredicate *)conditionPredicate;
-(MPMediaPredicate *)thenPredicate;
-(MPMediaPredicate *)elsePredicate;
-(id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2 ;
-(id)protobufferEncodableObjectFromLibrary:(id)arg1 ;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
@end

