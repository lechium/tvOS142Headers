/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSString, NSArray;

@interface EDAMManageNoteSharesParameters : FATObject {

	NSString* _noteGuid;
	NSArray* _membershipsToUpdate;
	NSArray* _invitationsToUpdate;
	NSArray* _membershipsToUnshare;
	NSArray* _invitationsToUnshare;

}

@property (nonatomic,retain) NSString * noteGuid;                         //@synthesize noteGuid=_noteGuid - In the implementation block
@property (nonatomic,retain) NSArray * membershipsToUpdate;               //@synthesize membershipsToUpdate=_membershipsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToUpdate;               //@synthesize invitationsToUpdate=_invitationsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * membershipsToUnshare;              //@synthesize membershipsToUnshare=_membershipsToUnshare - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToUnshare;              //@synthesize invitationsToUnshare=_invitationsToUnshare - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(NSArray *)membershipsToUpdate;
-(void)setMembershipsToUpdate:(NSArray *)arg1 ;
-(NSArray *)invitationsToUpdate;
-(void)setInvitationsToUpdate:(NSArray *)arg1 ;
-(NSArray *)membershipsToUnshare;
-(void)setMembershipsToUnshare:(NSArray *)arg1 ;
-(NSArray *)invitationsToUnshare;
-(void)setInvitationsToUnshare:(NSArray *)arg1 ;
@end

