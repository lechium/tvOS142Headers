/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSAssertionIdentifier, RBSTarget, NSString, NSArray;

@interface RBSAssertionDescriptor : NSObject <RBSXPCSecureCoding, NSCopying> {

	RBSAssertionIdentifier* _identifier;
	RBSTarget* _target;
	NSString* _explanation;
	NSArray* _attributes;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) RBSTarget * target;                                        //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * explanation;                           //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)setTarget:(RBSTarget *)arg1 ;
-(RBSTarget *)target;
-(RBSAssertionIdentifier *)identifier;
-(NSArray *)attributes;
-(NSString *)explanation;
-(id)copyWithIdentifier:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end
