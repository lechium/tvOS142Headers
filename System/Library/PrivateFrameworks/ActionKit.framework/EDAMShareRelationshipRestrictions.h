/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMShareRelationshipRestrictions : FATObject {

	NSNumber* _noSetReadOnly;
	NSNumber* _noSetReadPlusActivity;
	NSNumber* _noSetModify;
	NSNumber* _noSetFullAccess;

}

@property (nonatomic,retain) NSNumber * noSetReadOnly;                      //@synthesize noSetReadOnly=_noSetReadOnly - In the implementation block
@property (nonatomic,retain) NSNumber * noSetReadPlusActivity;              //@synthesize noSetReadPlusActivity=_noSetReadPlusActivity - In the implementation block
@property (nonatomic,retain) NSNumber * noSetModify;                        //@synthesize noSetModify=_noSetModify - In the implementation block
@property (nonatomic,retain) NSNumber * noSetFullAccess;                    //@synthesize noSetFullAccess=_noSetFullAccess - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)noSetReadOnly;
-(void)setNoSetReadOnly:(NSNumber *)arg1 ;
-(NSNumber *)noSetReadPlusActivity;
-(void)setNoSetReadPlusActivity:(NSNumber *)arg1 ;
-(NSNumber *)noSetModify;
-(void)setNoSetModify:(NSNumber *)arg1 ;
-(NSNumber *)noSetFullAccess;
-(void)setNoSetFullAccess:(NSNumber *)arg1 ;
@end
