/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, RBEntitlementPredicate, NSDictionary;

@interface RBDomainAttributeTemplate : NSObject {

	NSArray* _attributeGroups;
	NSString* _domain;
	NSString* _name;
	RBEntitlementPredicate* _originatorEntitlements;
	NSDictionary* _targetBundleProperties;
	RBEntitlementPredicate* _targetEntitlements;
	NSDictionary* _additionalRestrictions;
	NSString* _endowmentNamespace;

}

@property (nonatomic,retain) NSArray * attributeGroups;              //@synthesize attributeGroups=_attributeGroups - In the implementation block
-(id)description;
-(NSArray *)attributeGroups;
-(void)setAttributeGroups:(NSArray *)arg1 ;
@end

